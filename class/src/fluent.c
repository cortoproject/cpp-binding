
#include "corto/gen/cpp/class/class.h"
#include "corto/gen/c/common/common.h"
#include "corto/gen/cpp/common/common.h"

static corto_int16 cpp_fluent_visitMember(corto_serializer s, corto_value *info, void *userData) {
    cpp_classWalk_t *data = userData;
    corto_type t = corto_value_getType(info);
    corto_member m = info->is.member.t;

    corto_id id, classId;
    cpp_typeIdentifier(data->g, t, Cpp_Return, Cpp_ByVal, id);
    g_oid(data->g, corto_parentof(m), classId);

    /* Write implementation */
    g_fileWrite(data->header, "T& %s(%s value)",
      corto_idof(m),
      id);

    g_fileWrite(data->header, "{ ((_c::%s*)this->ptr)->%s = value; return this->_this; }\n",
      classId, corto_idof(m));

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
    corto_id id;
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s create()\n", id);
    g_fileWrite(data->header,
      "    { return %s((_c::%s*)corto::Object_t::create((corto_type)_c::%s_o, &this->_value)); }\n",
      id, id, id);
    return 0;
}

static corto_int16 cpp_fluent_createChild(corto_type type, cpp_classWalk_t *data) {
    corto_id id;
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s createChild(corto::Object parent, std::string id)\n", id);
    g_fileWrite(data->header,
      "    { return %s((_c::%s*)corto::Object_t::createChild(parent, id, (corto_type)_c::%s_o, &this->_value)); }\n",
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
        g_fileWrite(data->header, "{ return %s_v<T>(this->_this, this->ptr); }\n", base);
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
    corto_id id;
    g_oid(data->g, type, id);

    g_fileWrite(data->header, "\n");

    if (cpp_fluentTemplDecl(type, base, data)) {
        goto error;
    }

    g_fileWrite(data->header, "// Factory class\n");
    g_fileWrite(data->header, "class %s_t : public %s_v<%s_t>\n", id, id, id);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s_t() : %s_v<%s_t>(*this, &_value) {}\n", id, id, id);

    g_fileWrite(data->header, "\n");

    if (cpp_fluent_create(type, data)) {
        goto error;
    }
    if (cpp_fluent_createChild(type, data)) {
        goto error;
    }

    g_fileDedent(data->header);
    g_fileWrite(data->header, "private:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "struct _c::%s _value;\n", id);
    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");

    return 0;
error:
    return -1;
}
