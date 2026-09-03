

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseDingTalkBotEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseDingTalkBotEndpointInfo::ListSubscriptionUserResponseDingTalkBotEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    robotCode_ = "";
    robotCodeIsSet_ = false;
}

ListSubscriptionUserResponseDingTalkBotEndpointInfo::~ListSubscriptionUserResponseDingTalkBotEndpointInfo() = default;

void ListSubscriptionUserResponseDingTalkBotEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseDingTalkBotEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(robotCodeIsSet_) {
        val[utility::conversions::to_string_t("robot_code")] = ModelBase::toJson(robotCode_);
    }

    return val;
}
bool ListSubscriptionUserResponseDingTalkBotEndpointInfo::fromJson(const web::json::value& val)
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


std::string ListSubscriptionUserResponseDingTalkBotEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseDingTalkBotEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseDingTalkBotEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseDingTalkBotEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ListSubscriptionUserResponseDingTalkBotEndpointInfo::getRobotCode() const
{
    return robotCode_;
}

void ListSubscriptionUserResponseDingTalkBotEndpointInfo::setRobotCode(const std::string& value)
{
    robotCode_ = value;
    robotCodeIsSet_ = true;
}

bool ListSubscriptionUserResponseDingTalkBotEndpointInfo::robotCodeIsSet() const
{
    return robotCodeIsSet_;
}

void ListSubscriptionUserResponseDingTalkBotEndpointInfo::unsetrobotCode()
{
    robotCodeIsSet_ = false;
}

}
}
}
}
}


