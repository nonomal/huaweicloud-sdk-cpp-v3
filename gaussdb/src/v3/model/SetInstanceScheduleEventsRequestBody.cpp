

#include "huaweicloud/gaussdb/v3/model/SetInstanceScheduleEventsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetInstanceScheduleEventsRequestBody::SetInstanceScheduleEventsRequestBody()
{
    operationType_ = "";
    operationTypeIsSet_ = false;
    eventInstancesIsSet_ = false;
    eventScheduleWindowIsSet_ = false;
}

SetInstanceScheduleEventsRequestBody::~SetInstanceScheduleEventsRequestBody() = default;

void SetInstanceScheduleEventsRequestBody::validate()
{
}

web::json::value SetInstanceScheduleEventsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(eventInstancesIsSet_) {
        val[utility::conversions::to_string_t("event_instances")] = ModelBase::toJson(eventInstances_);
    }
    if(eventScheduleWindowIsSet_) {
        val[utility::conversions::to_string_t("event_schedule_window")] = ModelBase::toJson(eventScheduleWindow_);
    }

    return val;
}
bool SetInstanceScheduleEventsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<EventInstances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_schedule_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_schedule_window"));
        if(!fieldValue.is_null())
        {
            EventScheduleWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventScheduleWindow(refVal);
        }
    }
    return ok;
}


std::string SetInstanceScheduleEventsRequestBody::getOperationType() const
{
    return operationType_;
}

void SetInstanceScheduleEventsRequestBody::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool SetInstanceScheduleEventsRequestBody::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void SetInstanceScheduleEventsRequestBody::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::vector<EventInstances>& SetInstanceScheduleEventsRequestBody::getEventInstances()
{
    return eventInstances_;
}

void SetInstanceScheduleEventsRequestBody::setEventInstances(const std::vector<EventInstances>& value)
{
    eventInstances_ = value;
    eventInstancesIsSet_ = true;
}

bool SetInstanceScheduleEventsRequestBody::eventInstancesIsSet() const
{
    return eventInstancesIsSet_;
}

void SetInstanceScheduleEventsRequestBody::unseteventInstances()
{
    eventInstancesIsSet_ = false;
}

EventScheduleWindow SetInstanceScheduleEventsRequestBody::getEventScheduleWindow() const
{
    return eventScheduleWindow_;
}

void SetInstanceScheduleEventsRequestBody::setEventScheduleWindow(const EventScheduleWindow& value)
{
    eventScheduleWindow_ = value;
    eventScheduleWindowIsSet_ = true;
}

bool SetInstanceScheduleEventsRequestBody::eventScheduleWindowIsSet() const
{
    return eventScheduleWindowIsSet_;
}

void SetInstanceScheduleEventsRequestBody::unseteventScheduleWindow()
{
    eventScheduleWindowIsSet_ = false;
}

}
}
}
}
}


