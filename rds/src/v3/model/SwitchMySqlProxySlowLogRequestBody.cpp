

#include "huaweicloud/rds/v3/model/SwitchMySqlProxySlowLogRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchMySqlProxySlowLogRequestBody::SwitchMySqlProxySlowLogRequestBody()
{
    ltsSlowLogEnabled_ = "";
    ltsSlowLogEnabledIsSet_ = false;
}

SwitchMySqlProxySlowLogRequestBody::~SwitchMySqlProxySlowLogRequestBody() = default;

void SwitchMySqlProxySlowLogRequestBody::validate()
{
}

web::json::value SwitchMySqlProxySlowLogRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsSlowLogEnabledIsSet_) {
        val[utility::conversions::to_string_t("lts_slow_log_enabled")] = ModelBase::toJson(ltsSlowLogEnabled_);
    }

    return val;
}
bool SwitchMySqlProxySlowLogRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_slow_log_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_slow_log_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsSlowLogEnabled(refVal);
        }
    }
    return ok;
}


std::string SwitchMySqlProxySlowLogRequestBody::getLtsSlowLogEnabled() const
{
    return ltsSlowLogEnabled_;
}

void SwitchMySqlProxySlowLogRequestBody::setLtsSlowLogEnabled(const std::string& value)
{
    ltsSlowLogEnabled_ = value;
    ltsSlowLogEnabledIsSet_ = true;
}

bool SwitchMySqlProxySlowLogRequestBody::ltsSlowLogEnabledIsSet() const
{
    return ltsSlowLogEnabledIsSet_;
}

void SwitchMySqlProxySlowLogRequestBody::unsetltsSlowLogEnabled()
{
    ltsSlowLogEnabledIsSet_ = false;
}

}
}
}
}
}


