

#include "huaweicloud/rds/v3/model/ListOperateRecordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOperateRecordRequestBody::ListOperateRecordRequestBody()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ListOperateRecordRequestBody::~ListOperateRecordRequestBody() = default;

void ListOperateRecordRequestBody::validate()
{
}

web::json::value ListOperateRecordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ListOperateRecordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
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
    return ok;
}


int64_t ListOperateRecordRequestBody::getStartTime() const
{
    return startTime_;
}

void ListOperateRecordRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListOperateRecordRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListOperateRecordRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListOperateRecordRequestBody::getEndTime() const
{
    return endTime_;
}

void ListOperateRecordRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListOperateRecordRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListOperateRecordRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getOperateType() const
{
    return operateType_;
}

void ListOperateRecordRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListOperateRecordRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListOperateRecordRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getUserName() const
{
    return userName_;
}

void ListOperateRecordRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListOperateRecordRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListOperateRecordRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getLevel() const
{
    return level_;
}

void ListOperateRecordRequestBody::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListOperateRecordRequestBody::levelIsSet() const
{
    return levelIsSet_;
}

void ListOperateRecordRequestBody::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getOffset() const
{
    return offset_;
}

void ListOperateRecordRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOperateRecordRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOperateRecordRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getLimit() const
{
    return limit_;
}

void ListOperateRecordRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOperateRecordRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListOperateRecordRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getSort() const
{
    return sort_;
}

void ListOperateRecordRequestBody::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListOperateRecordRequestBody::sortIsSet() const
{
    return sortIsSet_;
}

void ListOperateRecordRequestBody::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListOperateRecordRequestBody::getOrder() const
{
    return order_;
}

void ListOperateRecordRequestBody::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListOperateRecordRequestBody::orderIsSet() const
{
    return orderIsSet_;
}

void ListOperateRecordRequestBody::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


