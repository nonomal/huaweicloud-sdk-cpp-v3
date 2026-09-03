

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestSmsEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestSmsEndpointInfo::CreateSubscriptionUserRequestSmsEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    verificationCodeEnabled_ = false;
    verificationCodeEnabledIsSet_ = false;
}

CreateSubscriptionUserRequestSmsEndpointInfo::~CreateSubscriptionUserRequestSmsEndpointInfo() = default;

void CreateSubscriptionUserRequestSmsEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestSmsEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(verificationCodeEnabledIsSet_) {
        val[utility::conversions::to_string_t("verification_code_enabled")] = ModelBase::toJson(verificationCodeEnabled_);
    }

    return val;
}
bool CreateSubscriptionUserRequestSmsEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_code_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_code_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationCodeEnabled(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionUserRequestSmsEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestSmsEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

bool CreateSubscriptionUserRequestSmsEndpointInfo::isVerificationCodeEnabled() const
{
    return verificationCodeEnabled_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::setVerificationCodeEnabled(bool value)
{
    verificationCodeEnabled_ = value;
    verificationCodeEnabledIsSet_ = true;
}

bool CreateSubscriptionUserRequestSmsEndpointInfo::verificationCodeEnabledIsSet() const
{
    return verificationCodeEnabledIsSet_;
}

void CreateSubscriptionUserRequestSmsEndpointInfo::unsetverificationCodeEnabled()
{
    verificationCodeEnabledIsSet_ = false;
}

}
}
}
}
}


