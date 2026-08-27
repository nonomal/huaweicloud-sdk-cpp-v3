

#include "huaweicloud/gaussdb/v3/model/OnlineDDLTaskContentItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OnlineDDLTaskContentItem::OnlineDDLTaskContentItem()
{
    schema_ = "";
    schemaIsSet_ = false;
    ddlInfoIsSet_ = false;
}

OnlineDDLTaskContentItem::~OnlineDDLTaskContentItem() = default;

void OnlineDDLTaskContentItem::validate()
{
}

web::json::value OnlineDDLTaskContentItem::toJson() const
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
bool OnlineDDLTaskContentItem::fromJson(const web::json::value& val)
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
            std::vector<OnlineDDLInfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlInfo(refVal);
        }
    }
    return ok;
}


std::string OnlineDDLTaskContentItem::getSchema() const
{
    return schema_;
}

void OnlineDDLTaskContentItem::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool OnlineDDLTaskContentItem::schemaIsSet() const
{
    return schemaIsSet_;
}

void OnlineDDLTaskContentItem::unsetschema()
{
    schemaIsSet_ = false;
}

std::vector<OnlineDDLInfoItem>& OnlineDDLTaskContentItem::getDdlInfo()
{
    return ddlInfo_;
}

void OnlineDDLTaskContentItem::setDdlInfo(const std::vector<OnlineDDLInfoItem>& value)
{
    ddlInfo_ = value;
    ddlInfoIsSet_ = true;
}

bool OnlineDDLTaskContentItem::ddlInfoIsSet() const
{
    return ddlInfoIsSet_;
}

void OnlineDDLTaskContentItem::unsetddlInfo()
{
    ddlInfoIsSet_ = false;
}

}
}
}
}
}


