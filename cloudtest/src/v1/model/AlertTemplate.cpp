

#include "huaweicloud/cloudtest/v1/model/AlertTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertTemplate::AlertTemplate()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AlertTemplate::~AlertTemplate() = default;

void AlertTemplate::validate()
{
}

web::json::value AlertTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AlertTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string AlertTemplate::getId() const
{
    return id_;
}

void AlertTemplate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlertTemplate::idIsSet() const
{
    return idIsSet_;
}

void AlertTemplate::unsetid()
{
    idIsSet_ = false;
}

std::string AlertTemplate::getName() const
{
    return name_;
}

void AlertTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlertTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void AlertTemplate::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


