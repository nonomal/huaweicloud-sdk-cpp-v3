

#include "huaweicloud/rds/v3/model/SetBackupRetainPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBackupRetainPolicyRequestBody::SetBackupRetainPolicyRequestBody()
{
    auto_ = "";
    autoIsSet_ = false;
    manual_ = "";
    manualIsSet_ = false;
    instanceidsIsSet_ = false;
}

SetBackupRetainPolicyRequestBody::~SetBackupRetainPolicyRequestBody() = default;

void SetBackupRetainPolicyRequestBody::validate()
{
}

web::json::value SetBackupRetainPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoIsSet_) {
        val[utility::conversions::to_string_t("auto")] = ModelBase::toJson(auto_);
    }
    if(manualIsSet_) {
        val[utility::conversions::to_string_t("manual")] = ModelBase::toJson(manual_);
    }
    if(instanceidsIsSet_) {
        val[utility::conversions::to_string_t("instanceids")] = ModelBase::toJson(instanceids_);
    }

    return val;
}
bool SetBackupRetainPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuto(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manual"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manual"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManual(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instanceids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceids(refVal);
        }
    }
    return ok;
}


std::string SetBackupRetainPolicyRequestBody::getAuto() const
{
    return auto_;
}

void SetBackupRetainPolicyRequestBody::setAuto(const std::string& value)
{
    auto_ = value;
    autoIsSet_ = true;
}

bool SetBackupRetainPolicyRequestBody::autoIsSet() const
{
    return autoIsSet_;
}

void SetBackupRetainPolicyRequestBody::unsetauto()
{
    autoIsSet_ = false;
}

std::string SetBackupRetainPolicyRequestBody::getManual() const
{
    return manual_;
}

void SetBackupRetainPolicyRequestBody::setManual(const std::string& value)
{
    manual_ = value;
    manualIsSet_ = true;
}

bool SetBackupRetainPolicyRequestBody::manualIsSet() const
{
    return manualIsSet_;
}

void SetBackupRetainPolicyRequestBody::unsetmanual()
{
    manualIsSet_ = false;
}

std::vector<std::string>& SetBackupRetainPolicyRequestBody::getInstanceids()
{
    return instanceids_;
}

void SetBackupRetainPolicyRequestBody::setInstanceids(const std::vector<std::string>& value)
{
    instanceids_ = value;
    instanceidsIsSet_ = true;
}

bool SetBackupRetainPolicyRequestBody::instanceidsIsSet() const
{
    return instanceidsIsSet_;
}

void SetBackupRetainPolicyRequestBody::unsetinstanceids()
{
    instanceidsIsSet_ = false;
}

}
}
}
}
}


