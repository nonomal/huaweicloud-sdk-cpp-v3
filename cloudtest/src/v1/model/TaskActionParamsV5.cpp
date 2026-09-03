

#include "huaweicloud/cloudtest/v1/model/TaskActionParamsV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskActionParamsV5::TaskActionParamsV5()
{
    actionId_ = 0;
    actionIdIsSet_ = false;
    environmentGroupId_ = "";
    environmentGroupIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    taskIdsIsSet_ = false;
}

TaskActionParamsV5::~TaskActionParamsV5() = default;

void TaskActionParamsV5::validate()
{
}

web::json::value TaskActionParamsV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(environmentGroupIdIsSet_) {
        val[utility::conversions::to_string_t("environment_group_id")] = ModelBase::toJson(environmentGroupId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("taskIds")] = ModelBase::toJson(taskIds_);
    }

    return val;
}
bool TaskActionParamsV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    return ok;
}


int32_t TaskActionParamsV5::getActionId() const
{
    return actionId_;
}

void TaskActionParamsV5::setActionId(int32_t value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool TaskActionParamsV5::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void TaskActionParamsV5::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string TaskActionParamsV5::getEnvironmentGroupId() const
{
    return environmentGroupId_;
}

void TaskActionParamsV5::setEnvironmentGroupId(const std::string& value)
{
    environmentGroupId_ = value;
    environmentGroupIdIsSet_ = true;
}

bool TaskActionParamsV5::environmentGroupIdIsSet() const
{
    return environmentGroupIdIsSet_;
}

void TaskActionParamsV5::unsetenvironmentGroupId()
{
    environmentGroupIdIsSet_ = false;
}

std::string TaskActionParamsV5::getPlanId() const
{
    return planId_;
}

void TaskActionParamsV5::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TaskActionParamsV5::planIdIsSet() const
{
    return planIdIsSet_;
}

void TaskActionParamsV5::unsetplanId()
{
    planIdIsSet_ = false;
}

std::vector<std::string>& TaskActionParamsV5::getTaskIds()
{
    return taskIds_;
}

void TaskActionParamsV5::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool TaskActionParamsV5::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void TaskActionParamsV5::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

}
}
}
}
}


