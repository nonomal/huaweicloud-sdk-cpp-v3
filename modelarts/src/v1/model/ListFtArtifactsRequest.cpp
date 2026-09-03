

#include "huaweicloud/modelarts/v1/model/ListFtArtifactsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListFtArtifactsRequest::ListFtArtifactsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    steps_ = 0;
    stepsIsSet_ = false;
    epoch_ = 0;
    epochIsSet_ = false;
    loss_ = 0.0;
    lossIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    orderByCreateTimeAsc_ = false;
    orderByCreateTimeAscIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFtArtifactsRequest::~ListFtArtifactsRequest() = default;

void ListFtArtifactsRequest::validate()
{
}

web::json::value ListFtArtifactsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(epochIsSet_) {
        val[utility::conversions::to_string_t("epoch")] = ModelBase::toJson(epoch_);
    }
    if(lossIsSet_) {
        val[utility::conversions::to_string_t("loss")] = ModelBase::toJson(loss_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(orderByCreateTimeAscIsSet_) {
        val[utility::conversions::to_string_t("order_by_create_time_asc")] = ModelBase::toJson(orderByCreateTimeAsc_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListFtArtifactsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("epoch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("epoch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpoch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("loss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loss"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by_create_time_asc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by_create_time_asc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderByCreateTimeAsc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListFtArtifactsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ListFtArtifactsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ListFtArtifactsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ListFtArtifactsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

int32_t ListFtArtifactsRequest::getSteps() const
{
    return steps_;
}

void ListFtArtifactsRequest::setSteps(int32_t value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ListFtArtifactsRequest::stepsIsSet() const
{
    return stepsIsSet_;
}

void ListFtArtifactsRequest::unsetsteps()
{
    stepsIsSet_ = false;
}

int32_t ListFtArtifactsRequest::getEpoch() const
{
    return epoch_;
}

void ListFtArtifactsRequest::setEpoch(int32_t value)
{
    epoch_ = value;
    epochIsSet_ = true;
}

bool ListFtArtifactsRequest::epochIsSet() const
{
    return epochIsSet_;
}

void ListFtArtifactsRequest::unsetepoch()
{
    epochIsSet_ = false;
}

double ListFtArtifactsRequest::getLoss() const
{
    return loss_;
}

void ListFtArtifactsRequest::setLoss(double value)
{
    loss_ = value;
    lossIsSet_ = true;
}

bool ListFtArtifactsRequest::lossIsSet() const
{
    return lossIsSet_;
}

void ListFtArtifactsRequest::unsetloss()
{
    lossIsSet_ = false;
}

std::string ListFtArtifactsRequest::getStatus() const
{
    return status_;
}

void ListFtArtifactsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFtArtifactsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListFtArtifactsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool ListFtArtifactsRequest::isOrderByCreateTimeAsc() const
{
    return orderByCreateTimeAsc_;
}

void ListFtArtifactsRequest::setOrderByCreateTimeAsc(bool value)
{
    orderByCreateTimeAsc_ = value;
    orderByCreateTimeAscIsSet_ = true;
}

bool ListFtArtifactsRequest::orderByCreateTimeAscIsSet() const
{
    return orderByCreateTimeAscIsSet_;
}

void ListFtArtifactsRequest::unsetorderByCreateTimeAsc()
{
    orderByCreateTimeAscIsSet_ = false;
}

int32_t ListFtArtifactsRequest::getLimit() const
{
    return limit_;
}

void ListFtArtifactsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFtArtifactsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFtArtifactsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFtArtifactsRequest::getOffset() const
{
    return offset_;
}

void ListFtArtifactsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFtArtifactsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFtArtifactsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


