

#include "huaweicloud/rds/v3/model/ShowAgencyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAgencyPolicyRequest::ShowAgencyPolicyRequest()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAgencyPolicyRequest::~ShowAgencyPolicyRequest() = default;

void ShowAgencyPolicyRequest::validate()
{
}

web::json::value ShowAgencyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowAgencyPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyPolicyRequest::getAgencyName() const
{
    return agencyName_;
}

void ShowAgencyPolicyRequest::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ShowAgencyPolicyRequest::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ShowAgencyPolicyRequest::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string ShowAgencyPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAgencyPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAgencyPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAgencyPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


