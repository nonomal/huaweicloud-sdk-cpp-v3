

#include "huaweicloud/rds/v3/model/SetBackupRetainPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBackupRetainPolicyResponse::SetBackupRetainPolicyResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetBackupRetainPolicyResponse::~SetBackupRetainPolicyResponse() = default;

void SetBackupRetainPolicyResponse::validate()
{
}

web::json::value SetBackupRetainPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetBackupRetainPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}


std::string SetBackupRetainPolicyResponse::getResp() const
{
    return resp_;
}

void SetBackupRetainPolicyResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetBackupRetainPolicyResponse::respIsSet() const
{
    return respIsSet_;
}

void SetBackupRetainPolicyResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


