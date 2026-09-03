

#include "huaweicloud/cloudtest/v1/model/TaskErrorPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskErrorPolicy::TaskErrorPolicy()
{
    sameIpErrorTestCaseCount_ = 0;
    sameIpErrorTestCaseCountIsSet_ = false;
    sameTestCaseErrorIpCount_ = "";
    sameTestCaseErrorIpCountIsSet_ = false;
    testCaseErrorCount_ = 0;
    testCaseErrorCountIsSet_ = false;
    testCaseErrorRatio_ = 0;
    testCaseErrorRatioIsSet_ = false;
}

TaskErrorPolicy::~TaskErrorPolicy() = default;

void TaskErrorPolicy::validate()
{
}

web::json::value TaskErrorPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sameIpErrorTestCaseCountIsSet_) {
        val[utility::conversions::to_string_t("sameIpErrorTestCaseCount")] = ModelBase::toJson(sameIpErrorTestCaseCount_);
    }
    if(sameTestCaseErrorIpCountIsSet_) {
        val[utility::conversions::to_string_t("sameTestCaseErrorIpCount")] = ModelBase::toJson(sameTestCaseErrorIpCount_);
    }
    if(testCaseErrorCountIsSet_) {
        val[utility::conversions::to_string_t("testCaseErrorCount")] = ModelBase::toJson(testCaseErrorCount_);
    }
    if(testCaseErrorRatioIsSet_) {
        val[utility::conversions::to_string_t("testCaseErrorRatio")] = ModelBase::toJson(testCaseErrorRatio_);
    }

    return val;
}
bool TaskErrorPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sameIpErrorTestCaseCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameIpErrorTestCaseCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameIpErrorTestCaseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sameTestCaseErrorIpCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sameTestCaseErrorIpCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameTestCaseErrorIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseErrorCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseErrorCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseErrorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseErrorRatio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseErrorRatio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseErrorRatio(refVal);
        }
    }
    return ok;
}


int32_t TaskErrorPolicy::getSameIpErrorTestCaseCount() const
{
    return sameIpErrorTestCaseCount_;
}

void TaskErrorPolicy::setSameIpErrorTestCaseCount(int32_t value)
{
    sameIpErrorTestCaseCount_ = value;
    sameIpErrorTestCaseCountIsSet_ = true;
}

bool TaskErrorPolicy::sameIpErrorTestCaseCountIsSet() const
{
    return sameIpErrorTestCaseCountIsSet_;
}

void TaskErrorPolicy::unsetsameIpErrorTestCaseCount()
{
    sameIpErrorTestCaseCountIsSet_ = false;
}

std::string TaskErrorPolicy::getSameTestCaseErrorIpCount() const
{
    return sameTestCaseErrorIpCount_;
}

void TaskErrorPolicy::setSameTestCaseErrorIpCount(const std::string& value)
{
    sameTestCaseErrorIpCount_ = value;
    sameTestCaseErrorIpCountIsSet_ = true;
}

bool TaskErrorPolicy::sameTestCaseErrorIpCountIsSet() const
{
    return sameTestCaseErrorIpCountIsSet_;
}

void TaskErrorPolicy::unsetsameTestCaseErrorIpCount()
{
    sameTestCaseErrorIpCountIsSet_ = false;
}

int32_t TaskErrorPolicy::getTestCaseErrorCount() const
{
    return testCaseErrorCount_;
}

void TaskErrorPolicy::setTestCaseErrorCount(int32_t value)
{
    testCaseErrorCount_ = value;
    testCaseErrorCountIsSet_ = true;
}

bool TaskErrorPolicy::testCaseErrorCountIsSet() const
{
    return testCaseErrorCountIsSet_;
}

void TaskErrorPolicy::unsettestCaseErrorCount()
{
    testCaseErrorCountIsSet_ = false;
}

int32_t TaskErrorPolicy::getTestCaseErrorRatio() const
{
    return testCaseErrorRatio_;
}

void TaskErrorPolicy::setTestCaseErrorRatio(int32_t value)
{
    testCaseErrorRatio_ = value;
    testCaseErrorRatioIsSet_ = true;
}

bool TaskErrorPolicy::testCaseErrorRatioIsSet() const
{
    return testCaseErrorRatioIsSet_;
}

void TaskErrorPolicy::unsettestCaseErrorRatio()
{
    testCaseErrorRatioIsSet_ = false;
}

}
}
}
}
}


