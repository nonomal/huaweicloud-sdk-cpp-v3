

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestWechatEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestWechatEndpointInfo::CreateSubscriptionUserRequestWechatEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
}

CreateSubscriptionUserRequestWechatEndpointInfo::~CreateSubscriptionUserRequestWechatEndpointInfo() = default;

void CreateSubscriptionUserRequestWechatEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestWechatEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool CreateSubscriptionUserRequestWechatEndpointInfo::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionUserRequestWechatEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestWechatEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestWechatEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestWechatEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


