

#include "huaweicloud/modelarts/v1/model/WorkloadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadInfo::WorkloadInfo()
{
    allocatedIsSet_ = false;
    queueIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    window_ = "";
    windowIsSet_ = false;
}

WorkloadInfo::~WorkloadInfo() = default;

void WorkloadInfo::validate()
{
}

web::json::value WorkloadInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allocatedIsSet_) {
        val[utility::conversions::to_string_t("allocated")] = ModelBase::toJson(allocated_);
    }
    if(queueIsSet_) {
        val[utility::conversions::to_string_t("queue")] = ModelBase::toJson(queue_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(windowIsSet_) {
        val[utility::conversions::to_string_t("window")] = ModelBase::toJson(window_);
    }

    return val;
}
bool WorkloadInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allocated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated"));
        if(!fieldValue.is_null())
        {
            WorkloadStatistics refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue"));
        if(!fieldValue.is_null())
        {
            WorkloadStatistics refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindow(refVal);
        }
    }
    return ok;
}


WorkloadStatistics WorkloadInfo::getAllocated() const
{
    return allocated_;
}

void WorkloadInfo::setAllocated(const WorkloadStatistics& value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool WorkloadInfo::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void WorkloadInfo::unsetallocated()
{
    allocatedIsSet_ = false;
}

WorkloadStatistics WorkloadInfo::getQueue() const
{
    return queue_;
}

void WorkloadInfo::setQueue(const WorkloadStatistics& value)
{
    queue_ = value;
    queueIsSet_ = true;
}

bool WorkloadInfo::queueIsSet() const
{
    return queueIsSet_;
}

void WorkloadInfo::unsetqueue()
{
    queueIsSet_ = false;
}

std::string WorkloadInfo::getTimestamp() const
{
    return timestamp_;
}

void WorkloadInfo::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool WorkloadInfo::timestampIsSet() const
{
    return timestampIsSet_;
}

void WorkloadInfo::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string WorkloadInfo::getWindow() const
{
    return window_;
}

void WorkloadInfo::setWindow(const std::string& value)
{
    window_ = value;
    windowIsSet_ = true;
}

bool WorkloadInfo::windowIsSet() const
{
    return windowIsSet_;
}

void WorkloadInfo::unsetwindow()
{
    windowIsSet_ = false;
}

}
}
}
}
}


