

#include "huaweicloud/cloudtest/v1/model/ProtocolReqVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProtocolReqVo::ProtocolReqVo()
{
    basicIsSet_ = false;
    headersIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
    requestBody_ = "";
    requestBodyIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ProtocolReqVo::~ProtocolReqVo() = default;

void ProtocolReqVo::validate()
{
}

web::json::value ProtocolReqVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicIsSet_) {
        val[utility::conversions::to_string_t("basic")] = ModelBase::toJson(basic_);
    }
    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }
    if(requestBodyIsSet_) {
        val[utility::conversions::to_string_t("request_body")] = ModelBase::toJson(requestBody_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ProtocolReqVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic"));
        if(!fieldValue.is_null())
        {
            BasicInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headers"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


BasicInfoVo ProtocolReqVo::getBasic() const
{
    return basic_;
}

void ProtocolReqVo::setBasic(const BasicInfoVo& value)
{
    basic_ = value;
    basicIsSet_ = true;
}

bool ProtocolReqVo::basicIsSet() const
{
    return basicIsSet_;
}

void ProtocolReqVo::unsetbasic()
{
    basicIsSet_ = false;
}

std::map<std::string, std::string>& ProtocolReqVo::getHeaders()
{
    return headers_;
}

void ProtocolReqVo::setHeaders(const std::map<std::string, std::string>& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool ProtocolReqVo::headersIsSet() const
{
    return headersIsSet_;
}

void ProtocolReqVo::unsetheaders()
{
    headersIsSet_ = false;
}

std::string ProtocolReqVo::getMethod() const
{
    return method_;
}

void ProtocolReqVo::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool ProtocolReqVo::methodIsSet() const
{
    return methodIsSet_;
}

void ProtocolReqVo::unsetmethod()
{
    methodIsSet_ = false;
}

std::string ProtocolReqVo::getRequestBody() const
{
    return requestBody_;
}

void ProtocolReqVo::setRequestBody(const std::string& value)
{
    requestBody_ = value;
    requestBodyIsSet_ = true;
}

bool ProtocolReqVo::requestBodyIsSet() const
{
    return requestBodyIsSet_;
}

void ProtocolReqVo::unsetrequestBody()
{
    requestBodyIsSet_ = false;
}

std::string ProtocolReqVo::getUrl() const
{
    return url_;
}

void ProtocolReqVo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ProtocolReqVo::urlIsSet() const
{
    return urlIsSet_;
}

void ProtocolReqVo::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


