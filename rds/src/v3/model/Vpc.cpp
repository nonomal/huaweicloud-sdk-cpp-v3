

#include "huaweicloud/rds/v3/model/Vpc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Vpc::Vpc()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subnetsIsSet_ = false;
}

Vpc::~Vpc() = default;

void Vpc::validate()
{
}

web::json::value Vpc::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}
bool Vpc::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<Subnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}


std::string Vpc::getId() const
{
    return id_;
}

void Vpc::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Vpc::idIsSet() const
{
    return idIsSet_;
}

void Vpc::unsetid()
{
    idIsSet_ = false;
}

std::string Vpc::getName() const
{
    return name_;
}

void Vpc::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Vpc::nameIsSet() const
{
    return nameIsSet_;
}

void Vpc::unsetname()
{
    nameIsSet_ = false;
}

std::vector<Subnet>& Vpc::getSubnets()
{
    return subnets_;
}

void Vpc::setSubnets(const std::vector<Subnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool Vpc::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void Vpc::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


