

#include "huaweicloud/rds/v3/model/ResourcePackageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResourcePackageInfo::ResourcePackageInfo()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    usedQuota_ = 0;
    usedQuotaIsSet_ = false;
    totalQuota_ = 0;
    totalQuotaIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ResourcePackageInfo::~ResourcePackageInfo() = default;

void ResourcePackageInfo::validate()
{
}

web::json::value ResourcePackageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(usedQuotaIsSet_) {
        val[utility::conversions::to_string_t("used_quota")] = ModelBase::toJson(usedQuota_);
    }
    if(totalQuotaIsSet_) {
        val[utility::conversions::to_string_t("total_quota")] = ModelBase::toJson(totalQuota_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ResourcePackageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ResourcePackageInfo::getResourceId() const
{
    return resourceId_;
}

void ResourcePackageInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourcePackageInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourcePackageInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourcePackageInfo::getEngineName() const
{
    return engineName_;
}

void ResourcePackageInfo::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ResourcePackageInfo::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ResourcePackageInfo::unsetengineName()
{
    engineNameIsSet_ = false;
}

int32_t ResourcePackageInfo::getUsedQuota() const
{
    return usedQuota_;
}

void ResourcePackageInfo::setUsedQuota(int32_t value)
{
    usedQuota_ = value;
    usedQuotaIsSet_ = true;
}

bool ResourcePackageInfo::usedQuotaIsSet() const
{
    return usedQuotaIsSet_;
}

void ResourcePackageInfo::unsetusedQuota()
{
    usedQuotaIsSet_ = false;
}

int32_t ResourcePackageInfo::getTotalQuota() const
{
    return totalQuota_;
}

void ResourcePackageInfo::setTotalQuota(int32_t value)
{
    totalQuota_ = value;
    totalQuotaIsSet_ = true;
}

bool ResourcePackageInfo::totalQuotaIsSet() const
{
    return totalQuotaIsSet_;
}

void ResourcePackageInfo::unsettotalQuota()
{
    totalQuotaIsSet_ = false;
}

std::string ResourcePackageInfo::getStatus() const
{
    return status_;
}

void ResourcePackageInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourcePackageInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ResourcePackageInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


