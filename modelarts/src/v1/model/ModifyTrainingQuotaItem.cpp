

#include "huaweicloud/modelarts/v1/model/ModifyTrainingQuotaItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyTrainingQuotaItem::ModifyTrainingQuotaItem()
{
    resource_ = "";
    resourceIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    extraInfo_ = "";
    extraInfoIsSet_ = false;
}

ModifyTrainingQuotaItem::~ModifyTrainingQuotaItem() = default;

void ModifyTrainingQuotaItem::validate()
{
}

web::json::value ModifyTrainingQuotaItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }

    return val;
}
bool ModifyTrainingQuotaItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    return ok;
}


std::string ModifyTrainingQuotaItem::getResource() const
{
    return resource_;
}

void ModifyTrainingQuotaItem::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ModifyTrainingQuotaItem::resourceIsSet() const
{
    return resourceIsSet_;
}

void ModifyTrainingQuotaItem::unsetresource()
{
    resourceIsSet_ = false;
}

int32_t ModifyTrainingQuotaItem::getQuota() const
{
    return quota_;
}

void ModifyTrainingQuotaItem::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ModifyTrainingQuotaItem::quotaIsSet() const
{
    return quotaIsSet_;
}

void ModifyTrainingQuotaItem::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ModifyTrainingQuotaItem::getUsed() const
{
    return used_;
}

void ModifyTrainingQuotaItem::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ModifyTrainingQuotaItem::usedIsSet() const
{
    return usedIsSet_;
}

void ModifyTrainingQuotaItem::unsetused()
{
    usedIsSet_ = false;
}

std::string ModifyTrainingQuotaItem::getExtraInfo() const
{
    return extraInfo_;
}

void ModifyTrainingQuotaItem::setExtraInfo(const std::string& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool ModifyTrainingQuotaItem::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void ModifyTrainingQuotaItem::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

}
}
}
}
}


