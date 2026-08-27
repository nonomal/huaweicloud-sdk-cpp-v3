

#include "huaweicloud/gaussdb/v3/model/ShowTaurusDbTxnProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaurusDbTxnProgressRequest::ShowTaurusDbTxnProgressRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTaurusDbTxnProgressRequest::~ShowTaurusDbTxnProgressRequest() = default;

void ShowTaurusDbTxnProgressRequest::validate()
{
}

web::json::value ShowTaurusDbTxnProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowTaurusDbTxnProgressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TxnProgressRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTaurusDbTxnProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTaurusDbTxnProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTaurusDbTxnProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTaurusDbTxnProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowTaurusDbTxnProgressRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTaurusDbTxnProgressRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaurusDbTxnProgressRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaurusDbTxnProgressRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTaurusDbTxnProgressRequest::getNodeId() const
{
    return nodeId_;
}

void ShowTaurusDbTxnProgressRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowTaurusDbTxnProgressRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowTaurusDbTxnProgressRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

TxnProgressRequestBody ShowTaurusDbTxnProgressRequest::getBody() const
{
    return body_;
}

void ShowTaurusDbTxnProgressRequest::setBody(const TxnProgressRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTaurusDbTxnProgressRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTaurusDbTxnProgressRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


