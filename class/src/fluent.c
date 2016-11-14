
#include "corto/gen/cpp/class/class.h"
#include "corto/gen/c/common/common.h"
#include "corto/gen/cpp/common/common.h"

static corto_int16 cpp_fluent_visitMember(corto_serializer s, corto_value *info, void *userData) {
    cpp_classWalk_t *data = userData;
    corto_type t = corto_value_getType(info);
    corto_member m = info->is.member.t;

    corto_id id, cId;
    cpp_typeId(data->g, t, Cpp_Return, Cpp_ByVal, id);
    cpp_typeId(data->g, corto_parentof(m), Cpp_Return, Cpp_ByCRef, cId);

    /* Write implementation */
    g_fileWrite(data->header, "T& %s(%s value)",
      corto_idof(m),
      id);

    g_fileWrite(data->header, "{ ((%s)this->m_ptr)->%s = value; return this->m_this; }\n",
      cId, corto_idof(m));

    return 0;
}

static corto_int16 cpp_fluent_walkMembers(corto_type type, cpp_classWalk_t *data) {
    struct corto_serializer_s s;
    corto_serializerInit(&s);
    s.metaprogram[CORTO_MEMBER] = cpp_fluent_visitMember;
    s.metaprogram[CORTO_BASE] = NULL;
    if (corto_metaWalk(&s, type, data)) {
        goto error;
    }
    return 0;
error:
    return -1;
}

static corto_int16 cpp_fluent_create(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g,type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s create();\n", id);
    g_fileWrite(data->hiddenImpl, "%s %s_t::create()\n", id, corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { return %s((%s)((corto::Object_t*)this)->create((corto_type)%s, &this->m_value)); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_createChild(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g, type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s createChild(corto::Object parent, std::string id)\n", id);
    g_fileWrite(data->header,
      "    { return %s((%s)((corto::Object_t*)this)->createChild(parent, id, (corto_type)%s, &this->m_value)); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_value(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCVal, cId);
    cpp_varId(data->g, type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s_val value()\n", id);
    g_fileWrite(data->header, "    { return %s_val(&this->m_value); }\n", id);
    return 0;
}

static corto_int16 cpp_fluent_update(corto_type type, cpp_classWalk_t *data) {
    corto_id id;
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "void update()\n");
    g_fileWrite(data->header,
      "    { ((corto::Object_t*)this)->update(&this->m_value); }\n",
      id, id, id);
    return 0;
}

corto_int16 cpp_fluentTemplDecl(corto_type type, char *base, cpp_classWalk_t *data) {
    corto_id id;
    g_oid(data->g, type, id);

    g_fileWrite(data->header, "// Helper class that sets members and enables inheritance for factories\n");
    g_fileWrite(data->header, "template <class T>\n");
    g_fileWrite(data->header, "class %s_v : public %s_v<T>\n", id, base);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s_v(T& _this, void *ptr) : %s_v<T>(_this, ptr) { }\n", id, base);

    if (corto_instanceof(corto_interface_o, type) && corto_interface(type)->base) {
        g_fileWrite(data->header, "%s_v<T> super() ", base);
        g_fileWrite(data->header, "{ return %s_v<T>(this->m_this, this->ptr); }\n", base);
    }

    if (cpp_fluent_walkMembers(type, data)) {
        goto error;
    }

    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");
    g_fileWrite(data->header, "\n");

    return 0;
error:
    return -1;
}

corto_int16 cpp_fluentDecl(corto_type type, char *base, cpp_classWalk_t *data) {
    corto_id id, cId;
    g_oid(data->g, type, id);
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCVal, cId);

    g_fileWrite(data->header, "\n");

    if (cpp_fluentTemplDecl(type, base, data)) {
        goto error;
    }

    g_fileWrite(data->header, "// Factory class\n");
    g_fileWrite(data->header, "class %s_t : public %s_v<%s_t>, corto::Object_t\n", id, id, id);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s_t() : %s_v<%s_t>(*this, &m_value), corto::Object_t(corto::null) {}\n", id, id, id);
    g_fileWrite(data->header, "%s_t(%s& obj) : %s_v<%s_t>(*this, &m_value), corto::Object_t(obj) {}\n", id, id, id, id);

    g_fileWrite(data->header, "\n");

    if (cpp_fluent_create(type, data)) {
        goto error;
    }
    if (cpp_fluent_createChild(type, data)) {
        goto error;
    }
    if (cpp_fluent_update(type, data)) {
        goto error;
    }
    if (cpp_fluent_value(type, data)) {
        goto error;
    }

    g_fileDedent(data->header);
    g_fileWrite(data->header, "private:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "struct %s m_value;\n", cId);
    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");

    return 0;
error:
    return -1;
}
