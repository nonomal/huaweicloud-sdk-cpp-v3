

#include "huaweicloud/gaussdb/v3/model/OnlineDDLInfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OnlineDDLInfoItem::OnlineDDLInfoItem()
{
    table_ = "";
    tableIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
}

OnlineDDLInfoItem::~OnlineDDLInfoItem() = default;

void OnlineDDLInfoItem::validate()
{
}

web::json::value OnlineDDLInfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool OnlineDDLInfoItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


std::string OnlineDDLInfoItem::getTable() const
{
    return table_;
}

void OnlineDDLInfoItem::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool OnlineDDLInfoItem::tableIsSet() const
{
    return tableIsSet_;
}

void OnlineDDLInfoItem::unsettable()
{
    tableIsSet_ = false;
}

std::string OnlineDDLInfoItem::getSql() const
{
    return sql_;
}

void OnlineDDLInfoItem::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool OnlineDDLInfoItem::sqlIsSet() const
{
    return sqlIsSet_;
}

void OnlineDDLInfoItem::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


