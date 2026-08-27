

#include "huaweicloud/gaussdb/v3/model/UpgradeConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeConfigurationResponse::UpgradeConfigurationResponse()
{
    name_ = "";
    nameIsSet_ = false;
    diffParametersIsSet_ = false;
    skippedParameterNamesIsSet_ = false;
}

UpgradeConfigurationResponse::~UpgradeConfigurationResponse() = default;

void UpgradeConfigurationResponse::validate()
{
}

web::json::value UpgradeConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(diffParametersIsSet_) {
        val[utility::conversions::to_string_t("diff_parameters")] = ModelBase::toJson(diffParameters_);
    }
    if(skippedParameterNamesIsSet_) {
        val[utility::conversions::to_string_t("skipped_parameter_names")] = ModelBase::toJson(skippedParameterNames_);
    }

    return val;
}
bool UpgradeConfigurationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("diff_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupParameterDiffInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skipped_parameter_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skipped_parameter_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedParameterNames(refVal);
        }
    }
    return ok;
}


std::string UpgradeConfigurationResponse::getName() const
{
    return name_;
}

void UpgradeConfigurationResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpgradeConfigurationResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpgradeConfigurationResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<GroupParameterDiffInfo>& UpgradeConfigurationResponse::getDiffParameters()
{
    return diffParameters_;
}

void UpgradeConfigurationResponse::setDiffParameters(const std::vector<GroupParameterDiffInfo>& value)
{
    diffParameters_ = value;
    diffParametersIsSet_ = true;
}

bool UpgradeConfigurationResponse::diffParametersIsSet() const
{
    return diffParametersIsSet_;
}

void UpgradeConfigurationResponse::unsetdiffParameters()
{
    diffParametersIsSet_ = false;
}

std::vector<std::string>& UpgradeConfigurationResponse::getSkippedParameterNames()
{
    return skippedParameterNames_;
}

void UpgradeConfigurationResponse::setSkippedParameterNames(const std::vector<std::string>& value)
{
    skippedParameterNames_ = value;
    skippedParameterNamesIsSet_ = true;
}

bool UpgradeConfigurationResponse::skippedParameterNamesIsSet() const
{
    return skippedParameterNamesIsSet_;
}

void UpgradeConfigurationResponse::unsetskippedParameterNames()
{
    skippedParameterNamesIsSet_ = false;
}

}
}
}
}
}


