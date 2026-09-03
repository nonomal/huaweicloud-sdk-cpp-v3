

#include "huaweicloud/rds/v3/model/GetInstancesOpsMetricNamesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesOpsMetricNamesRequest::GetInstancesOpsMetricNamesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    metricGroup_ = "";
    metricGroupIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

GetInstancesOpsMetricNamesRequest::~GetInstancesOpsMetricNamesRequest() = default;

void GetInstancesOpsMetricNamesRequest::validate()
{
}

web::json::value GetInstancesOpsMetricNamesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(metricGroupIsSet_) {
        val[utility::conversions::to_string_t("metric_group")] = ModelBase::toJson(metricGroup_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool GetInstancesOpsMetricNamesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metric_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricGroup(refVal);
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
    return ok;
}


std::string GetInstancesOpsMetricNamesRequest::getInstanceId() const
{
    return instanceId_;
}

void GetInstancesOpsMetricNamesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetInstancesOpsMetricNamesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetInstancesOpsMetricNamesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetInstancesOpsMetricNamesRequest::getMetricGroup() const
{
    return metricGroup_;
}

void GetInstancesOpsMetricNamesRequest::setMetricGroup(const std::string& value)
{
    metricGroup_ = value;
    metricGroupIsSet_ = true;
}

bool GetInstancesOpsMetricNamesRequest::metricGroupIsSet() const
{
    return metricGroupIsSet_;
}

void GetInstancesOpsMetricNamesRequest::unsetmetricGroup()
{
    metricGroupIsSet_ = false;
}

std::string GetInstancesOpsMetricNamesRequest::getXLanguage() const
{
    return xLanguage_;
}

void GetInstancesOpsMetricNamesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool GetInstancesOpsMetricNamesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void GetInstancesOpsMetricNamesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


