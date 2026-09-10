

#include "huaweicloud/modelarts/v1/model/DetachDevServerPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDevServerPortRequest::DetachDevServerPortRequest()
{
    id_ = "";
    idIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
}

DetachDevServerPortRequest::~DetachDevServerPortRequest() = default;

void DetachDevServerPortRequest::validate()
{
}

web::json::value DetachDevServerPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}
bool DetachDevServerPortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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


std::string DetachDevServerPortRequest::getId() const
{
    return id_;
}

void DetachDevServerPortRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DetachDevServerPortRequest::idIsSet() const
{
    return idIsSet_;
}

void DetachDevServerPortRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DetachDevServerPortRequest::getPortId() const
{
    return portId_;
}

void DetachDevServerPortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool DetachDevServerPortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void DetachDevServerPortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


