

#include "huaweicloud/cloudtest/v1/model/BasicInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasicInfoVo::BasicInfoVo()
{
    collectInterval_ = 0;
    collectIntervalIsSet_ = false;
    subTaskName_ = "";
    subTaskNameIsSet_ = false;
}

BasicInfoVo::~BasicInfoVo() = default;

void BasicInfoVo::validate()
{
}

web::json::value BasicInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(collectIntervalIsSet_) {
        val[utility::conversions::to_string_t("collect_interval")] = ModelBase::toJson(collectInterval_);
    }
    if(subTaskNameIsSet_) {
        val[utility::conversions::to_string_t("sub_task_name")] = ModelBase::toJson(subTaskName_);
    }

    return val;
}
bool BasicInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("collect_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collect_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskName(refVal);
        }
    }
    return ok;
}


int32_t BasicInfoVo::getCollectInterval() const
{
    return collectInterval_;
}

void BasicInfoVo::setCollectInterval(int32_t value)
{
    collectInterval_ = value;
    collectIntervalIsSet_ = true;
}

bool BasicInfoVo::collectIntervalIsSet() const
{
    return collectIntervalIsSet_;
}

void BasicInfoVo::unsetcollectInterval()
{
    collectIntervalIsSet_ = false;
}

std::string BasicInfoVo::getSubTaskName() const
{
    return subTaskName_;
}

void BasicInfoVo::setSubTaskName(const std::string& value)
{
    subTaskName_ = value;
    subTaskNameIsSet_ = true;
}

bool BasicInfoVo::subTaskNameIsSet() const
{
    return subTaskNameIsSet_;
}

void BasicInfoVo::unsetsubTaskName()
{
    subTaskNameIsSet_ = false;
}

}
}
}
}
}


