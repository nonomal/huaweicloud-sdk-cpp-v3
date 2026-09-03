

#include "huaweicloud/rds/v3/model/ModifyNewBackupEncryptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyNewBackupEncryptResponse::ModifyNewBackupEncryptResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ModifyNewBackupEncryptResponse::~ModifyNewBackupEncryptResponse() = default;

void ModifyNewBackupEncryptResponse::validate()
{
}

web::json::value ModifyNewBackupEncryptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ModifyNewBackupEncryptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ModifyNewBackupEncryptResponse::getResult() const
{
    return result_;
}

void ModifyNewBackupEncryptResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ModifyNewBackupEncryptResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ModifyNewBackupEncryptResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


