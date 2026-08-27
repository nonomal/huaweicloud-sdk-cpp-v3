

#include "huaweicloud/gaussdb/v3/model/GroupParameterDiffInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GroupParameterDiffInfo::GroupParameterDiffInfo()
{
    name_ = "";
    nameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

GroupParameterDiffInfo::~GroupParameterDiffInfo() = default;

void GroupParameterDiffInfo::validate()
{
}

web::json::value GroupParameterDiffInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}
bool GroupParameterDiffInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    return ok;
}


std::string GroupParameterDiffInfo::getName() const
{
    return name_;
}

void GroupParameterDiffInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupParameterDiffInfo::nameIsSet() const
{
    return nameIsSet_;
}

void GroupParameterDiffInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupParameterDiffInfo::getSourceValue() const
{
    return sourceValue_;
}

void GroupParameterDiffInfo::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool GroupParameterDiffInfo::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void GroupParameterDiffInfo::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string GroupParameterDiffInfo::getTargetValue() const
{
    return targetValue_;
}

void GroupParameterDiffInfo::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool GroupParameterDiffInfo::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void GroupParameterDiffInfo::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


