

#include "huaweicloud/rds/v3/model/GetInstancesOpsResourceUsageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesOpsResourceUsageRequest::GetInstancesOpsResourceUsageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

GetInstancesOpsResourceUsageRequest::~GetInstancesOpsResourceUsageRequest() = default;

void GetInstancesOpsResourceUsageRequest::validate()
{
}

web::json::value GetInstancesOpsResourceUsageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool GetInstancesOpsResourceUsageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string GetInstancesOpsResourceUsageRequest::getInstanceId() const
{
    return instanceId_;
}

void GetInstancesOpsResourceUsageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetInstancesOpsResourceUsageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetInstancesOpsResourceUsageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetInstancesOpsResourceUsageRequest::getXLanguage() const
{
    return xLanguage_;
}

void GetInstancesOpsResourceUsageRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool GetInstancesOpsResourceUsageRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void GetInstancesOpsResourceUsageRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string GetInstancesOpsResourceUsageRequest::getResourceType() const
{
    return resourceType_;
}

void GetInstancesOpsResourceUsageRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool GetInstancesOpsResourceUsageRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void GetInstancesOpsResourceUsageRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


