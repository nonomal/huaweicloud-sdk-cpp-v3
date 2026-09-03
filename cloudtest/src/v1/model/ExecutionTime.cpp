

#include "huaweicloud/cloudtest/v1/model/ExecutionTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecutionTime::ExecutionTime()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ExecutionTime::~ExecutionTime() = default;

void ExecutionTime::validate()
{
}

web::json::value ExecutionTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("beginTime")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ExecutionTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("beginTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beginTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ExecutionTime::getBeginTime() const
{
    return beginTime_;
}

void ExecutionTime::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ExecutionTime::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ExecutionTime::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ExecutionTime::getEndTime() const
{
    return endTime_;
}

void ExecutionTime::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExecutionTime::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExecutionTime::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


