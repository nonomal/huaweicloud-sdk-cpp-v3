

#include "huaweicloud/modelarts/v1/model/PublicNetworkConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PublicNetworkConfig::PublicNetworkConfig()
{
    publicNetworkType_ = "";
    publicNetworkTypeIsSet_ = false;
}

PublicNetworkConfig::~PublicNetworkConfig() = default;

void PublicNetworkConfig::validate()
{
}

web::json::value PublicNetworkConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("public_network_type")] = ModelBase::toJson(publicNetworkType_);
    }

    return val;
}
bool PublicNetworkConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicNetworkType(refVal);
        }
    }
    return ok;
}


std::string PublicNetworkConfig::getPublicNetworkType() const
{
    return publicNetworkType_;
}

void PublicNetworkConfig::setPublicNetworkType(const std::string& value)
{
    publicNetworkType_ = value;
    publicNetworkTypeIsSet_ = true;
}

bool PublicNetworkConfig::publicNetworkTypeIsSet() const
{
    return publicNetworkTypeIsSet_;
}

void PublicNetworkConfig::unsetpublicNetworkType()
{
    publicNetworkTypeIsSet_ = false;
}

}
}
}
}
}


