

#include "huaweicloud/rds/v3/model/ShowAgencyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAgencyPolicyResponse::ShowAgencyPolicyResponse()
{
    isExisted_ = false;
    isExistedIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rolesIsSet_ = false;
}

ShowAgencyPolicyResponse::~ShowAgencyPolicyResponse() = default;

void ShowAgencyPolicyResponse::validate()
{
}

web::json::value ShowAgencyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isExistedIsSet_) {
        val[utility::conversions::to_string_t("is_existed")] = ModelBase::toJson(isExisted_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool ShowAgencyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_existed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExisted(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<AgencyRole> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


bool ShowAgencyPolicyResponse::isIsExisted() const
{
    return isExisted_;
}

void ShowAgencyPolicyResponse::setIsExisted(bool value)
{
    isExisted_ = value;
    isExistedIsSet_ = true;
}

bool ShowAgencyPolicyResponse::isExistedIsSet() const
{
    return isExistedIsSet_;
}

void ShowAgencyPolicyResponse::unsetisExisted()
{
    isExistedIsSet_ = false;
}

std::string ShowAgencyPolicyResponse::getName() const
{
    return name_;
}

void ShowAgencyPolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowAgencyPolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowAgencyPolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AgencyRole>& ShowAgencyPolicyResponse::getRoles()
{
    return roles_;
}

void ShowAgencyPolicyResponse::setRoles(const std::vector<AgencyRole>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ShowAgencyPolicyResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void ShowAgencyPolicyResponse::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


