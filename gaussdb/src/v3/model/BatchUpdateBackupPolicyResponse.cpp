

#include "huaweicloud/gaussdb/v3/model/BatchUpdateBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpdateBackupPolicyResponse::BatchUpdateBackupPolicyResponse()
{
    failedResultsIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
    failedCount_ = 0;
    failedCountIsSet_ = false;
}

BatchUpdateBackupPolicyResponse::~BatchUpdateBackupPolicyResponse() = default;

void BatchUpdateBackupPolicyResponse::validate()
{
}

web::json::value BatchUpdateBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedResultsIsSet_) {
        val[utility::conversions::to_string_t("failed_results")] = ModelBase::toJson(failedResults_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(failedCountIsSet_) {
        val[utility::conversions::to_string_t("failed_count")] = ModelBase::toJson(failedCount_);
    }

    return val;
}
bool BatchUpdateBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_results"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateBackupPolicyResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedCount(refVal);
        }
    }
    return ok;
}


std::vector<UpdateBackupPolicyResult>& BatchUpdateBackupPolicyResponse::getFailedResults()
{
    return failedResults_;
}

void BatchUpdateBackupPolicyResponse::setFailedResults(const std::vector<UpdateBackupPolicyResult>& value)
{
    failedResults_ = value;
    failedResultsIsSet_ = true;
}

bool BatchUpdateBackupPolicyResponse::failedResultsIsSet() const
{
    return failedResultsIsSet_;
}

void BatchUpdateBackupPolicyResponse::unsetfailedResults()
{
    failedResultsIsSet_ = false;
}

int32_t BatchUpdateBackupPolicyResponse::getSuccessCount() const
{
    return successCount_;
}

void BatchUpdateBackupPolicyResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool BatchUpdateBackupPolicyResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void BatchUpdateBackupPolicyResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int32_t BatchUpdateBackupPolicyResponse::getFailedCount() const
{
    return failedCount_;
}

void BatchUpdateBackupPolicyResponse::setFailedCount(int32_t value)
{
    failedCount_ = value;
    failedCountIsSet_ = true;
}

bool BatchUpdateBackupPolicyResponse::failedCountIsSet() const
{
    return failedCountIsSet_;
}

void BatchUpdateBackupPolicyResponse::unsetfailedCount()
{
    failedCountIsSet_ = false;
}

}
}
}
}
}


