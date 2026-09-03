

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestFeishuEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestFeishuEndpointInfo::CreateSubscriptionUserRequestFeishuEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    signSecret_ = "";
    signSecretIsSet_ = false;
}

CreateSubscriptionUserRequestFeishuEndpointInfo::~CreateSubscriptionUserRequestFeishuEndpointInfo() = default;

void CreateSubscriptionUserRequestFeishuEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestFeishuEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(signSecretIsSet_) {
        val[utility::conversions::to_string_t("sign_secret")] = ModelBase::toJson(signSecret_);
    }

    return val;
}
bool CreateSubscriptionUserRequestFeishuEndpointInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignSecret(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionUserRequestFeishuEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestFeishuEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string CreateSubscriptionUserRequestFeishuEndpointInfo::getKeyword() const
{
    return keyword_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool CreateSubscriptionUserRequestFeishuEndpointInfo::keywordIsSet() const
{
    return keywordIsSet_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::string CreateSubscriptionUserRequestFeishuEndpointInfo::getSignSecret() const
{
    return signSecret_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::setSignSecret(const std::string& value)
{
    signSecret_ = value;
    signSecretIsSet_ = true;
}

bool CreateSubscriptionUserRequestFeishuEndpointInfo::signSecretIsSet() const
{
    return signSecretIsSet_;
}

void CreateSubscriptionUserRequestFeishuEndpointInfo::unsetsignSecret()
{
    signSecretIsSet_ = false;
}

}
}
}
}
}


