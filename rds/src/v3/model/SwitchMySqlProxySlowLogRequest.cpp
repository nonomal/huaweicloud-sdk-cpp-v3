

#include "huaweicloud/rds/v3/model/SwitchMySqlProxySlowLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchMySqlProxySlowLogRequest::SwitchMySqlProxySlowLogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchMySqlProxySlowLogRequest::~SwitchMySqlProxySlowLogRequest() = default;

void SwitchMySqlProxySlowLogRequest::validate()
{
}

web::json::value SwitchMySqlProxySlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchMySqlProxySlowLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchMySqlProxySlowLogRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchMySqlProxySlowLogRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchMySqlProxySlowLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchMySqlProxySlowLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchMySqlProxySlowLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchMySqlProxySlowLogRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchMySqlProxySlowLogRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchMySqlProxySlowLogRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchMySqlProxySlowLogRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string SwitchMySqlProxySlowLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchMySqlProxySlowLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchMySqlProxySlowLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchMySqlProxySlowLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SwitchMySqlProxySlowLogRequestBody SwitchMySqlProxySlowLogRequest::getBody() const
{
    return body_;
}

void SwitchMySqlProxySlowLogRequest::setBody(const SwitchMySqlProxySlowLogRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchMySqlProxySlowLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchMySqlProxySlowLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


