

#include "huaweicloud/rds/v3/model/DeleteBinlogMergeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteBinlogMergeResponse::DeleteBinlogMergeResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteBinlogMergeResponse::~DeleteBinlogMergeResponse() = default;

void DeleteBinlogMergeResponse::validate()
{
}

web::json::value DeleteBinlogMergeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteBinlogMergeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteBinlogMergeResponse::getStatus() const
{
    return status_;
}

void DeleteBinlogMergeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteBinlogMergeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteBinlogMergeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


