

#include "huaweicloud/cloudtest/v1/model/TestCaseTimeoutPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseTimeoutPolicy::TestCaseTimeoutPolicy()
{
    timeoutTimes_ = 0;
    timeoutTimesIsSet_ = false;
}

TestCaseTimeoutPolicy::~TestCaseTimeoutPolicy() = default;

void TestCaseTimeoutPolicy::validate()
{
}

web::json::value TestCaseTimeoutPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeoutTimesIsSet_) {
        val[utility::conversions::to_string_t("timeoutTimes")] = ModelBase::toJson(timeoutTimes_);
    }

    return val;
}
bool TestCaseTimeoutPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t TestCaseTimeoutPolicy::getTimeoutTimes() const
{
    return timeoutTimes_;
}

void TestCaseTimeoutPolicy::setTimeoutTimes(int32_t value)
{
    timeoutTimes_ = value;
    timeoutTimesIsSet_ = true;
}

bool TestCaseTimeoutPolicy::timeoutTimesIsSet() const
{
    return timeoutTimesIsSet_;
}

void TestCaseTimeoutPolicy::unsettimeoutTimes()
{
    timeoutTimesIsSet_ = false;
}

}
}
}
}
}


