

#include "huaweicloud/gaussdb/v3/model/UpgradeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeConfigurationRequest::UpgradeConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeConfigurationRequest::~UpgradeConfigurationRequest() = default;

void UpgradeConfigurationRequest::validate()
{
}

web::json::value UpgradeConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void UpgradeConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool UpgradeConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void UpgradeConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

UpgradeConfigurationRequestBody UpgradeConfigurationRequest::getBody() const
{
    return body_;
}

void UpgradeConfigurationRequest::setBody(const UpgradeConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


