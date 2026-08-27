

#include "huaweicloud/gaussdb/v3/model/StartOnlineDdlTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StartOnlineDdlTaskRequest::StartOnlineDdlTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartOnlineDdlTaskRequest::~StartOnlineDdlTaskRequest() = default;

void StartOnlineDdlTaskRequest::validate()
{
}

web::json::value StartOnlineDdlTaskRequest::toJson() const
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
bool StartOnlineDdlTaskRequest::fromJson(const web::json::value& val)
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
            StartOnlineDDLTaskRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartOnlineDdlTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartOnlineDdlTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartOnlineDdlTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartOnlineDdlTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartOnlineDdlTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void StartOnlineDdlTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartOnlineDdlTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartOnlineDdlTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

StartOnlineDDLTaskRequestV3 StartOnlineDdlTaskRequest::getBody() const
{
    return body_;
}

void StartOnlineDdlTaskRequest::setBody(const StartOnlineDDLTaskRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartOnlineDdlTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartOnlineDdlTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


