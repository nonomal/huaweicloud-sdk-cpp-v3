

#include "huaweicloud/modelarts/v1/model/AttachDevServerPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDevServerPortRequest::AttachDevServerPortRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

AttachDevServerPortRequest::~AttachDevServerPortRequest() = default;

void AttachDevServerPortRequest::validate()
{
}

web::json::value AttachDevServerPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AttachDevServerPortRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AttachDevServerPortsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachDevServerPortRequest::getId() const
{
    return id_;
}

void AttachDevServerPortRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AttachDevServerPortRequest::idIsSet() const
{
    return idIsSet_;
}

void AttachDevServerPortRequest::unsetid()
{
    idIsSet_ = false;
}

AttachDevServerPortsRequestBody AttachDevServerPortRequest::getBody() const
{
    return body_;
}

void AttachDevServerPortRequest::setBody(const AttachDevServerPortsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachDevServerPortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachDevServerPortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


