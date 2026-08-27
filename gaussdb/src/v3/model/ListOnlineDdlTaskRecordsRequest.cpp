

#include "huaweicloud/gaussdb/v3/model/ListOnlineDdlTaskRecordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListOnlineDdlTaskRecordsRequest::ListOnlineDdlTaskRecordsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListOnlineDdlTaskRecordsRequest::~ListOnlineDdlTaskRecordsRequest() = default;

void ListOnlineDdlTaskRecordsRequest::validate()
{
}

web::json::value ListOnlineDdlTaskRecordsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListOnlineDdlTaskRecordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListOnlineDdlTaskRecordsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListOnlineDdlTaskRecordsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListOnlineDdlTaskRecordsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListOnlineDdlTaskRecordsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListOnlineDdlTaskRecordsRequest::getLimit() const
{
    return limit_;
}

void ListOnlineDdlTaskRecordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOnlineDdlTaskRecordsRequest::getOffset() const
{
    return offset_;
}

void ListOnlineDdlTaskRecordsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListOnlineDdlTaskRecordsRequest::getStartTime() const
{
    return startTime_;
}

void ListOnlineDdlTaskRecordsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListOnlineDdlTaskRecordsRequest::getEndTime() const
{
    return endTime_;
}

void ListOnlineDdlTaskRecordsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListOnlineDdlTaskRecordsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


