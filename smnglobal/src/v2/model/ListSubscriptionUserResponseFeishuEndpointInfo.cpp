

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseFeishuEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseFeishuEndpointInfo::ListSubscriptionUserResponseFeishuEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    signSecret_ = "";
    signSecretIsSet_ = false;
}

ListSubscriptionUserResponseFeishuEndpointInfo::~ListSubscriptionUserResponseFeishuEndpointInfo() = default;

void ListSubscriptionUserResponseFeishuEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseFeishuEndpointInfo::toJson() const
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
bool ListSubscriptionUserResponseFeishuEndpointInfo::fromJson(const web::json::value& val)
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


std::string ListSubscriptionUserResponseFeishuEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseFeishuEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ListSubscriptionUserResponseFeishuEndpointInfo::getKeyword() const
{
    return keyword_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool ListSubscriptionUserResponseFeishuEndpointInfo::keywordIsSet() const
{
    return keywordIsSet_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::string ListSubscriptionUserResponseFeishuEndpointInfo::getSignSecret() const
{
    return signSecret_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::setSignSecret(const std::string& value)
{
    signSecret_ = value;
    signSecretIsSet_ = true;
}

bool ListSubscriptionUserResponseFeishuEndpointInfo::signSecretIsSet() const
{
    return signSecretIsSet_;
}

void ListSubscriptionUserResponseFeishuEndpointInfo::unsetsignSecret()
{
    signSecretIsSet_ = false;
}

}
}
}
}
}


