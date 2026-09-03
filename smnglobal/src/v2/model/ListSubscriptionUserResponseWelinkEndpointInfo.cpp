

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseWelinkEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseWelinkEndpointInfo::ListSubscriptionUserResponseWelinkEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
}

ListSubscriptionUserResponseWelinkEndpointInfo::~ListSubscriptionUserResponseWelinkEndpointInfo() = default;

void ListSubscriptionUserResponseWelinkEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseWelinkEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("client_id")] = ModelBase::toJson(clientId_);
    }

    return val;
}
bool ListSubscriptionUserResponseWelinkEndpointInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("client_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientId(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserResponseWelinkEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseWelinkEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseWelinkEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseWelinkEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ListSubscriptionUserResponseWelinkEndpointInfo::getClientId() const
{
    return clientId_;
}

void ListSubscriptionUserResponseWelinkEndpointInfo::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool ListSubscriptionUserResponseWelinkEndpointInfo::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void ListSubscriptionUserResponseWelinkEndpointInfo::unsetclientId()
{
    clientIdIsSet_ = false;
}

}
}
}
}
}


