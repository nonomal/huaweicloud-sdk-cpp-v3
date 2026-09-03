

#include "huaweicloud/rds/v3/model/CreateBinlogMergeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateBinlogMergeRequest::CreateBinlogMergeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBinlogMergeRequest::~CreateBinlogMergeRequest() = default;

void CreateBinlogMergeRequest::validate()
{
}

web::json::value CreateBinlogMergeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateBinlogMergeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateBinlogMergeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateBinlogMergeRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateBinlogMergeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateBinlogMergeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateBinlogMergeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateBinlogMergeRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateBinlogMergeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateBinlogMergeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateBinlogMergeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateBinlogMergeRequestBody CreateBinlogMergeRequest::getBody() const
{
    return body_;
}

void CreateBinlogMergeRequest::setBody(const CreateBinlogMergeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBinlogMergeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBinlogMergeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


