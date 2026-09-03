

#include "huaweicloud/cloudtest/v1/model/TaskTimeoutPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskTimeoutPolicy::TaskTimeoutPolicy()
{
    sameIpTimeoutTestCaseCount_ = 0;
    sameIpTimeoutTestCaseCountIsSet_ = false;
    sameTestCaseTimeoutIpCount_ = "";
    sameTestCaseTimeoutIpCountIsSet_ = false;
    testCaseTimeoutCount_ = 0;
    testCaseTimeoutCountIsSet_ = false;
    testCaseTimeoutRatio_ = 0;
    testCaseTimeoutRatioIsSet_ = false;
    timeoutTimes_ = 0;
    timeoutTimesIsSet_ = false;
}

TaskTimeoutPolicy::~TaskTimeoutPolicy() = default;

void TaskTimeoutPolicy::validate()
{
}

web::json::value TaskTimeoutPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sameIpTimeoutTestCaseCountIsSet_) {
        val[utility::conversions::to_string_t("sameIpTimeoutTestCaseCount")] = ModelBase::toJson(sameIpTimeoutTestCaseCount_);
    }
    if(sameTestCaseTimeoutIpCountIsSet_) {
        val[utility::conversions::to_string_t("sameTestCaseTimeoutIpCount")] = ModelBase::toJson(sameTestCaseTimeoutIpCount_);
    }
    if(testCaseTimeoutCountIsSet_) {
        val[utility::conversions::to_string_t("testCaseTimeoutCount")] = ModelBase::toJson(testCaseTimeoutCount_);
    }
    if(testCaseTimeoutRatioIsSet_) {
        val[utility::conversions::to_string_t("testCaseTimeoutRatio")] = ModelBase::toJson(testCaseTimeoutRatio_);
    }
    if(timeoutTimesIsSet_) {
        val[utility::conversions::to_string_t("timeoutTimes")] = ModelBase::toJson(timeoutTimes_);
    }

    return val;
}
bool TaskTimeoutPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sameIpTimeoutTestCaseCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameIpTimeoutTestCaseCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameIpTimeoutTestCaseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sameTestCaseTimeoutIpCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameTestCaseTimeoutIpCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameTestCaseTimeoutIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseTimeoutCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseTimeoutCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseTimeoutCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseTimeoutRatio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseTimeoutRatio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseTimeoutRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeoutTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeoutTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutTimes(refVal);
        }
    }
    return ok;
}


int32_t TaskTimeoutPolicy::getSameIpTimeoutTestCaseCount() const
{
    return sameIpTimeoutTestCaseCount_;
}

void TaskTimeoutPolicy::setSameIpTimeoutTestCaseCount(int32_t value)
{
    sameIpTimeoutTestCaseCount_ = value;
    sameIpTimeoutTestCaseCountIsSet_ = true;
}

bool TaskTimeoutPolicy::sameIpTimeoutTestCaseCountIsSet() const
{
    return sameIpTimeoutTestCaseCountIsSet_;
}

void TaskTimeoutPolicy::unsetsameIpTimeoutTestCaseCount()
{
    sameIpTimeoutTestCaseCountIsSet_ = false;
}

std::string TaskTimeoutPolicy::getSameTestCaseTimeoutIpCount() const
{
    return sameTestCaseTimeoutIpCount_;
}

void TaskTimeoutPolicy::setSameTestCaseTimeoutIpCount(const std::string& value)
{
    sameTestCaseTimeoutIpCount_ = value;
    sameTestCaseTimeoutIpCountIsSet_ = true;
}

bool TaskTimeoutPolicy::sameTestCaseTimeoutIpCountIsSet() const
{
    return sameTestCaseTimeoutIpCountIsSet_;
}

void TaskTimeoutPolicy::unsetsameTestCaseTimeoutIpCount()
{
    sameTestCaseTimeoutIpCountIsSet_ = false;
}

int32_t TaskTimeoutPolicy::getTestCaseTimeoutCount() const
{
    return testCaseTimeoutCount_;
}

void TaskTimeoutPolicy::setTestCaseTimeoutCount(int32_t value)
{
    testCaseTimeoutCount_ = value;
    testCaseTimeoutCountIsSet_ = true;
}

bool TaskTimeoutPolicy::testCaseTimeoutCountIsSet() const
{
    return testCaseTimeoutCountIsSet_;
}

void TaskTimeoutPolicy::unsettestCaseTimeoutCount()
{
    testCaseTimeoutCountIsSet_ = false;
}

int32_t TaskTimeoutPolicy::getTestCaseTimeoutRatio() const
{
    return testCaseTimeoutRatio_;
}

void TaskTimeoutPolicy::setTestCaseTimeoutRatio(int32_t value)
{
    testCaseTimeoutRatio_ = value;
    testCaseTimeoutRatioIsSet_ = true;
}

bool TaskTimeoutPolicy::testCaseTimeoutRatioIsSet() const
{
    return testCaseTimeoutRatioIsSet_;
}

void TaskTimeoutPolicy::unsettestCaseTimeoutRatio()
{
    testCaseTimeoutRatioIsSet_ = false;
}

int32_t TaskTimeoutPolicy::getTimeoutTimes() const
{
    return timeoutTimes_;
}

void TaskTimeoutPolicy::setTimeoutTimes(int32_t value)
{
    timeoutTimes_ = value;
    timeoutTimesIsSet_ = true;
}

bool TaskTimeoutPolicy::timeoutTimesIsSet() const
{
    return timeoutTimesIsSet_;
}

void TaskTimeoutPolicy::unsettimeoutTimes()
{
    timeoutTimesIsSet_ = false;
}

}
}
}
}
}


