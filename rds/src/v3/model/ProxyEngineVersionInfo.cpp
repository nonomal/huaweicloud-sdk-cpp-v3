

#include "huaweicloud/rds/v3/model/ProxyEngineVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyEngineVersionInfo::ProxyEngineVersionInfo()
{
    currentEngineVersion_ = "";
    currentEngineVersionIsSet_ = false;
    targetEngineVersion_ = "";
    targetEngineVersionIsSet_ = false;
    upgradeFlag_ = false;
    upgradeFlagIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    risksIsSet_ = false;
}

ProxyEngineVersionInfo::~ProxyEngineVersionInfo() = default;

void ProxyEngineVersionInfo::validate()
{
}

web::json::value ProxyEngineVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentEngineVersionIsSet_) {
        val[utility::conversions::to_string_t("current_engine_version")] = ModelBase::toJson(currentEngineVersion_);
    }
    if(targetEngineVersionIsSet_) {
        val[utility::conversions::to_string_t("target_engine_version")] = ModelBase::toJson(targetEngineVersion_);
    }
    if(upgradeFlagIsSet_) {
        val[utility::conversions::to_string_t("upgrade_flag")] = ModelBase::toJson(upgradeFlag_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(risksIsSet_) {
        val[utility::conversions::to_string_t("risks")] = ModelBase::toJson(risks_);
    }

    return val;
}
bool ProxyEngineVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risks"));
        if(!fieldValue.is_null())
        {
            std::vector<EngineRiskDesc> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRisks(refVal);
        }
    }
    return ok;
}


std::string ProxyEngineVersionInfo::getCurrentEngineVersion() const
{
    return currentEngineVersion_;
}

void ProxyEngineVersionInfo::setCurrentEngineVersion(const std::string& value)
{
    currentEngineVersion_ = value;
    currentEngineVersionIsSet_ = true;
}

bool ProxyEngineVersionInfo::currentEngineVersionIsSet() const
{
    return currentEngineVersionIsSet_;
}

void ProxyEngineVersionInfo::unsetcurrentEngineVersion()
{
    currentEngineVersionIsSet_ = false;
}

std::string ProxyEngineVersionInfo::getTargetEngineVersion() const
{
    return targetEngineVersion_;
}

void ProxyEngineVersionInfo::setTargetEngineVersion(const std::string& value)
{
    targetEngineVersion_ = value;
    targetEngineVersionIsSet_ = true;
}

bool ProxyEngineVersionInfo::targetEngineVersionIsSet() const
{
    return targetEngineVersionIsSet_;
}

void ProxyEngineVersionInfo::unsettargetEngineVersion()
{
    targetEngineVersionIsSet_ = false;
}

bool ProxyEngineVersionInfo::isUpgradeFlag() const
{
    return upgradeFlag_;
}

void ProxyEngineVersionInfo::setUpgradeFlag(bool value)
{
    upgradeFlag_ = value;
    upgradeFlagIsSet_ = true;
}

bool ProxyEngineVersionInfo::upgradeFlagIsSet() const
{
    return upgradeFlagIsSet_;
}

void ProxyEngineVersionInfo::unsetupgradeFlag()
{
    upgradeFlagIsSet_ = false;
}

std::string ProxyEngineVersionInfo::getProxyId() const
{
    return proxyId_;
}

void ProxyEngineVersionInfo::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ProxyEngineVersionInfo::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ProxyEngineVersionInfo::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::vector<EngineRiskDesc>& ProxyEngineVersionInfo::getRisks()
{
    return risks_;
}

void ProxyEngineVersionInfo::setRisks(const std::vector<EngineRiskDesc>& value)
{
    risks_ = value;
    risksIsSet_ = true;
}

bool ProxyEngineVersionInfo::risksIsSet() const
{
    return risksIsSet_;
}

void ProxyEngineVersionInfo::unsetrisks()
{
    risksIsSet_ = false;
}

}
}
}
}
}


