

#include "huaweicloud/cloudtest/v1/model/DeleteTestsuiteInfosUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestsuiteInfosUsingResponse::DeleteTestsuiteInfosUsingResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteTestsuiteInfosUsingResponse::~DeleteTestsuiteInfosUsingResponse() = default;

void DeleteTestsuiteInfosUsingResponse::validate()
{
}

web::json::value DeleteTestsuiteInfosUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteTestsuiteInfosUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTestsuiteInfosUsingResponse::getBody() const
{
    return body_;
}

void DeleteTestsuiteInfosUsingResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTestsuiteInfosUsingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTestsuiteInfosUsingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


