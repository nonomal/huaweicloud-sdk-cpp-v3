

#include "huaweicloud/gaussdb/v3/model/DeleteOnlineDdlTaskRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteOnlineDdlTaskRecordResponse::DeleteOnlineDdlTaskRecordResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteOnlineDdlTaskRecordResponse::~DeleteOnlineDdlTaskRecordResponse() = default;

void DeleteOnlineDdlTaskRecordResponse::validate()
{
}

web::json::value DeleteOnlineDdlTaskRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteOnlineDdlTaskRecordResponse::fromJson(const web::json::value& val)
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


std::string DeleteOnlineDdlTaskRecordResponse::getJobId() const
{
    return jobId_;
}

void DeleteOnlineDdlTaskRecordResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteOnlineDdlTaskRecordResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteOnlineDdlTaskRecordResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


