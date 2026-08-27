

#include "huaweicloud/gaussdb/v3/model/EventEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




EventEntity::EventEntity()
{
    eventEntityId_ = "";
    eventEntityIdIsSet_ = false;
    eventEntityStatus_ = "";
    eventEntityStatusIsSet_ = false;
}

EventEntity::~EventEntity() = default;

void EventEntity::validate()
{
}

web::json::value EventEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventEntityIdIsSet_) {
        val[utility::conversions::to_string_t("event_entity_id")] = ModelBase::toJson(eventEntityId_);
    }
    if(eventEntityStatusIsSet_) {
        val[utility::conversions::to_string_t("event_entity_status")] = ModelBase::toJson(eventEntityStatus_);
    }

    return val;
}
bool EventEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_entity_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_entity_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventEntityStatus(refVal);
        }
    }
    return ok;
}


std::string EventEntity::getEventEntityId() const
{
    return eventEntityId_;
}

void EventEntity::setEventEntityId(const std::string& value)
{
    eventEntityId_ = value;
    eventEntityIdIsSet_ = true;
}

bool EventEntity::eventEntityIdIsSet() const
{
    return eventEntityIdIsSet_;
}

void EventEntity::unseteventEntityId()
{
    eventEntityIdIsSet_ = false;
}

std::string EventEntity::getEventEntityStatus() const
{
    return eventEntityStatus_;
}

void EventEntity::setEventEntityStatus(const std::string& value)
{
    eventEntityStatus_ = value;
    eventEntityStatusIsSet_ = true;
}

bool EventEntity::eventEntityStatusIsSet() const
{
    return eventEntityStatusIsSet_;
}

void EventEntity::unseteventEntityStatus()
{
    eventEntityStatusIsSet_ = false;
}

}
}
}
}
}


