

#include "huaweicloud/rds/v3/model/ShowSqlDiagnosisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSqlDiagnosisResponse::ShowSqlDiagnosisResponse()
{
    resultsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowSqlDiagnosisResponse::~ShowSqlDiagnosisResponse() = default;

void ShowSqlDiagnosisResponse::validate()
{
}

web::json::value ShowSqlDiagnosisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowSqlDiagnosisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlDiagnosisResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SqlDiagnosisResult>& ShowSqlDiagnosisResponse::getResults()
{
    return results_;
}

void ShowSqlDiagnosisResponse::setResults(const std::vector<SqlDiagnosisResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ShowSqlDiagnosisResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ShowSqlDiagnosisResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t ShowSqlDiagnosisResponse::getTotal() const
{
    return total_;
}

void ShowSqlDiagnosisResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowSqlDiagnosisResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowSqlDiagnosisResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


