

#include "huaweicloud/cloudtest/v1/model/TestCasePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCasePolicy::TestCasePolicy()
{
    failedTimes_ = 0;
    failedTimesIsSet_ = false;
    retryTimes_ = 0;
    retryTimesIsSet_ = false;
}

TestCasePolicy::~TestCasePolicy() = default;

void TestCasePolicy::validate()
{
}

web::json::value TestCasePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedTimesIsSet_) {
        val[utility::conversions::to_string_t("failed_times")] = ModelBase::toJson(failedTimes_);
    }
    if(retryTimesIsSet_) {
        val[utility::conversions::to_string_t("retryTimes")] = ModelBase::toJson(retryTimes_);
    }

    return val;
}
bool TestCasePolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("retryTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retryTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryTimes(refVal);
        }
    }
    return ok;
}


int32_t TestCasePolicy::getFailedTimes() const
{
    return failedTimes_;
}

void TestCasePolicy::setFailedTimes(int32_t value)
{
    failedTimes_ = value;
    failedTimesIsSet_ = true;
}

bool TestCasePolicy::failedTimesIsSet() const
{
    return failedTimesIsSet_;
}

void TestCasePolicy::unsetfailedTimes()
{
    failedTimesIsSet_ = false;
}

int32_t TestCasePolicy::getRetryTimes() const
{
    return retryTimes_;
}

void TestCasePolicy::setRetryTimes(int32_t value)
{
    retryTimes_ = value;
    retryTimesIsSet_ = true;
}

bool TestCasePolicy::retryTimesIsSet() const
{
    return retryTimesIsSet_;
}

void TestCasePolicy::unsetretryTimes()
{
    retryTimesIsSet_ = false;
}

}
}
}
}
}


