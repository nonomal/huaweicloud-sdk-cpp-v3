

#include "huaweicloud/cloudtest/v1/model/TimeoutAlert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TimeoutAlert::TimeoutAlert()
{
    alertTemplateIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    taskTimeoutPolicyIsSet_ = false;
    testCaseTimeoutPolicyIsSet_ = false;
    timeoutRetryTimes_ = 0;
    timeoutRetryTimesIsSet_ = false;
}

TimeoutAlert::~TimeoutAlert() = default;

void TimeoutAlert::validate()
{
}

web::json::value TimeoutAlert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIsSet_) {
        val[utility::conversions::to_string_t("alert_template")] = ModelBase::toJson(alertTemplate_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(taskTimeoutPolicyIsSet_) {
        val[utility::conversions::to_string_t("task_timeout_policy")] = ModelBase::toJson(taskTimeoutPolicy_);
    }
    if(testCaseTimeoutPolicyIsSet_) {
        val[utility::conversions::to_string_t("testCaseTimeoutPolicy")] = ModelBase::toJson(testCaseTimeoutPolicy_);
    }
    if(timeoutRetryTimesIsSet_) {
        val[utility::conversions::to_string_t("timeoutRetryTimes")] = ModelBase::toJson(timeoutRetryTimes_);
    }

    return val;
}
bool TimeoutAlert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_template"));
        if(!fieldValue.is_null())
        {
            AlertTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_timeout_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_timeout_policy"));
        if(!fieldValue.is_null())
        {
            TaskTimeoutPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTimeoutPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseTimeoutPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseTimeoutPolicy"));
        if(!fieldValue.is_null())
        {
            TestCaseTimeoutPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseTimeoutPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeoutRetryTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeoutRetryTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutRetryTimes(refVal);
        }
    }
    return ok;
}


AlertTemplate TimeoutAlert::getAlertTemplate() const
{
    return alertTemplate_;
}

void TimeoutAlert::setAlertTemplate(const AlertTemplate& value)
{
    alertTemplate_ = value;
    alertTemplateIsSet_ = true;
}

bool TimeoutAlert::alertTemplateIsSet() const
{
    return alertTemplateIsSet_;
}

void TimeoutAlert::unsetalertTemplate()
{
    alertTemplateIsSet_ = false;
}

std::string TimeoutAlert::getEnable() const
{
    return enable_;
}

void TimeoutAlert::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool TimeoutAlert::enableIsSet() const
{
    return enableIsSet_;
}

void TimeoutAlert::unsetenable()
{
    enableIsSet_ = false;
}

TaskTimeoutPolicy TimeoutAlert::getTaskTimeoutPolicy() const
{
    return taskTimeoutPolicy_;
}

void TimeoutAlert::setTaskTimeoutPolicy(const TaskTimeoutPolicy& value)
{
    taskTimeoutPolicy_ = value;
    taskTimeoutPolicyIsSet_ = true;
}

bool TimeoutAlert::taskTimeoutPolicyIsSet() const
{
    return taskTimeoutPolicyIsSet_;
}

void TimeoutAlert::unsettaskTimeoutPolicy()
{
    taskTimeoutPolicyIsSet_ = false;
}

TestCaseTimeoutPolicy TimeoutAlert::getTestCaseTimeoutPolicy() const
{
    return testCaseTimeoutPolicy_;
}

void TimeoutAlert::setTestCaseTimeoutPolicy(const TestCaseTimeoutPolicy& value)
{
    testCaseTimeoutPolicy_ = value;
    testCaseTimeoutPolicyIsSet_ = true;
}

bool TimeoutAlert::testCaseTimeoutPolicyIsSet() const
{
    return testCaseTimeoutPolicyIsSet_;
}

void TimeoutAlert::unsettestCaseTimeoutPolicy()
{
    testCaseTimeoutPolicyIsSet_ = false;
}

int32_t TimeoutAlert::getTimeoutRetryTimes() const
{
    return timeoutRetryTimes_;
}

void TimeoutAlert::setTimeoutRetryTimes(int32_t value)
{
    timeoutRetryTimes_ = value;
    timeoutRetryTimesIsSet_ = true;
}

bool TimeoutAlert::timeoutRetryTimesIsSet() const
{
    return timeoutRetryTimesIsSet_;
}

void TimeoutAlert::unsettimeoutRetryTimes()
{
    timeoutRetryTimesIsSet_ = false;
}

}
}
}
}
}


