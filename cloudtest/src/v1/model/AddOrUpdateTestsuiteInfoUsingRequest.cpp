

#include "huaweicloud/cloudtest/v1/model/AddOrUpdateTestsuiteInfoUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddOrUpdateTestsuiteInfoUsingRequest::AddOrUpdateTestsuiteInfoUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddOrUpdateTestsuiteInfoUsingRequest::~AddOrUpdateTestsuiteInfoUsingRequest() = default;

void AddOrUpdateTestsuiteInfoUsingRequest::validate()
{
}

web::json::value AddOrUpdateTestsuiteInfoUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddOrUpdateTestsuiteInfoUsingRequest::fromJson(const web::json::value& val)
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


std::string AddOrUpdateTestsuiteInfoUsingRequest::getServiceId() const
{
    return serviceId_;
}

void AddOrUpdateTestsuiteInfoUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

TaskInfoV4VoReq AddOrUpdateTestsuiteInfoUsingRequest::getBody() const
{
    return body_;
}

void AddOrUpdateTestsuiteInfoUsingRequest::setBody(const TaskInfoV4VoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


