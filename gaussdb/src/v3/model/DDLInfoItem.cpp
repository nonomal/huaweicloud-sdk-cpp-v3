

#include "huaweicloud/gaussdb/v3/model/DDLInfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DDLInfoItem::DDLInfoItem()
{
    table_ = "";
    tableIsSet_ = false;
}

DDLInfoItem::~DDLInfoItem() = default;

void DDLInfoItem::validate()
{
}

web::json::value DDLInfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }

    return val;
}
bool DDLInfoItem::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DDLInfoItem::getTable() const
{
    return table_;
}

void DDLInfoItem::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool DDLInfoItem::tableIsSet() const
{
    return tableIsSet_;
}

void DDLInfoItem::unsettable()
{
    tableIsSet_ = false;
}

}
}
}
}
}


