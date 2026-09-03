

#include "huaweicloud/modelarts/v1/model/BatchDeleteJobItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteJobItem::BatchDeleteJobItem()
{
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
}

BatchDeleteJobItem::~BatchDeleteJobItem() = default;

void BatchDeleteJobItem::validate()
{
}

web::json::value BatchDeleteJobItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool BatchDeleteJobItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            BatchDeleteJobMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteJobItem::getKind() const
{
    return kind_;
}

void BatchDeleteJobItem::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool BatchDeleteJobItem::kindIsSet() const
{
    return kindIsSet_;
}

void BatchDeleteJobItem::unsetkind()
{
    kindIsSet_ = false;
}

BatchDeleteJobMetadata BatchDeleteJobItem::getMetadata() const
{
    return metadata_;
}

void BatchDeleteJobItem::setMetadata(const BatchDeleteJobMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool BatchDeleteJobItem::metadataIsSet() const
{
    return metadataIsSet_;
}

void BatchDeleteJobItem::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


