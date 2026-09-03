

#include "huaweicloud/rds/v3/model/ProxySlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxySlowLogDetail::ProxySlowLogDetail()
{
    sourceIp_ = "";
    sourceIpIsSet_ = false;
    descIp_ = "";
    descIpIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    reactionTime_ = "";
    reactionTimeIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
}

ProxySlowLogDetail::~ProxySlowLogDetail() = default;

void ProxySlowLogDetail::validate()
{
}

web::json::value ProxySlowLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIpIsSet_) {
        val[utility::conversions::to_string_t("source_ip")] = ModelBase::toJson(sourceIp_);
    }
    if(descIpIsSet_) {
        val[utility::conversions::to_string_t("desc_ip")] = ModelBase::toJson(descIp_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(reactionTimeIsSet_) {
        val[utility::conversions::to_string_t("reaction_time")] = ModelBase::toJson(reactionTime_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }

    return val;
}
bool ProxySlowLogDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reaction_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reaction_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReactionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTime(refVal);
        }
    }
    return ok;
}


std::string ProxySlowLogDetail::getSourceIp() const
{
    return sourceIp_;
}

void ProxySlowLogDetail::setSourceIp(const std::string& value)
{
    sourceIp_ = value;
    sourceIpIsSet_ = true;
}

bool ProxySlowLogDetail::sourceIpIsSet() const
{
    return sourceIpIsSet_;
}

void ProxySlowLogDetail::unsetsourceIp()
{
    sourceIpIsSet_ = false;
}

std::string ProxySlowLogDetail::getDescIp() const
{
    return descIp_;
}

void ProxySlowLogDetail::setDescIp(const std::string& value)
{
    descIp_ = value;
    descIpIsSet_ = true;
}

bool ProxySlowLogDetail::descIpIsSet() const
{
    return descIpIsSet_;
}

void ProxySlowLogDetail::unsetdescIp()
{
    descIpIsSet_ = false;
}

std::string ProxySlowLogDetail::getUser() const
{
    return user_;
}

void ProxySlowLogDetail::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ProxySlowLogDetail::userIsSet() const
{
    return userIsSet_;
}

void ProxySlowLogDetail::unsetuser()
{
    userIsSet_ = false;
}

std::string ProxySlowLogDetail::getReactionTime() const
{
    return reactionTime_;
}

void ProxySlowLogDetail::setReactionTime(const std::string& value)
{
    reactionTime_ = value;
    reactionTimeIsSet_ = true;
}

bool ProxySlowLogDetail::reactionTimeIsSet() const
{
    return reactionTimeIsSet_;
}

void ProxySlowLogDetail::unsetreactionTime()
{
    reactionTimeIsSet_ = false;
}

std::string ProxySlowLogDetail::getTraceId() const
{
    return traceId_;
}

void ProxySlowLogDetail::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ProxySlowLogDetail::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ProxySlowLogDetail::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ProxySlowLogDetail::getSql() const
{
    return sql_;
}

void ProxySlowLogDetail::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool ProxySlowLogDetail::sqlIsSet() const
{
    return sqlIsSet_;
}

void ProxySlowLogDetail::unsetsql()
{
    sqlIsSet_ = false;
}

std::string ProxySlowLogDetail::getStartTime() const
{
    return startTime_;
}

void ProxySlowLogDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ProxySlowLogDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ProxySlowLogDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ProxySlowLogDetail::getEndTime() const
{
    return endTime_;
}

void ProxySlowLogDetail::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ProxySlowLogDetail::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ProxySlowLogDetail::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ProxySlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void ProxySlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ProxySlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ProxySlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ProxySlowLogDetail::getDatabase() const
{
    return database_;
}

void ProxySlowLogDetail::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ProxySlowLogDetail::databaseIsSet() const
{
    return databaseIsSet_;
}

void ProxySlowLogDetail::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ProxySlowLogDetail::getLogTime() const
{
    return logTime_;
}

void ProxySlowLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool ProxySlowLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void ProxySlowLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

}
}
}
}
}


