

#include "huaweicloud/cloudtest/v1/model/UpdateTestsuiteInfoUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestsuiteInfoUsingRequest::UpdateTestsuiteInfoUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    suiteId_ = "";
    suiteIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestsuiteInfoUsingRequest::~UpdateTestsuiteInfoUsingRequest() = default;

void UpdateTestsuiteInfoUsingRequest::validate()
{
}

web::json::value UpdateTestsuiteInfoUsingRequest::toJson() const
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
bool UpdateTestsuiteInfoUsingRequest::fromJson(const web::json::value& val)
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
            TaskInfoV4VoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTestsuiteInfoUsingRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateTestsuiteInfoUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateTestsuiteInfoUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateTestsuiteInfoUsingRequest::getSuiteId() const
{
    return suiteId_;
}

void UpdateTestsuiteInfoUsingRequest::setSuiteId(const std::string& value)
{
    suiteId_ = value;
    suiteIdIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingRequest::suiteIdIsSet() const
{
    return suiteIdIsSet_;
}

void UpdateTestsuiteInfoUsingRequest::unsetsuiteId()
{
    suiteIdIsSet_ = false;
}

TaskInfoV4VoReq UpdateTestsuiteInfoUsingRequest::getBody() const
{
    return body_;
}

void UpdateTestsuiteInfoUsingRequest::setBody(const TaskInfoV4VoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestsuiteInfoUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


