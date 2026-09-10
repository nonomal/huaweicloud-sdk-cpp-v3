

#include "huaweicloud/rds/v3/model/OperateRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OperateRecord::OperateRecord()
{
    operateType_ = "";
    operateTypeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    operateTime_ = 0L;
    operateTimeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
}

OperateRecord::~OperateRecord() = default;

void OperateRecord::validate()
{
}

web::json::value OperateRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}
bool OperateRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
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
    return ok;
}


std::string OperateRecord::getOperateType() const
{
    return operateType_;
}

void OperateRecord::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool OperateRecord::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void OperateRecord::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string OperateRecord::getUserName() const
{
    return userName_;
}

void OperateRecord::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool OperateRecord::userNameIsSet() const
{
    return userNameIsSet_;
}

void OperateRecord::unsetuserName()
{
    userNameIsSet_ = false;
}

int64_t OperateRecord::getOperateTime() const
{
    return operateTime_;
}

void OperateRecord::setOperateTime(int64_t value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool OperateRecord::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void OperateRecord::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

std::string OperateRecord::getLevel() const
{
    return level_;
}

void OperateRecord::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool OperateRecord::levelIsSet() const
{
    return levelIsSet_;
}

void OperateRecord::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


