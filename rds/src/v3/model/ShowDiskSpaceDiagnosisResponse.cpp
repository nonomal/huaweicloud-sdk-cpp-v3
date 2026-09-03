

#include "huaweicloud/rds/v3/model/ShowDiskSpaceDiagnosisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDiskSpaceDiagnosisResponse::ShowDiskSpaceDiagnosisResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultsIsSet_ = false;
}

ShowDiskSpaceDiagnosisResponse::~ShowDiskSpaceDiagnosisResponse() = default;

void ShowDiskSpaceDiagnosisResponse::validate()
{
}

web::json::value ShowDiskSpaceDiagnosisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool ShowDiskSpaceDiagnosisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<DiskSpaceDiagnosisResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::string ShowDiskSpaceDiagnosisResponse::getStatus() const
{
    return status_;
}

void ShowDiskSpaceDiagnosisResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDiskSpaceDiagnosisResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDiskSpaceDiagnosisResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<DiskSpaceDiagnosisResult>& ShowDiskSpaceDiagnosisResponse::getResults()
{
    return results_;
}

void ShowDiskSpaceDiagnosisResponse::setResults(const std::vector<DiskSpaceDiagnosisResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ShowDiskSpaceDiagnosisResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ShowDiskSpaceDiagnosisResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


