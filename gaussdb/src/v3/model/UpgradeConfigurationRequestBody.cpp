

#include "huaweicloud/gaussdb/v3/model/UpgradeConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeConfigurationRequestBody::UpgradeConfigurationRequestBody()
{
    parametersIsSet_ = false;
}

UpgradeConfigurationRequestBody::~UpgradeConfigurationRequestBody() = default;

void UpgradeConfigurationRequestBody::validate()
{
}

web::json::value UpgradeConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool UpgradeConfigurationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpgradeConfigurationRequestBody::getParameters()
{
    return parameters_;
}

void UpgradeConfigurationRequestBody::setParameters(const std::vector<std::string>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpgradeConfigurationRequestBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpgradeConfigurationRequestBody::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


