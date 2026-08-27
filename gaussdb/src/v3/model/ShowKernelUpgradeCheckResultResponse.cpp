

#include "huaweicloud/gaussdb/v3/model/ShowKernelUpgradeCheckResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKernelUpgradeCheckResultResponse::ShowKernelUpgradeCheckResultResponse()
{
    jobIdsIsSet_ = false;
}

ShowKernelUpgradeCheckResultResponse::~ShowKernelUpgradeCheckResultResponse() = default;

void ShowKernelUpgradeCheckResultResponse::validate()
{
}

web::json::value ShowKernelUpgradeCheckResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool ShowKernelUpgradeCheckResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowKernelUpgradeCheckResultResponse::getJobIds()
{
    return jobIds_;
}

void ShowKernelUpgradeCheckResultResponse::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultResponse::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void ShowKernelUpgradeCheckResultResponse::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


