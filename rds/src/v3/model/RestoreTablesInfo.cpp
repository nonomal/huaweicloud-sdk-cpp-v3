

#include "huaweicloud/rds/v3/model/RestoreTablesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesInfo::RestoreTablesInfo()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

RestoreTablesInfo::~RestoreTablesInfo() = default;

void RestoreTablesInfo::validate()
{
}

web::json::value RestoreTablesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool RestoreTablesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string RestoreTablesInfo::getDatabaseName() const
{
    return databaseName_;
}

void RestoreTablesInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool RestoreTablesInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void RestoreTablesInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string RestoreTablesInfo::getTableName() const
{
    return tableName_;
}

void RestoreTablesInfo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool RestoreTablesInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void RestoreTablesInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


