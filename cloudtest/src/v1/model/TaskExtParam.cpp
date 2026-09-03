

#include "huaweicloud/cloudtest/v1/model/TaskExtParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskExtParam::TaskExtParam()
{
    delete_ = false;
    deleteIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sensitiveInfo_ = false;
    sensitiveInfoIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    variableType_ = "";
    variableTypeIsSet_ = false;
}

TaskExtParam::~TaskExtParam() = default;

void TaskExtParam::validate()
{
}

web::json::value TaskExtParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteIsSet_) {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(delete_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sensitiveInfoIsSet_) {
        val[utility::conversions::to_string_t("sensitiveInfo")] = ModelBase::toJson(sensitiveInfo_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(variableTypeIsSet_) {
        val[utility::conversions::to_string_t("variableType")] = ModelBase::toJson(variableType_);
    }

    return val;
}
bool TaskExtParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sensitiveInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sensitiveInfo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSensitiveInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variableType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variableType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariableType(refVal);
        }
    }
    return ok;
}


bool TaskExtParam::isDelete() const
{
    return delete_;
}

void TaskExtParam::setDelete(bool value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool TaskExtParam::deleteIsSet() const
{
    return deleteIsSet_;
}

void TaskExtParam::unsetdelete()
{
    deleteIsSet_ = false;
}

std::string TaskExtParam::getId() const
{
    return id_;
}

void TaskExtParam::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskExtParam::idIsSet() const
{
    return idIsSet_;
}

void TaskExtParam::unsetid()
{
    idIsSet_ = false;
}

std::string TaskExtParam::getName() const
{
    return name_;
}

void TaskExtParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskExtParam::nameIsSet() const
{
    return nameIsSet_;
}

void TaskExtParam::unsetname()
{
    nameIsSet_ = false;
}

bool TaskExtParam::isSensitiveInfo() const
{
    return sensitiveInfo_;
}

void TaskExtParam::setSensitiveInfo(bool value)
{
    sensitiveInfo_ = value;
    sensitiveInfoIsSet_ = true;
}

bool TaskExtParam::sensitiveInfoIsSet() const
{
    return sensitiveInfoIsSet_;
}

void TaskExtParam::unsetsensitiveInfo()
{
    sensitiveInfoIsSet_ = false;
}

std::string TaskExtParam::getValue() const
{
    return value_;
}

void TaskExtParam::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TaskExtParam::valueIsSet() const
{
    return valueIsSet_;
}

void TaskExtParam::unsetvalue()
{
    valueIsSet_ = false;
}

std::string TaskExtParam::getVariableType() const
{
    return variableType_;
}

void TaskExtParam::setVariableType(const std::string& value)
{
    variableType_ = value;
    variableTypeIsSet_ = true;
}

bool TaskExtParam::variableTypeIsSet() const
{
    return variableTypeIsSet_;
}

void TaskExtParam::unsetvariableType()
{
    variableTypeIsSet_ = false;
}

}
}
}
}
}


