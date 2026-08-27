

#include "huaweicloud/gaussdb/v3/model/StartOnlineDdlTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StartOnlineDdlTaskResponse::StartOnlineDdlTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartOnlineDdlTaskResponse::~StartOnlineDdlTaskResponse() = default;

void StartOnlineDdlTaskResponse::validate()
{
}

web::json::value StartOnlineDdlTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartOnlineDdlTaskResponse::fromJson(const web::json::value& val)
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


std::string StartOnlineDdlTaskResponse::getJobId() const
{
    return jobId_;
}

void StartOnlineDdlTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartOnlineDdlTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartOnlineDdlTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


