

#include "huaweicloud/gaussdb/v3/model/ClearOnlineDdlTaskTempTableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClearOnlineDdlTaskTempTableRequest::ClearOnlineDdlTaskTempTableRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ClearOnlineDdlTaskTempTableRequest::~ClearOnlineDdlTaskTempTableRequest() = default;

void ClearOnlineDdlTaskTempTableRequest::validate()
{
}

web::json::value ClearOnlineDdlTaskTempTableRequest::toJson() const
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
bool ClearOnlineDdlTaskTempTableRequest::fromJson(const web::json::value& val)
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
            ClearOnlineDDLTaskTempTableRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ClearOnlineDdlTaskTempTableRequest::getXLanguage() const
{
    return xLanguage_;
}

void ClearOnlineDdlTaskTempTableRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ClearOnlineDdlTaskTempTableRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ClearOnlineDdlTaskTempTableRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ClearOnlineDdlTaskTempTableRequest::getInstanceId() const
{
    return instanceId_;
}

void ClearOnlineDdlTaskTempTableRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ClearOnlineDdlTaskTempTableRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ClearOnlineDdlTaskTempTableRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ClearOnlineDDLTaskTempTableRequestV3 ClearOnlineDdlTaskTempTableRequest::getBody() const
{
    return body_;
}

void ClearOnlineDdlTaskTempTableRequest::setBody(const ClearOnlineDDLTaskTempTableRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ClearOnlineDdlTaskTempTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ClearOnlineDdlTaskTempTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


