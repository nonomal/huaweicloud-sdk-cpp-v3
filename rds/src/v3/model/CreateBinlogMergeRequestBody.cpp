

#include "huaweicloud/rds/v3/model/CreateBinlogMergeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateBinlogMergeRequestBody::CreateBinlogMergeRequestBody()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

CreateBinlogMergeRequestBody::~CreateBinlogMergeRequestBody() = default;

void CreateBinlogMergeRequestBody::validate()
{
}

web::json::value CreateBinlogMergeRequestBody::toJson() const
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
bool CreateBinlogMergeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


int64_t CreateBinlogMergeRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateBinlogMergeRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateBinlogMergeRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateBinlogMergeRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t CreateBinlogMergeRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateBinlogMergeRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateBinlogMergeRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateBinlogMergeRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


