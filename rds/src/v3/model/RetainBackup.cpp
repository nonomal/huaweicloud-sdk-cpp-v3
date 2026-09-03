

#include "huaweicloud/rds/v3/model/RetainBackup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RetainBackup::RetainBackup()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    describe_ = "";
    describeIsSet_ = false;
    backupMethod_ = "";
    backupMethodIsSet_ = false;
    tde_ = false;
    tdeIsSet_ = false;
}

RetainBackup::~RetainBackup() = default;

void RetainBackup::validate()
{
}

web::json::value RetainBackup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(describeIsSet_) {
        val[utility::conversions::to_string_t("describe")] = ModelBase::toJson(describe_);
    }
    if(backupMethodIsSet_) {
        val[utility::conversions::to_string_t("backup_method")] = ModelBase::toJson(backupMethod_);
    }
    if(tdeIsSet_) {
        val[utility::conversions::to_string_t("tde")] = ModelBase::toJson(tde_);
    }

    return val;
}
bool RetainBackup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("describe"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("describe"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescribe(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tde"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tde"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTde(refVal);
        }
    }
    return ok;
}


std::string RetainBackup::getName() const
{
    return name_;
}

void RetainBackup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RetainBackup::nameIsSet() const
{
    return nameIsSet_;
}

void RetainBackup::unsetname()
{
    nameIsSet_ = false;
}

std::string RetainBackup::getId() const
{
    return id_;
}

void RetainBackup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RetainBackup::idIsSet() const
{
    return idIsSet_;
}

void RetainBackup::unsetid()
{
    idIsSet_ = false;
}

std::string RetainBackup::getType() const
{
    return type_;
}

void RetainBackup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RetainBackup::typeIsSet() const
{
    return typeIsSet_;
}

void RetainBackup::unsettype()
{
    typeIsSet_ = false;
}

std::string RetainBackup::getBeginTime() const
{
    return beginTime_;
}

void RetainBackup::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool RetainBackup::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void RetainBackup::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string RetainBackup::getEndTime() const
{
    return endTime_;
}

void RetainBackup::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RetainBackup::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RetainBackup::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string RetainBackup::getSize() const
{
    return size_;
}

void RetainBackup::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RetainBackup::sizeIsSet() const
{
    return sizeIsSet_;
}

void RetainBackup::unsetsize()
{
    sizeIsSet_ = false;
}

std::string RetainBackup::getDescribe() const
{
    return describe_;
}

void RetainBackup::setDescribe(const std::string& value)
{
    describe_ = value;
    describeIsSet_ = true;
}

bool RetainBackup::describeIsSet() const
{
    return describeIsSet_;
}

void RetainBackup::unsetdescribe()
{
    describeIsSet_ = false;
}

std::string RetainBackup::getBackupMethod() const
{
    return backupMethod_;
}

void RetainBackup::setBackupMethod(const std::string& value)
{
    backupMethod_ = value;
    backupMethodIsSet_ = true;
}

bool RetainBackup::backupMethodIsSet() const
{
    return backupMethodIsSet_;
}

void RetainBackup::unsetbackupMethod()
{
    backupMethodIsSet_ = false;
}

bool RetainBackup::isTde() const
{
    return tde_;
}

void RetainBackup::setTde(bool value)
{
    tde_ = value;
    tdeIsSet_ = true;
}

bool RetainBackup::tdeIsSet() const
{
    return tdeIsSet_;
}

void RetainBackup::unsettde()
{
    tdeIsSet_ = false;
}

}
}
}
}
}


