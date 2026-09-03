

#include "huaweicloud/rds/v3/model/CreateDiskSpaceDiagnosisRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDiskSpaceDiagnosisRequestBody::CreateDiskSpaceDiagnosisRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

CreateDiskSpaceDiagnosisRequestBody::~CreateDiskSpaceDiagnosisRequestBody() = default;

void CreateDiskSpaceDiagnosisRequestBody::validate()
{
}

web::json::value CreateDiskSpaceDiagnosisRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool CreateDiskSpaceDiagnosisRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string CreateDiskSpaceDiagnosisRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateDiskSpaceDiagnosisRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateDiskSpaceDiagnosisRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateDiskSpaceDiagnosisRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateDiskSpaceDiagnosisRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateDiskSpaceDiagnosisRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


