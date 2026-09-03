

#include "huaweicloud/smn/v2/model/UpdateSubscriptionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateSubscriptionRequestBody::UpdateSubscriptionRequestBody()
{
    remark_ = "";
    remarkIsSet_ = false;
    verificationCode_ = "";
    verificationCodeIsSet_ = false;
}

UpdateSubscriptionRequestBody::~UpdateSubscriptionRequestBody() = default;

void UpdateSubscriptionRequestBody::validate()
{
}

web::json::value UpdateSubscriptionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(verificationCodeIsSet_) {
        val[utility::conversions::to_string_t("verification_code")] = ModelBase::toJson(verificationCode_);
    }

    return val;
}
bool UpdateSubscriptionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationCode(refVal);
        }
    }
    return ok;
}


std::string UpdateSubscriptionRequestBody::getRemark() const
{
    return remark_;
}

void UpdateSubscriptionRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool UpdateSubscriptionRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void UpdateSubscriptionRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

std::string UpdateSubscriptionRequestBody::getVerificationCode() const
{
    return verificationCode_;
}

void UpdateSubscriptionRequestBody::setVerificationCode(const std::string& value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool UpdateSubscriptionRequestBody::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void UpdateSubscriptionRequestBody::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

}
}
}
}
}


