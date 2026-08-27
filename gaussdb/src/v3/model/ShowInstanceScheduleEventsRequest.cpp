

#include "huaweicloud/gaussdb/v3/model/ShowInstanceScheduleEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceScheduleEventsRequest::ShowInstanceScheduleEventsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowInstanceScheduleEventsRequest::~ShowInstanceScheduleEventsRequest() = default;

void ShowInstanceScheduleEventsRequest::validate()
{
}

web::json::value ShowInstanceScheduleEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowInstanceScheduleEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceScheduleEventsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceScheduleEventsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getId() const
{
    return id_;
}

void ShowInstanceScheduleEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceScheduleEventsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getStatus() const
{
    return status_;
}

void ShowInstanceScheduleEventsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getType() const
{
    return type_;
}

void ShowInstanceScheduleEventsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getLevel() const
{
    return level_;
}

void ShowInstanceScheduleEventsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getSortField() const
{
    return sortField_;
}

void ShowInstanceScheduleEventsRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ShowInstanceScheduleEventsRequest::getOrder() const
{
    return order_;
}

void ShowInstanceScheduleEventsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetorder()
{
    orderIsSet_ = false;
}

int32_t ShowInstanceScheduleEventsRequest::getLimit() const
{
    return limit_;
}

void ShowInstanceScheduleEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowInstanceScheduleEventsRequest::getOffset() const
{
    return offset_;
}

void ShowInstanceScheduleEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowInstanceScheduleEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowInstanceScheduleEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


