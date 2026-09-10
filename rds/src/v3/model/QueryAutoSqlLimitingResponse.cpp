

#include "huaweicloud/rds/v3/model/QueryAutoSqlLimitingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryAutoSqlLimitingResponse::QueryAutoSqlLimitingResponse()
{
    cpuUsage_ = 0;
    cpuUsageIsSet_ = false;
    activeSessions_ = 0;
    activeSessionsIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    sessionAllow_ = 0;
    sessionAllowIsSet_ = false;
    userIsSet_ = false;
    dbIsSet_ = false;
    clearTime_ = 0;
    clearTimeIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    isKeyword_ = false;
    isKeywordIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    retainSqlRule_ = false;
    retainSqlRuleIsSet_ = false;
    killSessionSwitch_ = false;
    killSessionSwitchIsSet_ = false;
}

QueryAutoSqlLimitingResponse::~QueryAutoSqlLimitingResponse() = default;

void QueryAutoSqlLimitingResponse::validate()
{
}

web::json::value QueryAutoSqlLimitingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuUsageIsSet_) {
        val[utility::conversions::to_string_t("cpu_usage")] = ModelBase::toJson(cpuUsage_);
    }
    if(activeSessionsIsSet_) {
        val[utility::conversions::to_string_t("active_sessions")] = ModelBase::toJson(activeSessions_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(sessionAllowIsSet_) {
        val[utility::conversions::to_string_t("session_allow")] = ModelBase::toJson(sessionAllow_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(clearTimeIsSet_) {
        val[utility::conversions::to_string_t("clear_time")] = ModelBase::toJson(clearTime_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(isKeywordIsSet_) {
        val[utility::conversions::to_string_t("is_keyword")] = ModelBase::toJson(isKeyword_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(retainSqlRuleIsSet_) {
        val[utility::conversions::to_string_t("retain_sql_rule")] = ModelBase::toJson(retainSqlRule_);
    }
    if(killSessionSwitchIsSet_) {
        val[utility::conversions::to_string_t("kill_session_switch")] = ModelBase::toJson(killSessionSwitch_);
    }

    return val;
}
bool QueryAutoSqlLimitingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_usage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_sessions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveSessions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_allow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_allow"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionAllow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clear_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clear_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClearTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_keyword"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retain_sql_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retain_sql_rule"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetainSqlRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kill_session_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kill_session_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKillSessionSwitch(refVal);
        }
    }
    return ok;
}


int32_t QueryAutoSqlLimitingResponse::getCpuUsage() const
{
    return cpuUsage_;
}

void QueryAutoSqlLimitingResponse::setCpuUsage(int32_t value)
{
    cpuUsage_ = value;
    cpuUsageIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::cpuUsageIsSet() const
{
    return cpuUsageIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetcpuUsage()
{
    cpuUsageIsSet_ = false;
}

int32_t QueryAutoSqlLimitingResponse::getActiveSessions() const
{
    return activeSessions_;
}

void QueryAutoSqlLimitingResponse::setActiveSessions(int32_t value)
{
    activeSessions_ = value;
    activeSessionsIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::activeSessionsIsSet() const
{
    return activeSessionsIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetactiveSessions()
{
    activeSessionsIsSet_ = false;
}

std::string QueryAutoSqlLimitingResponse::getCondition() const
{
    return condition_;
}

void QueryAutoSqlLimitingResponse::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::conditionIsSet() const
{
    return conditionIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t QueryAutoSqlLimitingResponse::getDuration() const
{
    return duration_;
}

void QueryAutoSqlLimitingResponse::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::durationIsSet() const
{
    return durationIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::string QueryAutoSqlLimitingResponse::getStartTime() const
{
    return startTime_;
}

void QueryAutoSqlLimitingResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string QueryAutoSqlLimitingResponse::getEndTime() const
{
    return endTime_;
}

void QueryAutoSqlLimitingResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t QueryAutoSqlLimitingResponse::getSessionAllow() const
{
    return sessionAllow_;
}

void QueryAutoSqlLimitingResponse::setSessionAllow(int32_t value)
{
    sessionAllow_ = value;
    sessionAllowIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::sessionAllowIsSet() const
{
    return sessionAllowIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetsessionAllow()
{
    sessionAllowIsSet_ = false;
}

std::vector<std::string>& QueryAutoSqlLimitingResponse::getUser()
{
    return user_;
}

void QueryAutoSqlLimitingResponse::setUser(const std::vector<std::string>& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::userIsSet() const
{
    return userIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetuser()
{
    userIsSet_ = false;
}

std::vector<std::string>& QueryAutoSqlLimitingResponse::getDb()
{
    return db_;
}

void QueryAutoSqlLimitingResponse::setDb(const std::vector<std::string>& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::dbIsSet() const
{
    return dbIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetdb()
{
    dbIsSet_ = false;
}

int32_t QueryAutoSqlLimitingResponse::getClearTime() const
{
    return clearTime_;
}

void QueryAutoSqlLimitingResponse::setClearTime(int32_t value)
{
    clearTime_ = value;
    clearTimeIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::clearTimeIsSet() const
{
    return clearTimeIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetclearTime()
{
    clearTimeIsSet_ = false;
}

bool QueryAutoSqlLimitingResponse::isEnable() const
{
    return enable_;
}

void QueryAutoSqlLimitingResponse::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::enableIsSet() const
{
    return enableIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetenable()
{
    enableIsSet_ = false;
}

bool QueryAutoSqlLimitingResponse::isIsKeyword() const
{
    return isKeyword_;
}

void QueryAutoSqlLimitingResponse::setIsKeyword(bool value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

int32_t QueryAutoSqlLimitingResponse::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void QueryAutoSqlLimitingResponse::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

bool QueryAutoSqlLimitingResponse::isRetainSqlRule() const
{
    return retainSqlRule_;
}

void QueryAutoSqlLimitingResponse::setRetainSqlRule(bool value)
{
    retainSqlRule_ = value;
    retainSqlRuleIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::retainSqlRuleIsSet() const
{
    return retainSqlRuleIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetretainSqlRule()
{
    retainSqlRuleIsSet_ = false;
}

bool QueryAutoSqlLimitingResponse::isKillSessionSwitch() const
{
    return killSessionSwitch_;
}

void QueryAutoSqlLimitingResponse::setKillSessionSwitch(bool value)
{
    killSessionSwitch_ = value;
    killSessionSwitchIsSet_ = true;
}

bool QueryAutoSqlLimitingResponse::killSessionSwitchIsSet() const
{
    return killSessionSwitchIsSet_;
}

void QueryAutoSqlLimitingResponse::unsetkillSessionSwitch()
{
    killSessionSwitchIsSet_ = false;
}

}
}
}
}
}


