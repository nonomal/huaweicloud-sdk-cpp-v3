

#include "huaweicloud/cloudtest/v1/model/TaskPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskPolicy::TaskPolicy()
{
    failedTimes_ = 0;
    failedTimesIsSet_ = false;
    sameIpFailedTestCaseCount_ = 0;
    sameIpFailedTestCaseCountIsSet_ = false;
    sameTestCaseFailedIpCount_ = "";
    sameTestCaseFailedIpCountIsSet_ = false;
    testCaseFailedCount_ = 0;
    testCaseFailedCountIsSet_ = false;
    testCaseFailedRatio_ = 0;
    testCaseFailedRatioIsSet_ = false;
}

TaskPolicy::~TaskPolicy() = default;

void TaskPolicy::validate()
{
}

web::json::value TaskPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedTimesIsSet_) {
        val[utility::conversions::to_string_t("failed_times")] = ModelBase::toJson(failedTimes_);
    }
    if(sameIpFailedTestCaseCountIsSet_) {
        val[utility::conversions::to_string_t("sameIpFailedTestCaseCount")] = ModelBase::toJson(sameIpFailedTestCaseCount_);
    }
    if(sameTestCaseFailedIpCountIsSet_) {
        val[utility::conversions::to_string_t("sameTestCaseFailedIpCount")] = ModelBase::toJson(sameTestCaseFailedIpCount_);
    }
    if(testCaseFailedCountIsSet_) {
        val[utility::conversions::to_string_t("testCaseFailedCount")] = ModelBase::toJson(testCaseFailedCount_);
    }
    if(testCaseFailedRatioIsSet_) {
        val[utility::conversions::to_string_t("testCaseFailedRatio")] = ModelBase::toJson(testCaseFailedRatio_);
    }

    return val;
}
bool TaskPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sameIpFailedTestCaseCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameIpFailedTestCaseCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameIpFailedTestCaseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sameTestCaseFailedIpCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameTestCaseFailedIpCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameTestCaseFailedIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseFailedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseFailedCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseFailedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseFailedRatio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseFailedRatio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseFailedRatio(refVal);
        }
    }
    return ok;
}


int32_t TaskPolicy::getFailedTimes() const
{
    return failedTimes_;
}

void TaskPolicy::setFailedTimes(int32_t value)
{
    failedTimes_ = value;
    failedTimesIsSet_ = true;
}

bool TaskPolicy::failedTimesIsSet() const
{
    return failedTimesIsSet_;
}

void TaskPolicy::unsetfailedTimes()
{
    failedTimesIsSet_ = false;
}

int32_t TaskPolicy::getSameIpFailedTestCaseCount() const
{
    return sameIpFailedTestCaseCount_;
}

void TaskPolicy::setSameIpFailedTestCaseCount(int32_t value)
{
    sameIpFailedTestCaseCount_ = value;
    sameIpFailedTestCaseCountIsSet_ = true;
}

bool TaskPolicy::sameIpFailedTestCaseCountIsSet() const
{
    return sameIpFailedTestCaseCountIsSet_;
}

void TaskPolicy::unsetsameIpFailedTestCaseCount()
{
    sameIpFailedTestCaseCountIsSet_ = false;
}

std::string TaskPolicy::getSameTestCaseFailedIpCount() const
{
    return sameTestCaseFailedIpCount_;
}

void TaskPolicy::setSameTestCaseFailedIpCount(const std::string& value)
{
    sameTestCaseFailedIpCount_ = value;
    sameTestCaseFailedIpCountIsSet_ = true;
}

bool TaskPolicy::sameTestCaseFailedIpCountIsSet() const
{
    return sameTestCaseFailedIpCountIsSet_;
}

void TaskPolicy::unsetsameTestCaseFailedIpCount()
{
    sameTestCaseFailedIpCountIsSet_ = false;
}

int32_t TaskPolicy::getTestCaseFailedCount() const
{
    return testCaseFailedCount_;
}

void TaskPolicy::setTestCaseFailedCount(int32_t value)
{
    testCaseFailedCount_ = value;
    testCaseFailedCountIsSet_ = true;
}

bool TaskPolicy::testCaseFailedCountIsSet() const
{
    return testCaseFailedCountIsSet_;
}

void TaskPolicy::unsettestCaseFailedCount()
{
    testCaseFailedCountIsSet_ = false;
}

int32_t TaskPolicy::getTestCaseFailedRatio() const
{
    return testCaseFailedRatio_;
}

void TaskPolicy::setTestCaseFailedRatio(int32_t value)
{
    testCaseFailedRatio_ = value;
    testCaseFailedRatioIsSet_ = true;
}

bool TaskPolicy::testCaseFailedRatioIsSet() const
{
    return testCaseFailedRatioIsSet_;
}

void TaskPolicy::unsettestCaseFailedRatio()
{
    testCaseFailedRatioIsSet_ = false;
}

}
}
}
}
}


