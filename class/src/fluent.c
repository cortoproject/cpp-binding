
#include "corto/gen/c/common/common.h"
#include "corto/gen/cpp/common/common.h"
#include "corto/gen/cpp/class/class.h"

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
    g_fileWrite(data->header, "%s_ref create();\n", id);
    g_fileWrite(
      data->hiddenImpl,
      "%s_ref %s_t::create()\n",
      id,
      corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { return %s_ref((%s)((corto::Object_fluentAPI*)this)->create((corto_type)%s, &this->m_value)); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_declare(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g,type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s_ref declare();\n", id);
    g_fileWrite(
      data->hiddenImpl,
      "%s_ref %s_t::declare()\n",
      id,
      corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { return %s_ref((%s)((corto::Object_fluentAPI*)this)->declare((corto_type)%s)); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_define(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g,type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "void define();\n");
    g_fileWrite(
      data->hiddenImpl,
      "void %s_t::define()\n", corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { ((corto::Object_fluentAPI*)this)->define(&this->m_value); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_createChild(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g, type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s_ref createChild(corto::Object parent, std::string id);\n", id);
    g_fileWrite(
      data->hiddenImpl,
      "%s_ref %s_t::createChild(corto::Object parent, std::string id)\n",
      id,
      corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { return %s_ref((%s)((corto::Object_fluentAPI*)this)->createChild(parent, id, (corto_type)%s, &this->m_value)); }\n",
      id, cId, varId);
    return 0;
}

static corto_int16 cpp_fluent_declareChild(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCRef, cId);
    cpp_varId(data->g, type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s_ref declareChild(corto::Object parent, std::string id);\n", id);
    g_fileWrite(
      data->hiddenImpl,
      "%s_ref %s_t::declareChild(corto::Object parent, std::string id)\n",
      id,
      corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { return %s_ref((%s)((corto::Object_fluentAPI*)this)->declareChild(parent, id, (corto_type)%s)); }\n",
      id, cId, varId);
    return 0;
}


static corto_int16 cpp_fluent_value(corto_type type, cpp_classWalk_t *data) {
    corto_id id, cId, varId;
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCVal, cId);
    cpp_varId(data->g, type, varId);
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "%s_val value();\n", id);
    g_fileWrite(data->hiddenImpl, "%s_val %s_t::value()\n", id, corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl, "    { return %s_val(&this->m_value); }\n", id);
    return 0;
}

static corto_int16 cpp_fluent_update(corto_type type, cpp_classWalk_t *data) {
    corto_id id;
    g_oid(data->g, type, id);
    g_fileWrite(data->header, "void update();\n");
    g_fileWrite(data->hiddenImpl, "void %s_t::update()\n", corto_path(NULL, g_getCurrent(data->g), type, "::"));
    g_fileWrite(data->hiddenImpl,
      "    { ((corto::Object_fluentAPI*)this)->update(&this->m_value); }\n",
      id, id, id);
    return 0;
}

corto_int16 cpp_fluentTemplDecl(corto_type type, char *base, cpp_classWalk_t *data) {
    corto_id id;
    g_oid(data->g, type, id);

    g_fileWrite(data->header, "// helper template with T = fluent method returntype to support inheritance\n");
    g_fileWrite(data->header, "template <class T>\n");
    g_fileWrite(data->header, "class %s_fluent : public %s_fluent<T>\n", id, base);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s_fluent(T& _this, void *ptr) : %s_fluent<T>(_this, ptr) { }\n", id, base);
    g_fileWrite(data->header, "%s_fluent(T& _this, corto_object handle, void *ptr) : %s_fluent<T>(_this, handle, ptr) { }\n", id, base);

    if (corto_instanceof(corto_interface_o, type) && corto_interface(type)->base) {
        g_fileWrite(data->header, "%s_fluent<T> super() ", base);
        g_fileWrite(data->header, "{ return %s_fluent<T>(this->m_this, this->ptr); }\n", base);
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
    corto_id id, cId, typeVarId;
    g_oid(data->g, type, id);
    cpp_typeId(data->g, type, Cpp_Return, Cpp_ByCVal, cId);
    cpp_varId(data->g, type, typeVarId);

    g_fileWrite(data->header, "\n");

    if (cpp_fluentTemplDecl(type, base, data)) {
        goto error;
    }

    g_fileWrite(data->header, "// fluent factory for %s\n", id);
    g_fileWrite(data->header, "class %s_t : public %s_fluent<%s_t>\n", id, id, id);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);

    g_fileWrite(data->header, "%s_t();\n", id);
    g_fileWrite(data->hiddenImpl,
      "%s_t::%s_t() : %s_fluent<%s_t>(*this, &m_value) { m_type = corto_type(%s); memset(&m_value, 0, sizeof(m_value)); corto_initp(&m_value, %s);}\n",
      corto_path(NULL, g_getCurrent(data->g), type, "::"), id, id, id, typeVarId, typeVarId);

    g_fileWrite(data->header, "%s_t(%s& obj);\n", id, id);
    g_fileWrite(data->hiddenImpl,
      "%s_t::%s_t(%s& obj) : %s_fluent<%s_t>(*this, &m_value) { m_type = corto_type(%s); memset(&m_value, 0, sizeof(m_value)); corto_initp(&m_value, %s);}\n",
      corto_path(NULL, g_getCurrent(data->g), type, "::"), id, id, id, id, typeVarId, typeVarId);

    g_fileWrite(data->header, "%s_t(%s& obj, corto_object handle);\n", id, id);
    g_fileWrite(data->hiddenImpl,
      "%s_t::%s_t(%s& obj, corto_object handle) : %s_fluent<%s_t>(*this, handle, &m_value) { m_type = corto_type(%s); memset(&m_value, 0, sizeof(m_value)); corto_initp(&m_value, %s);}\n",
      corto_path(NULL, g_getCurrent(data->g), type, "::"), id, id, id, id, typeVarId, typeVarId);

    g_fileWrite(data->header, "\n");

    if (cpp_fluent_declare(type, data)) {
        goto error;
    }
    if (cpp_fluent_create(type, data)) {
        goto error;
    }
    if (cpp_fluent_declareChild(type, data)) {
        goto error;
    }
    if (cpp_fluent_createChild(type, data)) {
        goto error;
    }
    if (cpp_fluent_define(type, data)) {
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
