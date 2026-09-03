

#include "huaweicloud/cloudtest/v1/model/StartTestsuiteUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




StartTestsuiteUsingRequest::StartTestsuiteUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    suiteId_ = "";
    suiteIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartTestsuiteUsingRequest::~StartTestsuiteUsingRequest() = default;

void StartTestsuiteUsingRequest::validate()
{
}

web::json::value StartTestsuiteUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(suiteIdIsSet_) {
        val[utility::conversions::to_string_t("suite_id")] = ModelBase::toJson(suiteId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartTestsuiteUsingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suite_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suite_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuiteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TaskActionParamsV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartTestsuiteUsingRequest::getServiceId() const
{
    return serviceId_;
}

void StartTestsuiteUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool StartTestsuiteUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void StartTestsuiteUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string StartTestsuiteUsingRequest::getSuiteId() const
{
    return suiteId_;
}

void StartTestsuiteUsingRequest::setSuiteId(const std::string& value)
{
    suiteId_ = value;
    suiteIdIsSet_ = true;
}

bool StartTestsuiteUsingRequest::suiteIdIsSet() const
{
    return suiteIdIsSet_;
}

void StartTestsuiteUsingRequest::unsetsuiteId()
{
    suiteIdIsSet_ = false;
}

TaskActionParamsV5 StartTestsuiteUsingRequest::getBody() const
{
    return body_;
}

void StartTestsuiteUsingRequest::setBody(const TaskActionParamsV5& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartTestsuiteUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartTestsuiteUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


