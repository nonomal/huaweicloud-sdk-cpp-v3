

#include "huaweicloud/cloudtest/v1/model/ResourcePool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResourcePool::ResourcePool()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ResourcePool::~ResourcePool() = default;

void ResourcePool::validate()
{
}

web::json::value ResourcePool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ResourcePool::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ResourcePool::getId() const
{
    return id_;
}

void ResourcePool::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourcePool::idIsSet() const
{
    return idIsSet_;
}

void ResourcePool::unsetid()
{
    idIsSet_ = false;
}

std::string ResourcePool::getName() const
{
    return name_;
}

void ResourcePool::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourcePool::nameIsSet() const
{
    return nameIsSet_;
}

void ResourcePool::unsetname()
{
    nameIsSet_ = false;
}

std::string ResourcePool::getType() const
{
    return type_;
}

void ResourcePool::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourcePool::typeIsSet() const
{
    return typeIsSet_;
}

void ResourcePool::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


