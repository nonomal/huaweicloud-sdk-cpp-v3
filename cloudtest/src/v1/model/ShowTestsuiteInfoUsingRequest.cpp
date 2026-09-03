

#include "huaweicloud/cloudtest/v1/model/ShowTestsuiteInfoUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestsuiteInfoUsingRequest::ShowTestsuiteInfoUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    suiteId_ = "";
    suiteIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
}

ShowTestsuiteInfoUsingRequest::~ShowTestsuiteInfoUsingRequest() = default;

void ShowTestsuiteInfoUsingRequest::validate()
{
}

web::json::value ShowTestsuiteInfoUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(suiteIdIsSet_) {
        val[utility::conversions::to_string_t("suite_id")] = ModelBase::toJson(suiteId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("planId")] = ModelBase::toJson(planId_);
    }

    return val;
}
bool ShowTestsuiteInfoUsingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("planId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    return ok;
}


std::string ShowTestsuiteInfoUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ShowTestsuiteInfoUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowTestsuiteInfoUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingRequest::getSuiteId() const
{
    return suiteId_;
}

void ShowTestsuiteInfoUsingRequest::setSuiteId(const std::string& value)
{
    suiteId_ = value;
    suiteIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingRequest::suiteIdIsSet() const
{
    return suiteIdIsSet_;
}

void ShowTestsuiteInfoUsingRequest::unsetsuiteId()
{
    suiteIdIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingRequest::getPlanId() const
{
    return planId_;
}

void ShowTestsuiteInfoUsingRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowTestsuiteInfoUsingRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

}
}
}
}
}


