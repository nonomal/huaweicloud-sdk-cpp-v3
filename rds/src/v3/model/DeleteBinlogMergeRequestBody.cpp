

#include "huaweicloud/rds/v3/model/DeleteBinlogMergeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteBinlogMergeRequestBody::DeleteBinlogMergeRequestBody()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteBinlogMergeRequestBody::~DeleteBinlogMergeRequestBody() = default;

void DeleteBinlogMergeRequestBody::validate()
{
}

web::json::value DeleteBinlogMergeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteBinlogMergeRequestBody::fromJson(const web::json::value& val)
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


std::string DeleteBinlogMergeRequestBody::getId() const
{
    return id_;
}

void DeleteBinlogMergeRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteBinlogMergeRequestBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteBinlogMergeRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


