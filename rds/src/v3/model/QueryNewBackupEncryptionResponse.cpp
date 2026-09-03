

#include "huaweicloud/rds/v3/model/QueryNewBackupEncryptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryNewBackupEncryptionResponse::QueryNewBackupEncryptionResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

QueryNewBackupEncryptionResponse::~QueryNewBackupEncryptionResponse() = default;

void QueryNewBackupEncryptionResponse::validate()
{
}

web::json::value QueryNewBackupEncryptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool QueryNewBackupEncryptionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


bool QueryNewBackupEncryptionResponse::isEnabled() const
{
    return enabled_;
}

void QueryNewBackupEncryptionResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool QueryNewBackupEncryptionResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void QueryNewBackupEncryptionResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


