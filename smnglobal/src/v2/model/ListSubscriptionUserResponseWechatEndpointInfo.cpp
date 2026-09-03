

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseWechatEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseWechatEndpointInfo::ListSubscriptionUserResponseWechatEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

ListSubscriptionUserResponseWechatEndpointInfo::~ListSubscriptionUserResponseWechatEndpointInfo() = default;

void ListSubscriptionUserResponseWechatEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseWechatEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool ListSubscriptionUserResponseWechatEndpointInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListSubscriptionUserResponseWechatEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseWechatEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseWechatEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseWechatEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


