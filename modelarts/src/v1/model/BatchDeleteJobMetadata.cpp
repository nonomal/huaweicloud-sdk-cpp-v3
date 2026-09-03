

#include "huaweicloud/modelarts/v1/model/BatchDeleteJobMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteJobMetadata::BatchDeleteJobMetadata()
{
    id_ = "";
    idIsSet_ = false;
}

BatchDeleteJobMetadata::~BatchDeleteJobMetadata() = default;

void BatchDeleteJobMetadata::validate()
{
}

web::json::value BatchDeleteJobMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool BatchDeleteJobMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteJobMetadata::getId() const
{
    return id_;
}

void BatchDeleteJobMetadata::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeleteJobMetadata::idIsSet() const
{
    return idIsSet_;
}

void BatchDeleteJobMetadata::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


