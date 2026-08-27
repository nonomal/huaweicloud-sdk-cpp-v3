

#include "huaweicloud/gaussdb/v3/model/StopOnlineDdlTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StopOnlineDdlTaskRequest::StopOnlineDdlTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopOnlineDdlTaskRequest::~StopOnlineDdlTaskRequest() = default;

void StopOnlineDdlTaskRequest::validate()
{
}

web::json::value StopOnlineDdlTaskRequest::toJson() const
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
bool StopOnlineDdlTaskRequest::fromJson(const web::json::value& val)
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
            StopOnlineDDLTaskRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopOnlineDdlTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopOnlineDdlTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopOnlineDdlTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopOnlineDdlTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopOnlineDdlTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void StopOnlineDdlTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopOnlineDdlTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopOnlineDdlTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

StopOnlineDDLTaskRequestV3 StopOnlineDdlTaskRequest::getBody() const
{
    return body_;
}

void StopOnlineDdlTaskRequest::setBody(const StopOnlineDDLTaskRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopOnlineDdlTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopOnlineDdlTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


