

#include "huaweicloud/rds/v3/model/ShowMySqlProxySlowLogListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowMySqlProxySlowLogListRequest::ShowMySqlProxySlowLogListRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

ShowMySqlProxySlowLogListRequest::~ShowMySqlProxySlowLogListRequest() = default;

void ShowMySqlProxySlowLogListRequest::validate()
{
}

web::json::value ShowMySqlProxySlowLogListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool ShowMySqlProxySlowLogListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    return ok;
}


std::string ShowMySqlProxySlowLogListRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowMySqlProxySlowLogListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListRequest::getProxyId() const
{
    return proxyId_;
}

void ShowMySqlProxySlowLogListRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMySqlProxySlowLogListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int64_t ShowMySqlProxySlowLogListRequest::getStartTime() const
{
    return startTime_;
}

void ShowMySqlProxySlowLogListRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowMySqlProxySlowLogListRequest::getEndTime() const
{
    return endTime_;
}

void ShowMySqlProxySlowLogListRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowMySqlProxySlowLogListRequest::getPerPage() const
{
    return perPage_;
}

void ShowMySqlProxySlowLogListRequest::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListRequest::getLineNum() const
{
    return lineNum_;
}

void ShowMySqlProxySlowLogListRequest::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ShowMySqlProxySlowLogListRequest::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ShowMySqlProxySlowLogListRequest::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


