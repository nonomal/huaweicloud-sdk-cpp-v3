

#include "huaweicloud/gaussdb/v3/model/EventInstances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




EventInstances::EventInstances()
{
    eventId_ = "";
    eventIdIsSet_ = false;
}

EventInstances::~EventInstances() = default;

void EventInstances::validate()
{
}

web::json::value EventInstances::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }

    return val;
}
bool EventInstances::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    return ok;
}


std::string EventInstances::getEventId() const
{
    return eventId_;
}

void EventInstances::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool EventInstances::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void EventInstances::unseteventId()
{
    eventIdIsSet_ = false;
}

}
}
}
}
}


