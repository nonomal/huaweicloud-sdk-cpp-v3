

#include "huaweicloud/rds/v3/model/ListRetainBackupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRetainBackupsRequest::ListRetainBackupsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRetainBackupsRequest::~ListRetainBackupsRequest() = default;

void ListRetainBackupsRequest::validate()
{
}

web::json::value ListRetainBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRetainBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListRetainBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRetainBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRetainBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRetainBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListRetainBackupsRequest::getOffset() const
{
    return offset_;
}

void ListRetainBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRetainBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRetainBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRetainBackupsRequest::getLimit() const
{
    return limit_;
}

void ListRetainBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRetainBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRetainBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


