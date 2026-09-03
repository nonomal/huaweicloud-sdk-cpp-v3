

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestDingTalkBotEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestDingTalkBotEndpointInfo::CreateSubscriptionUserRequestDingTalkBotEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    appKey_ = "";
    appKeyIsSet_ = false;
    appSecret_ = "";
    appSecretIsSet_ = false;
    robotCode_ = "";
    robotCodeIsSet_ = false;
}

CreateSubscriptionUserRequestDingTalkBotEndpointInfo::~CreateSubscriptionUserRequestDingTalkBotEndpointInfo() = default;

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestDingTalkBotEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(appSecretIsSet_) {
        val[utility::conversions::to_string_t("app_secret")] = ModelBase::toJson(appSecret_);
    }
    if(robotCodeIsSet_) {
        val[utility::conversions::to_string_t("robot_code")] = ModelBase::toJson(robotCode_);
    }

    return val;
}
bool CreateSubscriptionUserRequestDingTalkBotEndpointInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotCode(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionUserRequestDingTalkBotEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestDingTalkBotEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string CreateSubscriptionUserRequestDingTalkBotEndpointInfo::getAppKey() const
{
    return appKey_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool CreateSubscriptionUserRequestDingTalkBotEndpointInfo::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string CreateSubscriptionUserRequestDingTalkBotEndpointInfo::getAppSecret() const
{
    return appSecret_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::setAppSecret(const std::string& value)
{
    appSecret_ = value;
    appSecretIsSet_ = true;
}

bool CreateSubscriptionUserRequestDingTalkBotEndpointInfo::appSecretIsSet() const
{
    return appSecretIsSet_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::unsetappSecret()
{
    appSecretIsSet_ = false;
}

std::string CreateSubscriptionUserRequestDingTalkBotEndpointInfo::getRobotCode() const
{
    return robotCode_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::setRobotCode(const std::string& value)
{
    robotCode_ = value;
    robotCodeIsSet_ = true;
}

bool CreateSubscriptionUserRequestDingTalkBotEndpointInfo::robotCodeIsSet() const
{
    return robotCodeIsSet_;
}

void CreateSubscriptionUserRequestDingTalkBotEndpointInfo::unsetrobotCode()
{
    robotCodeIsSet_ = false;
}

}
}
}
}
}


