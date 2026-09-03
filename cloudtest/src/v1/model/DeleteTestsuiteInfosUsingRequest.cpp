

#include "huaweicloud/cloudtest/v1/model/DeleteTestsuiteInfosUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestsuiteInfosUsingRequest::DeleteTestsuiteInfosUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTestsuiteInfosUsingRequest::~DeleteTestsuiteInfosUsingRequest() = default;

void DeleteTestsuiteInfosUsingRequest::validate()
{
}

web::json::value DeleteTestsuiteInfosUsingRequest::toJson() const
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
bool DeleteTestsuiteInfosUsingRequest::fromJson(const web::json::value& val)
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
            DeleteTaskParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTestsuiteInfosUsingRequest::getServiceId() const
{
    return serviceId_;
}

void DeleteTestsuiteInfosUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool DeleteTestsuiteInfosUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void DeleteTestsuiteInfosUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

DeleteTaskParams DeleteTestsuiteInfosUsingRequest::getBody() const
{
    return body_;
}

void DeleteTestsuiteInfosUsingRequest::setBody(const DeleteTaskParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTestsuiteInfosUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTestsuiteInfosUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


