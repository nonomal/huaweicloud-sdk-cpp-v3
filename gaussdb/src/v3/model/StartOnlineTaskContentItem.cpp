

#include "huaweicloud/gaussdb/v3/model/StartOnlineTaskContentItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StartOnlineTaskContentItem::StartOnlineTaskContentItem()
{
    schema_ = "";
    schemaIsSet_ = false;
    ddlInfoIsSet_ = false;
}

StartOnlineTaskContentItem::~StartOnlineTaskContentItem() = default;

void StartOnlineTaskContentItem::validate()
{
}

web::json::value StartOnlineTaskContentItem::toJson() const
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
bool StartOnlineTaskContentItem::fromJson(const web::json::value& val)
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
            std::vector<StartOnlineDDLInfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlInfo(refVal);
        }
    }
    return ok;
}


std::string StartOnlineTaskContentItem::getSchema() const
{
    return schema_;
}

void StartOnlineTaskContentItem::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool StartOnlineTaskContentItem::schemaIsSet() const
{
    return schemaIsSet_;
}

void StartOnlineTaskContentItem::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<StartOnlineDDLInfoItem>& StartOnlineTaskContentItem::getDdlInfo()
{
    return ddlInfo_;
}

void StartOnlineTaskContentItem::setDdlInfo(const std::vector<StartOnlineDDLInfoItem>& value)
{
    ddlInfo_ = value;
    ddlInfoIsSet_ = true;
}

bool StartOnlineTaskContentItem::ddlInfoIsSet() const
{
    return ddlInfoIsSet_;
}

void StartOnlineTaskContentItem::unsetddlInfo()
{
    ddlInfoIsSet_ = false;
}

}
}
}
}
}


