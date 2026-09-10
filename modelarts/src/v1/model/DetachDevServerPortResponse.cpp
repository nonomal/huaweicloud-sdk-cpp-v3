

#include "huaweicloud/modelarts/v1/model/DetachDevServerPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDevServerPortResponse::DetachDevServerPortResponse()
{
    portId_ = "";
    portIdIsSet_ = false;
}

DetachDevServerPortResponse::~DetachDevServerPortResponse() = default;

void DetachDevServerPortResponse::validate()
{
}

web::json::value DetachDevServerPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}
bool DetachDevServerPortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    return ok;
}


std::string DetachDevServerPortResponse::getPortId() const
{
    return portId_;
}

void DetachDevServerPortResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool DetachDevServerPortResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void DetachDevServerPortResponse::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


