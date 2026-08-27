

#include "huaweicloud/gaussdb/v3/model/ShowKernelUpgradeCheckResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKernelUpgradeCheckResultRequest::ShowKernelUpgradeCheckResultRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowKernelUpgradeCheckResultRequest::~ShowKernelUpgradeCheckResultRequest() = default;

void ShowKernelUpgradeCheckResultRequest::validate()
{
}

web::json::value ShowKernelUpgradeCheckResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowKernelUpgradeCheckResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradePrecheckRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowKernelUpgradeCheckResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowKernelUpgradeCheckResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowKernelUpgradeCheckResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpgradePrecheckRequest ShowKernelUpgradeCheckResultRequest::getBody() const
{
    return body_;
}

void ShowKernelUpgradeCheckResultRequest::setBody(const UpgradePrecheckRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowKernelUpgradeCheckResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


