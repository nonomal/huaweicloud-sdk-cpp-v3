

#include "huaweicloud/cloudtest/v1/model/WiseEye.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




WiseEye::WiseEye()
{
    enable_ = "";
    enableIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    regionKey_ = "";
    regionKeyIsSet_ = false;
    scopeId_ = "";
    scopeIdIsSet_ = false;
    scopeName_ = "";
    scopeNameIsSet_ = false;
}

WiseEye::~WiseEye() = default;

void WiseEye::validate()
{
}

web::json::value WiseEye::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(regionKeyIsSet_) {
        val[utility::conversions::to_string_t("region_key")] = ModelBase::toJson(regionKey_);
    }
    if(scopeIdIsSet_) {
        val[utility::conversions::to_string_t("scope_id")] = ModelBase::toJson(scopeId_);
    }
    if(scopeNameIsSet_) {
        val[utility::conversions::to_string_t("scope_name")] = ModelBase::toJson(scopeName_);
    }

    return val;
}
bool WiseEye::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeName(refVal);
        }
    }
    return ok;
}


std::string WiseEye::getEnable() const
{
    return enable_;
}

void WiseEye::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool WiseEye::enableIsSet() const
{
    return enableIsSet_;
}

void WiseEye::unsetenable()
{
    enableIsSet_ = false;
}

std::string WiseEye::getLevel() const
{
    return level_;
}

void WiseEye::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool WiseEye::levelIsSet() const
{
    return levelIsSet_;
}

void WiseEye::unsetlevel()
{
    levelIsSet_ = false;
}

std::string WiseEye::getRegionKey() const
{
    return regionKey_;
}

void WiseEye::setRegionKey(const std::string& value)
{
    regionKey_ = value;
    regionKeyIsSet_ = true;
}

bool WiseEye::regionKeyIsSet() const
{
    return regionKeyIsSet_;
}

void WiseEye::unsetregionKey()
{
    regionKeyIsSet_ = false;
}

std::string WiseEye::getScopeId() const
{
    return scopeId_;
}

void WiseEye::setScopeId(const std::string& value)
{
    scopeId_ = value;
    scopeIdIsSet_ = true;
}

bool WiseEye::scopeIdIsSet() const
{
    return scopeIdIsSet_;
}

void WiseEye::unsetscopeId()
{
    scopeIdIsSet_ = false;
}

std::string WiseEye::getScopeName() const
{
    return scopeName_;
}

void WiseEye::setScopeName(const std::string& value)
{
    scopeName_ = value;
    scopeNameIsSet_ = true;
}

bool WiseEye::scopeNameIsSet() const
{
    return scopeNameIsSet_;
}

void WiseEye::unsetscopeName()
{
    scopeNameIsSet_ = false;
}

}
}
}
}
}


