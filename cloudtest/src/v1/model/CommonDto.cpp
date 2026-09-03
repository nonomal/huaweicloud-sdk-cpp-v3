

#include "huaweicloud/cloudtest/v1/model/CommonDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonDto::CommonDto()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CommonDto::~CommonDto() = default;

void CommonDto::validate()
{
}

web::json::value CommonDto::toJson() const
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
bool CommonDto::fromJson(const web::json::value& val)
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


std::string CommonDto::getId() const
{
    return id_;
}

void CommonDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommonDto::idIsSet() const
{
    return idIsSet_;
}

void CommonDto::unsetid()
{
    idIsSet_ = false;
}

std::string CommonDto::getName() const
{
    return name_;
}

void CommonDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommonDto::nameIsSet() const
{
    return nameIsSet_;
}

void CommonDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


