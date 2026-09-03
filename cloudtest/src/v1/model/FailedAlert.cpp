

#include "huaweicloud/cloudtest/v1/model/FailedAlert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




FailedAlert::FailedAlert()
{
    cloudAlarmIsSet_ = false;
    taskPolicyIsSet_ = false;
    testCasePolicyIsSet_ = false;
    wiseEyeIsSet_ = false;
}

FailedAlert::~FailedAlert() = default;

void FailedAlert::validate()
{
}

web::json::value FailedAlert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudAlarmIsSet_) {
        val[utility::conversions::to_string_t("cloudAlarm")] = ModelBase::toJson(cloudAlarm_);
    }
    if(taskPolicyIsSet_) {
        val[utility::conversions::to_string_t("taskPolicy")] = ModelBase::toJson(taskPolicy_);
    }
    if(testCasePolicyIsSet_) {
        val[utility::conversions::to_string_t("testCasePolicy")] = ModelBase::toJson(testCasePolicy_);
    }
    if(wiseEyeIsSet_) {
        val[utility::conversions::to_string_t("wiseEye")] = ModelBase::toJson(wiseEye_);
    }

    return val;
}
bool FailedAlert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloudAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudAlarm"));
        if(!fieldValue.is_null())
        {
            CloudAlarmDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskPolicy"));
        if(!fieldValue.is_null())
        {
            TaskPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCasePolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCasePolicy"));
        if(!fieldValue.is_null())
        {
            TestCasePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCasePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wiseEye"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wiseEye"));
        if(!fieldValue.is_null())
        {
            WiseEye refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWiseEye(refVal);
        }
    }
    return ok;
}


CloudAlarmDto FailedAlert::getCloudAlarm() const
{
    return cloudAlarm_;
}

void FailedAlert::setCloudAlarm(const CloudAlarmDto& value)
{
    cloudAlarm_ = value;
    cloudAlarmIsSet_ = true;
}

bool FailedAlert::cloudAlarmIsSet() const
{
    return cloudAlarmIsSet_;
}

void FailedAlert::unsetcloudAlarm()
{
    cloudAlarmIsSet_ = false;
}

TaskPolicy FailedAlert::getTaskPolicy() const
{
    return taskPolicy_;
}

void FailedAlert::setTaskPolicy(const TaskPolicy& value)
{
    taskPolicy_ = value;
    taskPolicyIsSet_ = true;
}

bool FailedAlert::taskPolicyIsSet() const
{
    return taskPolicyIsSet_;
}

void FailedAlert::unsettaskPolicy()
{
    taskPolicyIsSet_ = false;
}

TestCasePolicy FailedAlert::getTestCasePolicy() const
{
    return testCasePolicy_;
}

void FailedAlert::setTestCasePolicy(const TestCasePolicy& value)
{
    testCasePolicy_ = value;
    testCasePolicyIsSet_ = true;
}

bool FailedAlert::testCasePolicyIsSet() const
{
    return testCasePolicyIsSet_;
}

void FailedAlert::unsettestCasePolicy()
{
    testCasePolicyIsSet_ = false;
}

WiseEye FailedAlert::getWiseEye() const
{
    return wiseEye_;
}

void FailedAlert::setWiseEye(const WiseEye& value)
{
    wiseEye_ = value;
    wiseEyeIsSet_ = true;
}

bool FailedAlert::wiseEyeIsSet() const
{
    return wiseEyeIsSet_;
}

void FailedAlert::unsetwiseEye()
{
    wiseEyeIsSet_ = false;
}

}
}
}
}
}


