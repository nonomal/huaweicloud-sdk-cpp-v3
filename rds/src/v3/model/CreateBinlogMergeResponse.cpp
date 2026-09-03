

#include "huaweicloud/rds/v3/model/CreateBinlogMergeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateBinlogMergeResponse::CreateBinlogMergeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateBinlogMergeResponse::~CreateBinlogMergeResponse() = default;

void CreateBinlogMergeResponse::validate()
{
}

web::json::value CreateBinlogMergeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateBinlogMergeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string CreateBinlogMergeResponse::getJobId() const
{
    return jobId_;
}

void CreateBinlogMergeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateBinlogMergeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateBinlogMergeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


