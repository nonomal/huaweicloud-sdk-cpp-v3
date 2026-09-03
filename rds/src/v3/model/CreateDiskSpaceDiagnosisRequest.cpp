

#include "huaweicloud/rds/v3/model/CreateDiskSpaceDiagnosisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDiskSpaceDiagnosisRequest::CreateDiskSpaceDiagnosisRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDiskSpaceDiagnosisRequest::~CreateDiskSpaceDiagnosisRequest() = default;

void CreateDiskSpaceDiagnosisRequest::validate()
{
}

web::json::value CreateDiskSpaceDiagnosisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDiskSpaceDiagnosisRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDiskSpaceDiagnosisRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDiskSpaceDiagnosisRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDiskSpaceDiagnosisRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDiskSpaceDiagnosisRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDiskSpaceDiagnosisRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDiskSpaceDiagnosisRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDiskSpaceDiagnosisRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDiskSpaceDiagnosisRequestBody CreateDiskSpaceDiagnosisRequest::getBody() const
{
    return body_;
}

void CreateDiskSpaceDiagnosisRequest::setBody(const CreateDiskSpaceDiagnosisRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDiskSpaceDiagnosisRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


