

#include "huaweicloud/rds/v3/model/SqlDiagnosisResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlDiagnosisResult::SqlDiagnosisResult()
{
    id_ = 0L;
    idIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
}

SqlDiagnosisResult::~SqlDiagnosisResult() = default;

void SqlDiagnosisResult::validate()
{
}

web::json::value SqlDiagnosisResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool SqlDiagnosisResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDb(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


int64_t SqlDiagnosisResult::getId() const
{
    return id_;
}

void SqlDiagnosisResult::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SqlDiagnosisResult::idIsSet() const
{
    return idIsSet_;
}

void SqlDiagnosisResult::unsetid()
{
    idIsSet_ = false;
}

std::string SqlDiagnosisResult::getUser() const
{
    return user_;
}

void SqlDiagnosisResult::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SqlDiagnosisResult::userIsSet() const
{
    return userIsSet_;
}

void SqlDiagnosisResult::unsetuser()
{
    userIsSet_ = false;
}

std::string SqlDiagnosisResult::getHost() const
{
    return host_;
}

void SqlDiagnosisResult::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool SqlDiagnosisResult::hostIsSet() const
{
    return hostIsSet_;
}

void SqlDiagnosisResult::unsethost()
{
    hostIsSet_ = false;
}

std::string SqlDiagnosisResult::getDb() const
{
    return db_;
}

void SqlDiagnosisResult::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool SqlDiagnosisResult::dbIsSet() const
{
    return dbIsSet_;
}

void SqlDiagnosisResult::unsetdb()
{
    dbIsSet_ = false;
}

int64_t SqlDiagnosisResult::getStartTime() const
{
    return startTime_;
}

void SqlDiagnosisResult::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SqlDiagnosisResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SqlDiagnosisResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SqlDiagnosisResult::getSql() const
{
    return sql_;
}

void SqlDiagnosisResult::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SqlDiagnosisResult::sqlIsSet() const
{
    return sqlIsSet_;
}

void SqlDiagnosisResult::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


