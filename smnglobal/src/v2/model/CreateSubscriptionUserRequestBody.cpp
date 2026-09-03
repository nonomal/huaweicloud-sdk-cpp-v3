

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestBody::CreateSubscriptionUserRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    groupIsSet_ = false;
    httpIsSet_ = false;
    httpsIsSet_ = false;
    smsIsSet_ = false;
    emailIsSet_ = false;
    callnotifyIsSet_ = false;
    wechatIsSet_ = false;
    dingdingIsSet_ = false;
    feishuIsSet_ = false;
    welinkIsSet_ = false;
    dingTalkBotIsSet_ = false;
}

CreateSubscriptionUserRequestBody::~CreateSubscriptionUserRequestBody() = default;

void CreateSubscriptionUserRequestBody::validate()
{
}

web::json::value CreateSubscriptionUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(httpIsSet_) {
        val[utility::conversions::to_string_t("http")] = ModelBase::toJson(http_);
    }
    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }
    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(callnotifyIsSet_) {
        val[utility::conversions::to_string_t("callnotify")] = ModelBase::toJson(callnotify_);
    }
    if(wechatIsSet_) {
        val[utility::conversions::to_string_t("wechat")] = ModelBase::toJson(wechat_);
    }
    if(dingdingIsSet_) {
        val[utility::conversions::to_string_t("dingding")] = ModelBase::toJson(dingding_);
    }
    if(feishuIsSet_) {
        val[utility::conversions::to_string_t("feishu")] = ModelBase::toJson(feishu_);
    }
    if(welinkIsSet_) {
        val[utility::conversions::to_string_t("welink")] = ModelBase::toJson(welink_);
    }
    if(dingTalkBotIsSet_) {
        val[utility::conversions::to_string_t("ding_talk_bot")] = ModelBase::toJson(dingTalkBot_);
    }

    return val;
}
bool CreateSubscriptionUserRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestHttpEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestHttpsEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sms"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestSmsEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestEmailEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callnotify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callnotify"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestCallnotifyEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallnotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wechat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wechat"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestWechatEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWechat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dingding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dingding"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestDingdingEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDingding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feishu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feishu"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestFeishuEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeishu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("welink"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welink"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestWelinkEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ding_talk_bot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ding_talk_bot"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestDingTalkBotEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDingTalkBot(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionUserRequestBody::getName() const
{
    return name_;
}

void CreateSubscriptionUserRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateSubscriptionUserRequestBody::getGroup()
{
    return group_;
}

void CreateSubscriptionUserRequestBody::setGroup(const std::vector<std::string>& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::groupIsSet() const
{
    return groupIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetgroup()
{
    groupIsSet_ = false;
}

CreateSubscriptionUserRequestHttpEndpointInfo CreateSubscriptionUserRequestBody::getHttp() const
{
    return http_;
}

void CreateSubscriptionUserRequestBody::setHttp(const CreateSubscriptionUserRequestHttpEndpointInfo& value)
{
    http_ = value;
    httpIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::httpIsSet() const
{
    return httpIsSet_;
}

void CreateSubscriptionUserRequestBody::unsethttp()
{
    httpIsSet_ = false;
}

CreateSubscriptionUserRequestHttpsEndpointInfo CreateSubscriptionUserRequestBody::getHttps() const
{
    return https_;
}

void CreateSubscriptionUserRequestBody::setHttps(const CreateSubscriptionUserRequestHttpsEndpointInfo& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::httpsIsSet() const
{
    return httpsIsSet_;
}

void CreateSubscriptionUserRequestBody::unsethttps()
{
    httpsIsSet_ = false;
}

CreateSubscriptionUserRequestSmsEndpointInfo CreateSubscriptionUserRequestBody::getSms() const
{
    return sms_;
}

void CreateSubscriptionUserRequestBody::setSms(const CreateSubscriptionUserRequestSmsEndpointInfo& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::smsIsSet() const
{
    return smsIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetsms()
{
    smsIsSet_ = false;
}

CreateSubscriptionUserRequestEmailEndpointInfo CreateSubscriptionUserRequestBody::getEmail() const
{
    return email_;
}

void CreateSubscriptionUserRequestBody::setEmail(const CreateSubscriptionUserRequestEmailEndpointInfo& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::emailIsSet() const
{
    return emailIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetemail()
{
    emailIsSet_ = false;
}

CreateSubscriptionUserRequestCallnotifyEndpointInfo CreateSubscriptionUserRequestBody::getCallnotify() const
{
    return callnotify_;
}

void CreateSubscriptionUserRequestBody::setCallnotify(const CreateSubscriptionUserRequestCallnotifyEndpointInfo& value)
{
    callnotify_ = value;
    callnotifyIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::callnotifyIsSet() const
{
    return callnotifyIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetcallnotify()
{
    callnotifyIsSet_ = false;
}

CreateSubscriptionUserRequestWechatEndpointInfo CreateSubscriptionUserRequestBody::getWechat() const
{
    return wechat_;
}

void CreateSubscriptionUserRequestBody::setWechat(const CreateSubscriptionUserRequestWechatEndpointInfo& value)
{
    wechat_ = value;
    wechatIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::wechatIsSet() const
{
    return wechatIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetwechat()
{
    wechatIsSet_ = false;
}

CreateSubscriptionUserRequestDingdingEndpointInfo CreateSubscriptionUserRequestBody::getDingding() const
{
    return dingding_;
}

void CreateSubscriptionUserRequestBody::setDingding(const CreateSubscriptionUserRequestDingdingEndpointInfo& value)
{
    dingding_ = value;
    dingdingIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::dingdingIsSet() const
{
    return dingdingIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetdingding()
{
    dingdingIsSet_ = false;
}

CreateSubscriptionUserRequestFeishuEndpointInfo CreateSubscriptionUserRequestBody::getFeishu() const
{
    return feishu_;
}

void CreateSubscriptionUserRequestBody::setFeishu(const CreateSubscriptionUserRequestFeishuEndpointInfo& value)
{
    feishu_ = value;
    feishuIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::feishuIsSet() const
{
    return feishuIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetfeishu()
{
    feishuIsSet_ = false;
}

CreateSubscriptionUserRequestWelinkEndpointInfo CreateSubscriptionUserRequestBody::getWelink() const
{
    return welink_;
}

void CreateSubscriptionUserRequestBody::setWelink(const CreateSubscriptionUserRequestWelinkEndpointInfo& value)
{
    welink_ = value;
    welinkIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::welinkIsSet() const
{
    return welinkIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetwelink()
{
    welinkIsSet_ = false;
}

CreateSubscriptionUserRequestDingTalkBotEndpointInfo CreateSubscriptionUserRequestBody::getDingTalkBot() const
{
    return dingTalkBot_;
}

void CreateSubscriptionUserRequestBody::setDingTalkBot(const CreateSubscriptionUserRequestDingTalkBotEndpointInfo& value)
{
    dingTalkBot_ = value;
    dingTalkBotIsSet_ = true;
}

bool CreateSubscriptionUserRequestBody::dingTalkBotIsSet() const
{
    return dingTalkBotIsSet_;
}

void CreateSubscriptionUserRequestBody::unsetdingTalkBot()
{
    dingTalkBotIsSet_ = false;
}

}
}
}
}
}


