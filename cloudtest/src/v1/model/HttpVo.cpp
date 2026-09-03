

#include "huaweicloud/cloudtest/v1/model/HttpVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




HttpVo::HttpVo()
{
    requestIsSet_ = false;
    responseIsSet_ = false;
}

HttpVo::~HttpVo() = default;

void HttpVo::validate()
{
}

web::json::value HttpVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIsSet_) {
        val[utility::conversions::to_string_t("request")] = ModelBase::toJson(request_);
    }
    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }

    return val;
}
bool HttpVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request"));
        if(!fieldValue.is_null())
        {
            ProtocolReqVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            ProtocolResVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
        }
    }
    return ok;
}


ProtocolReqVo HttpVo::getRequest() const
{
    return request_;
}

void HttpVo::setRequest(const ProtocolReqVo& value)
{
    request_ = value;
    requestIsSet_ = true;
}

bool HttpVo::requestIsSet() const
{
    return requestIsSet_;
}

void HttpVo::unsetrequest()
{
    requestIsSet_ = false;
}

ProtocolResVo HttpVo::getResponse() const
{
    return response_;
}

void HttpVo::setResponse(const ProtocolResVo& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool HttpVo::responseIsSet() const
{
    return responseIsSet_;
}

void HttpVo::unsetresponse()
{
    responseIsSet_ = false;
}

}
}
}
}
}


