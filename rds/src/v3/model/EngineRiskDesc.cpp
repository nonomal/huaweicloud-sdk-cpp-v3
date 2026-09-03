

#include "huaweicloud/rds/v3/model/EngineRiskDesc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EngineRiskDesc::EngineRiskDesc()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    suggest_ = "";
    suggestIsSet_ = false;
    influence_ = "";
    influenceIsSet_ = false;
    guidance_ = "";
    guidanceIsSet_ = false;
    serviceImpactDuration_ = "";
    serviceImpactDurationIsSet_ = false;
    upgradeDuration_ = "";
    upgradeDurationIsSet_ = false;
}

EngineRiskDesc::~EngineRiskDesc() = default;

void EngineRiskDesc::validate()
{
}

web::json::value EngineRiskDesc::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(suggestIsSet_) {
        val[utility::conversions::to_string_t("suggest")] = ModelBase::toJson(suggest_);
    }
    if(influenceIsSet_) {
        val[utility::conversions::to_string_t("influence")] = ModelBase::toJson(influence_);
    }
    if(guidanceIsSet_) {
        val[utility::conversions::to_string_t("guidance")] = ModelBase::toJson(guidance_);
    }
    if(serviceImpactDurationIsSet_) {
        val[utility::conversions::to_string_t("service_impact_duration")] = ModelBase::toJson(serviceImpactDuration_);
    }
    if(upgradeDurationIsSet_) {
        val[utility::conversions::to_string_t("upgrade_duration")] = ModelBase::toJson(upgradeDuration_);
    }

    return val;
}
bool EngineRiskDesc::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("influence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("influence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfluence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guidance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guidance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuidance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_impact_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_impact_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceImpactDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeDuration(refVal);
        }
    }
    return ok;
}


std::string EngineRiskDesc::getInstanceId() const
{
    return instanceId_;
}

void EngineRiskDesc::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EngineRiskDesc::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EngineRiskDesc::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string EngineRiskDesc::getEngineName() const
{
    return engineName_;
}

void EngineRiskDesc::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool EngineRiskDesc::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void EngineRiskDesc::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string EngineRiskDesc::getEngineVersion() const
{
    return engineVersion_;
}

void EngineRiskDesc::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool EngineRiskDesc::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void EngineRiskDesc::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

int32_t EngineRiskDesc::getLevel() const
{
    return level_;
}

void EngineRiskDesc::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool EngineRiskDesc::levelIsSet() const
{
    return levelIsSet_;
}

void EngineRiskDesc::unsetlevel()
{
    levelIsSet_ = false;
}

std::string EngineRiskDesc::getSuggest() const
{
    return suggest_;
}

void EngineRiskDesc::setSuggest(const std::string& value)
{
    suggest_ = value;
    suggestIsSet_ = true;
}

bool EngineRiskDesc::suggestIsSet() const
{
    return suggestIsSet_;
}

void EngineRiskDesc::unsetsuggest()
{
    suggestIsSet_ = false;
}

std::string EngineRiskDesc::getInfluence() const
{
    return influence_;
}

void EngineRiskDesc::setInfluence(const std::string& value)
{
    influence_ = value;
    influenceIsSet_ = true;
}

bool EngineRiskDesc::influenceIsSet() const
{
    return influenceIsSet_;
}

void EngineRiskDesc::unsetinfluence()
{
    influenceIsSet_ = false;
}

std::string EngineRiskDesc::getGuidance() const
{
    return guidance_;
}

void EngineRiskDesc::setGuidance(const std::string& value)
{
    guidance_ = value;
    guidanceIsSet_ = true;
}

bool EngineRiskDesc::guidanceIsSet() const
{
    return guidanceIsSet_;
}

void EngineRiskDesc::unsetguidance()
{
    guidanceIsSet_ = false;
}

std::string EngineRiskDesc::getServiceImpactDuration() const
{
    return serviceImpactDuration_;
}

void EngineRiskDesc::setServiceImpactDuration(const std::string& value)
{
    serviceImpactDuration_ = value;
    serviceImpactDurationIsSet_ = true;
}

bool EngineRiskDesc::serviceImpactDurationIsSet() const
{
    return serviceImpactDurationIsSet_;
}

void EngineRiskDesc::unsetserviceImpactDuration()
{
    serviceImpactDurationIsSet_ = false;
}

std::string EngineRiskDesc::getUpgradeDuration() const
{
    return upgradeDuration_;
}

void EngineRiskDesc::setUpgradeDuration(const std::string& value)
{
    upgradeDuration_ = value;
    upgradeDurationIsSet_ = true;
}

bool EngineRiskDesc::upgradeDurationIsSet() const
{
    return upgradeDurationIsSet_;
}

void EngineRiskDesc::unsetupgradeDuration()
{
    upgradeDurationIsSet_ = false;
}

}
}
}
}
}


