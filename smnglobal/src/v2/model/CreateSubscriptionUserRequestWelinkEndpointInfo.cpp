

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestWelinkEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestWelinkEndpointInfo::CreateSubscriptionUserRequestWelinkEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
    clientSecret_ = "";
    clientSecretIsSet_ = false;
}

CreateSubscriptionUserRequestWelinkEndpointInfo::~CreateSubscriptionUserRequestWelinkEndpointInfo() = default;

void CreateSubscriptionUserRequestWelinkEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestWelinkEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("client_id")] = ModelBase::toJson(clientId_);
    }
    if(clientSecretIsSet_) {
        val[utility::conversions::to_string_t("client_secret")] = ModelBase::toJson(clientSecret_);
    }

    return val;
}
bool CreateSubscriptionUserRequestWelinkEndpointInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("client_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientSecret(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionUserRequestWelinkEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestWelinkEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string CreateSubscriptionUserRequestWelinkEndpointInfo::getClientId() const
{
    return clientId_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool CreateSubscriptionUserRequestWelinkEndpointInfo::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::unsetclientId()
{
    clientIdIsSet_ = false;
}

std::string CreateSubscriptionUserRequestWelinkEndpointInfo::getClientSecret() const
{
    return clientSecret_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::setClientSecret(const std::string& value)
{
    clientSecret_ = value;
    clientSecretIsSet_ = true;
}

bool CreateSubscriptionUserRequestWelinkEndpointInfo::clientSecretIsSet() const
{
    return clientSecretIsSet_;
}

void CreateSubscriptionUserRequestWelinkEndpointInfo::unsetclientSecret()
{
    clientSecretIsSet_ = false;
}

}
}
}
}
}


