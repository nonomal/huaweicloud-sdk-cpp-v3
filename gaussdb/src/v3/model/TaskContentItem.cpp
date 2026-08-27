

#include "huaweicloud/gaussdb/v3/model/TaskContentItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaskContentItem::TaskContentItem()
{
    schema_ = "";
    schemaIsSet_ = false;
    ddlInfoIsSet_ = false;
}

TaskContentItem::~TaskContentItem() = default;

void TaskContentItem::validate()
{
}

web::json::value TaskContentItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(ddlInfoIsSet_) {
        val[utility::conversions::to_string_t("ddl_info")] = ModelBase::toJson(ddlInfo_);
    }

    return val;
}
bool TaskContentItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DDLInfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlInfo(refVal);
        }
    }
    return ok;
}


std::string TaskContentItem::getSchema() const
{
    return schema_;
}

void TaskContentItem::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool TaskContentItem::schemaIsSet() const
{
    return schemaIsSet_;
}

void TaskContentItem::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<DDLInfoItem>& TaskContentItem::getDdlInfo()
{
    return ddlInfo_;
}

void TaskContentItem::setDdlInfo(const std::vector<DDLInfoItem>& value)
{
    ddlInfo_ = value;
    ddlInfoIsSet_ = true;
}

bool TaskContentItem::ddlInfoIsSet() const
{
    return ddlInfoIsSet_;
}

void TaskContentItem::unsetddlInfo()
{
    ddlInfoIsSet_ = false;
}

}
}
}
}
}


