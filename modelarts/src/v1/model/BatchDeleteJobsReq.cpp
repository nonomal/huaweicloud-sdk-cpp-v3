

#include "huaweicloud/modelarts/v1/model/BatchDeleteJobsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteJobsReq::BatchDeleteJobsReq()
{
    jobsIsSet_ = false;
}

BatchDeleteJobsReq::~BatchDeleteJobsReq() = default;

void BatchDeleteJobsReq::validate()
{
}

web::json::value BatchDeleteJobsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchDeleteJobsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteJobItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteJobItem>& BatchDeleteJobsReq::getJobs()
{
    return jobs_;
}

void BatchDeleteJobsReq::setJobs(const std::vector<BatchDeleteJobItem>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchDeleteJobsReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchDeleteJobsReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


