

#include "huaweicloud/gaussdb/v3/model/ColdTableMetaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ColdTableMetaInfo::ColdTableMetaInfo()
{
    spaceId_ = "";
    spaceIdIsSet_ = false;
    ddId_ = "";
    ddIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
    retainedTime_ = 0L;
    retainedTimeIsSet_ = false;
    dataSize_ = 0.0f;
    dataSizeIsSet_ = false;
}

ColdTableMetaInfo::~ColdTableMetaInfo() = default;

void ColdTableMetaInfo::validate()
{
}

web::json::value ColdTableMetaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(spaceIdIsSet_) {
        val[utility::conversions::to_string_t("space_id")] = ModelBase::toJson(spaceId_);
    }
    if(ddIdIsSet_) {
        val[utility::conversions::to_string_t("dd_id")] = ModelBase::toJson(ddId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(partitionNameIsSet_) {
        val[utility::conversions::to_string_t("partition_name")] = ModelBase::toJson(partitionName_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(retainedTimeIsSet_) {
        val[utility::conversions::to_string_t("retained_time")] = ModelBase::toJson(retainedTime_);
    }
    if(dataSizeIsSet_) {
        val[utility::conversions::to_string_t("data_size")] = ModelBase::toJson(dataSize_);
    }

    return val;
}
bool ColdTableMetaInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("space_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dd_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dd_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retained_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retained_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetainedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_size"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSize(refVal);
        }
    }
    return ok;
}


std::string ColdTableMetaInfo::getSpaceId() const
{
    return spaceId_;
}

void ColdTableMetaInfo::setSpaceId(const std::string& value)
{
    spaceId_ = value;
    spaceIdIsSet_ = true;
}

bool ColdTableMetaInfo::spaceIdIsSet() const
{
    return spaceIdIsSet_;
}

void ColdTableMetaInfo::unsetspaceId()
{
    spaceIdIsSet_ = false;
}

std::string ColdTableMetaInfo::getDdId() const
{
    return ddId_;
}

void ColdTableMetaInfo::setDdId(const std::string& value)
{
    ddId_ = value;
    ddIdIsSet_ = true;
}

bool ColdTableMetaInfo::ddIdIsSet() const
{
    return ddIdIsSet_;
}

void ColdTableMetaInfo::unsetddId()
{
    ddIdIsSet_ = false;
}

std::string ColdTableMetaInfo::getDatabaseName() const
{
    return databaseName_;
}

void ColdTableMetaInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ColdTableMetaInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ColdTableMetaInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ColdTableMetaInfo::getTableName() const
{
    return tableName_;
}

void ColdTableMetaInfo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ColdTableMetaInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ColdTableMetaInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ColdTableMetaInfo::getPartitionName() const
{
    return partitionName_;
}

void ColdTableMetaInfo::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ColdTableMetaInfo::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ColdTableMetaInfo::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

int64_t ColdTableMetaInfo::getExpirationTime() const
{
    return expirationTime_;
}

void ColdTableMetaInfo::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool ColdTableMetaInfo::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void ColdTableMetaInfo::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

int64_t ColdTableMetaInfo::getRetainedTime() const
{
    return retainedTime_;
}

void ColdTableMetaInfo::setRetainedTime(int64_t value)
{
    retainedTime_ = value;
    retainedTimeIsSet_ = true;
}

bool ColdTableMetaInfo::retainedTimeIsSet() const
{
    return retainedTimeIsSet_;
}

void ColdTableMetaInfo::unsetretainedTime()
{
    retainedTimeIsSet_ = false;
}

float ColdTableMetaInfo::getDataSize() const
{
    return dataSize_;
}

void ColdTableMetaInfo::setDataSize(float value)
{
    dataSize_ = value;
    dataSizeIsSet_ = true;
}

bool ColdTableMetaInfo::dataSizeIsSet() const
{
    return dataSizeIsSet_;
}

void ColdTableMetaInfo::unsetdataSize()
{
    dataSizeIsSet_ = false;
}

}
}
}
}
}


