

#include "huaweicloud/smn/v2/model/SubscriptionExtensionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SubscriptionExtensionResponse::SubscriptionExtensionResponse()
{
    verificationCodeEnabled_ = false;
    verificationCodeEnabledIsSet_ = false;
}

SubscriptionExtensionResponse::~SubscriptionExtensionResponse() = default;

void SubscriptionExtensionResponse::validate()
{
}

web::json::value SubscriptionExtensionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verificationCodeEnabledIsSet_) {
        val[utility::conversions::to_string_t("verification_code_enabled")] = ModelBase::toJson(verificationCodeEnabled_);
    }

    return val;
}
bool SubscriptionExtensionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


bool SubscriptionExtensionResponse::isVerificationCodeEnabled() const
{
    return verificationCodeEnabled_;
}

void SubscriptionExtensionResponse::setVerificationCodeEnabled(bool value)
{
    verificationCodeEnabled_ = value;
    verificationCodeEnabledIsSet_ = true;
}

bool SubscriptionExtensionResponse::verificationCodeEnabledIsSet() const
{
    return verificationCodeEnabledIsSet_;
}

void SubscriptionExtensionResponse::unsetverificationCodeEnabled()
{
    verificationCodeEnabledIsSet_ = false;
}

}
}
}
}
}


