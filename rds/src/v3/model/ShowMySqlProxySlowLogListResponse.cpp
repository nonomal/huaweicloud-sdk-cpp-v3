

#include "huaweicloud/rds/v3/model/ShowMySqlProxySlowLogListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowMySqlProxySlowLogListResponse::ShowMySqlProxySlowLogListResponse()
{
    slowLogListIsSet_ = false;
    slowLogColumnIsSet_ = false;
    slowLogQueryTime_ = "";
    slowLogQueryTimeIsSet_ = false;
    ltsSlowLogEnabled_ = "";
    ltsSlowLogEnabledIsSet_ = false;
    supportSwitchLtsSlowLog_ = false;
    supportSwitchLtsSlowLogIsSet_ = false;
    totalCount_ = "";
    totalCountIsSet_ = false;
}

ShowMySqlProxySlowLogListResponse::~ShowMySqlProxySlowLogListResponse() = default;

void ShowMySqlProxySlowLogListResponse::validate()
{
}

web::json::value ShowMySqlProxySlowLogListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }
    if(slowLogColumnIsSet_) {
        val[utility::conversions::to_string_t("slow_log_column")] = ModelBase::toJson(slowLogColumn_);
    }
    if(slowLogQueryTimeIsSet_) {
        val[utility::conversions::to_string_t("slow_log_query_time")] = ModelBase::toJson(slowLogQueryTime_);
    }
    if(ltsSlowLogEnabledIsSet_) {
        val[utility::conversions::to_string_t("lts_slow_log_enabled")] = ModelBase::toJson(ltsSlowLogEnabled_);
    }
    if(supportSwitchLtsSlowLogIsSet_) {
        val[utility::conversions::to_string_t("support_switch_lts_slow_log")] = ModelBase::toJson(supportSwitchLtsSlowLog_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowMySqlProxySlowLogListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxySlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_log_column"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_column"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogColumn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_log_query_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_query_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogQueryTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_slow_log_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_slow_log_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsSlowLogEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_switch_lts_slow_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_switch_lts_slow_log"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSwitchLtsSlowLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ProxySlowLogDetail>& ShowMySqlProxySlowLogListResponse::getSlowLogList()
{
    return slowLogList_;
}

void ShowMySqlProxySlowLogListResponse::setSlowLogList(const std::vector<ProxySlowLogDetail>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

std::vector<std::string>& ShowMySqlProxySlowLogListResponse::getSlowLogColumn()
{
    return slowLogColumn_;
}

void ShowMySqlProxySlowLogListResponse::setSlowLogColumn(const std::vector<std::string>& value)
{
    slowLogColumn_ = value;
    slowLogColumnIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::slowLogColumnIsSet() const
{
    return slowLogColumnIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsetslowLogColumn()
{
    slowLogColumnIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListResponse::getSlowLogQueryTime() const
{
    return slowLogQueryTime_;
}

void ShowMySqlProxySlowLogListResponse::setSlowLogQueryTime(const std::string& value)
{
    slowLogQueryTime_ = value;
    slowLogQueryTimeIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::slowLogQueryTimeIsSet() const
{
    return slowLogQueryTimeIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsetslowLogQueryTime()
{
    slowLogQueryTimeIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListResponse::getLtsSlowLogEnabled() const
{
    return ltsSlowLogEnabled_;
}

void ShowMySqlProxySlowLogListResponse::setLtsSlowLogEnabled(const std::string& value)
{
    ltsSlowLogEnabled_ = value;
    ltsSlowLogEnabledIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::ltsSlowLogEnabledIsSet() const
{
    return ltsSlowLogEnabledIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsetltsSlowLogEnabled()
{
    ltsSlowLogEnabledIsSet_ = false;
}

bool ShowMySqlProxySlowLogListResponse::isSupportSwitchLtsSlowLog() const
{
    return supportSwitchLtsSlowLog_;
}

void ShowMySqlProxySlowLogListResponse::setSupportSwitchLtsSlowLog(bool value)
{
    supportSwitchLtsSlowLog_ = value;
    supportSwitchLtsSlowLogIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::supportSwitchLtsSlowLogIsSet() const
{
    return supportSwitchLtsSlowLogIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsetsupportSwitchLtsSlowLog()
{
    supportSwitchLtsSlowLogIsSet_ = false;
}

std::string ShowMySqlProxySlowLogListResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowMySqlProxySlowLogListResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowMySqlProxySlowLogListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowMySqlProxySlowLogListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


