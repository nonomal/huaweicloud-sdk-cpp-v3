

#include "huaweicloud/cloudtest/v1/model/CloudAlarmDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CloudAlarmDto::CloudAlarmDto()
{
    cloudServiceName_ = "";
    cloudServiceNameIsSet_ = false;
    cloudServiceRegionId_ = "";
    cloudServiceRegionIdIsSet_ = false;
    cloudServiceSite_ = "";
    cloudServiceSiteIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    microServiceGroupName_ = "";
    microServiceGroupNameIsSet_ = false;
    microServiceName_ = "";
    microServiceNameIsSet_ = false;
}

CloudAlarmDto::~CloudAlarmDto() = default;

void CloudAlarmDto::validate()
{
}

web::json::value CloudAlarmDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServiceNameIsSet_) {
        val[utility::conversions::to_string_t("cloudServiceName")] = ModelBase::toJson(cloudServiceName_);
    }
    if(cloudServiceRegionIdIsSet_) {
        val[utility::conversions::to_string_t("cloudServiceRegionId")] = ModelBase::toJson(cloudServiceRegionId_);
    }
    if(cloudServiceSiteIsSet_) {
        val[utility::conversions::to_string_t("cloudServiceSite")] = ModelBase::toJson(cloudServiceSite_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(microServiceGroupNameIsSet_) {
        val[utility::conversions::to_string_t("microServiceGroupName")] = ModelBase::toJson(microServiceGroupName_);
    }
    if(microServiceNameIsSet_) {
        val[utility::conversions::to_string_t("microServiceName")] = ModelBase::toJson(microServiceName_);
    }

    return val;
}
bool CloudAlarmDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloudServiceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudServiceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloudServiceRegionId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudServiceRegionId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloudServiceSite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudServiceSite"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microServiceGroupName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microServiceGroupName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMicroServiceGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microServiceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microServiceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMicroServiceName(refVal);
        }
    }
    return ok;
}


std::string CloudAlarmDto::getCloudServiceName() const
{
    return cloudServiceName_;
}

void CloudAlarmDto::setCloudServiceName(const std::string& value)
{
    cloudServiceName_ = value;
    cloudServiceNameIsSet_ = true;
}

bool CloudAlarmDto::cloudServiceNameIsSet() const
{
    return cloudServiceNameIsSet_;
}

void CloudAlarmDto::unsetcloudServiceName()
{
    cloudServiceNameIsSet_ = false;
}

std::string CloudAlarmDto::getCloudServiceRegionId() const
{
    return cloudServiceRegionId_;
}

void CloudAlarmDto::setCloudServiceRegionId(const std::string& value)
{
    cloudServiceRegionId_ = value;
    cloudServiceRegionIdIsSet_ = true;
}

bool CloudAlarmDto::cloudServiceRegionIdIsSet() const
{
    return cloudServiceRegionIdIsSet_;
}

void CloudAlarmDto::unsetcloudServiceRegionId()
{
    cloudServiceRegionIdIsSet_ = false;
}

std::string CloudAlarmDto::getCloudServiceSite() const
{
    return cloudServiceSite_;
}

void CloudAlarmDto::setCloudServiceSite(const std::string& value)
{
    cloudServiceSite_ = value;
    cloudServiceSiteIsSet_ = true;
}

bool CloudAlarmDto::cloudServiceSiteIsSet() const
{
    return cloudServiceSiteIsSet_;
}

void CloudAlarmDto::unsetcloudServiceSite()
{
    cloudServiceSiteIsSet_ = false;
}

std::string CloudAlarmDto::getEnable() const
{
    return enable_;
}

void CloudAlarmDto::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CloudAlarmDto::enableIsSet() const
{
    return enableIsSet_;
}

void CloudAlarmDto::unsetenable()
{
    enableIsSet_ = false;
}

std::string CloudAlarmDto::getLevel() const
{
    return level_;
}

void CloudAlarmDto::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool CloudAlarmDto::levelIsSet() const
{
    return levelIsSet_;
}

void CloudAlarmDto::unsetlevel()
{
    levelIsSet_ = false;
}

std::string CloudAlarmDto::getMicroServiceGroupName() const
{
    return microServiceGroupName_;
}

void CloudAlarmDto::setMicroServiceGroupName(const std::string& value)
{
    microServiceGroupName_ = value;
    microServiceGroupNameIsSet_ = true;
}

bool CloudAlarmDto::microServiceGroupNameIsSet() const
{
    return microServiceGroupNameIsSet_;
}

void CloudAlarmDto::unsetmicroServiceGroupName()
{
    microServiceGroupNameIsSet_ = false;
}

std::string CloudAlarmDto::getMicroServiceName() const
{
    return microServiceName_;
}

void CloudAlarmDto::setMicroServiceName(const std::string& value)
{
    microServiceName_ = value;
    microServiceNameIsSet_ = true;
}

bool CloudAlarmDto::microServiceNameIsSet() const
{
    return microServiceNameIsSet_;
}

void CloudAlarmDto::unsetmicroServiceName()
{
    microServiceNameIsSet_ = false;
}

}
}
}
}
}


