

#include "huaweicloud/gaussdb/v3/model/StartOnlineDDLInfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StartOnlineDDLInfoItem::StartOnlineDDLInfoItem()
{
    sql_ = "";
    sqlIsSet_ = false;
}

StartOnlineDDLInfoItem::~StartOnlineDDLInfoItem() = default;

void StartOnlineDDLInfoItem::validate()
{
}

web::json::value StartOnlineDDLInfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool StartOnlineDDLInfoItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string StartOnlineDDLInfoItem::getSql() const
{
    return sql_;
}

void StartOnlineDDLInfoItem::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool StartOnlineDDLInfoItem::sqlIsSet() const
{
    return sqlIsSet_;
}

void StartOnlineDDLInfoItem::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


