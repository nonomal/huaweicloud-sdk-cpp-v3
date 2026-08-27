

#include "huaweicloud/gaussdb/v3/model/DownloadOnlineDdlTaskLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadOnlineDdlTaskLogRequest::DownloadOnlineDdlTaskLogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadOnlineDdlTaskLogRequest::~DownloadOnlineDdlTaskLogRequest() = default;

void DownloadOnlineDdlTaskLogRequest::validate()
{
}

web::json::value DownloadOnlineDdlTaskLogRequest::toJson() const
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
bool DownloadOnlineDdlTaskLogRequest::fromJson(const web::json::value& val)
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
            DownloadOnlineDDLTaskLogRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DownloadOnlineDdlTaskLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadOnlineDdlTaskLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadOnlineDdlTaskLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadOnlineDdlTaskLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadOnlineDdlTaskLogRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadOnlineDdlTaskLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadOnlineDdlTaskLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadOnlineDdlTaskLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DownloadOnlineDDLTaskLogRequestV3 DownloadOnlineDdlTaskLogRequest::getBody() const
{
    return body_;
}

void DownloadOnlineDdlTaskLogRequest::setBody(const DownloadOnlineDDLTaskLogRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadOnlineDdlTaskLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadOnlineDdlTaskLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


