

#include "huaweicloud/cloudtest/v1/model/Warn.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Warn::Warn()
{
    warnCode_ = "";
    warnCodeIsSet_ = false;
    warnMsg_ = "";
    warnMsgIsSet_ = false;
}

Warn::~Warn() = default;

void Warn::validate()
{
}

web::json::value Warn::toJson() const
{
    web::json::value val = web::json::value::object();

    if(warnCodeIsSet_) {
        val[utility::conversions::to_string_t("warn_code")] = ModelBase::toJson(warnCode_);
    }
    if(warnMsgIsSet_) {
        val[utility::conversions::to_string_t("warn_msg")] = ModelBase::toJson(warnMsg_);
    }

    return val;
}
bool Warn::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("warn_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warn_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarnCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warn_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warn_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarnMsg(refVal);
        }
    }
    return ok;
}


std::string Warn::getWarnCode() const
{
    return warnCode_;
}

void Warn::setWarnCode(const std::string& value)
{
    warnCode_ = value;
    warnCodeIsSet_ = true;
}

bool Warn::warnCodeIsSet() const
{
    return warnCodeIsSet_;
}

void Warn::unsetwarnCode()
{
    warnCodeIsSet_ = false;
}

std::string Warn::getWarnMsg() const
{
    return warnMsg_;
}

void Warn::setWarnMsg(const std::string& value)
{
    warnMsg_ = value;
    warnMsgIsSet_ = true;
}

bool Warn::warnMsgIsSet() const
{
    return warnMsgIsSet_;
}

void Warn::unsetwarnMsg()
{
    warnMsgIsSet_ = false;
}

}
}
}
}
}


