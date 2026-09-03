

#include "huaweicloud/modelarts/v1/model/WorkloadStatisticsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadStatisticsInfo::WorkloadStatisticsInfo()
{
    infer_ = 0;
    inferIsSet_ = false;
    notebook_ = 0;
    notebookIsSet_ = false;
    train_ = 0;
    trainIsSet_ = false;
    warmUpTask_ = 0;
    warmUpTaskIsSet_ = false;
    xInfer_ = 0;
    xInferIsSet_ = false;
    sum_ = 0;
    sumIsSet_ = false;
}

WorkloadStatisticsInfo::~WorkloadStatisticsInfo() = default;

void WorkloadStatisticsInfo::validate()
{
}

web::json::value WorkloadStatisticsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inferIsSet_) {
        val[utility::conversions::to_string_t("infer")] = ModelBase::toJson(infer_);
    }
    if(notebookIsSet_) {
        val[utility::conversions::to_string_t("notebook")] = ModelBase::toJson(notebook_);
    }
    if(trainIsSet_) {
        val[utility::conversions::to_string_t("train")] = ModelBase::toJson(train_);
    }
    if(warmUpTaskIsSet_) {
        val[utility::conversions::to_string_t("warmUpTask")] = ModelBase::toJson(warmUpTask_);
    }
    if(xInferIsSet_) {
        val[utility::conversions::to_string_t("x-infer")] = ModelBase::toJson(xInfer_);
    }
    if(sumIsSet_) {
        val[utility::conversions::to_string_t("sum")] = ModelBase::toJson(sum_);
    }

    return val;
}
bool WorkloadStatisticsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("infer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notebook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notebook"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotebook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warmUpTask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warmUpTask"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarmUpTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x-infer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-infer"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXInfer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSum(refVal);
        }
    }
    return ok;
}


int32_t WorkloadStatisticsInfo::getInfer() const
{
    return infer_;
}

void WorkloadStatisticsInfo::setInfer(int32_t value)
{
    infer_ = value;
    inferIsSet_ = true;
}

bool WorkloadStatisticsInfo::inferIsSet() const
{
    return inferIsSet_;
}

void WorkloadStatisticsInfo::unsetinfer()
{
    inferIsSet_ = false;
}

int32_t WorkloadStatisticsInfo::getNotebook() const
{
    return notebook_;
}

void WorkloadStatisticsInfo::setNotebook(int32_t value)
{
    notebook_ = value;
    notebookIsSet_ = true;
}

bool WorkloadStatisticsInfo::notebookIsSet() const
{
    return notebookIsSet_;
}

void WorkloadStatisticsInfo::unsetnotebook()
{
    notebookIsSet_ = false;
}

int32_t WorkloadStatisticsInfo::getTrain() const
{
    return train_;
}

void WorkloadStatisticsInfo::setTrain(int32_t value)
{
    train_ = value;
    trainIsSet_ = true;
}

bool WorkloadStatisticsInfo::trainIsSet() const
{
    return trainIsSet_;
}

void WorkloadStatisticsInfo::unsettrain()
{
    trainIsSet_ = false;
}

int32_t WorkloadStatisticsInfo::getWarmUpTask() const
{
    return warmUpTask_;
}

void WorkloadStatisticsInfo::setWarmUpTask(int32_t value)
{
    warmUpTask_ = value;
    warmUpTaskIsSet_ = true;
}

bool WorkloadStatisticsInfo::warmUpTaskIsSet() const
{
    return warmUpTaskIsSet_;
}

void WorkloadStatisticsInfo::unsetwarmUpTask()
{
    warmUpTaskIsSet_ = false;
}

int32_t WorkloadStatisticsInfo::getXInfer() const
{
    return xInfer_;
}

void WorkloadStatisticsInfo::setXInfer(int32_t value)
{
    xInfer_ = value;
    xInferIsSet_ = true;
}

bool WorkloadStatisticsInfo::xInferIsSet() const
{
    return xInferIsSet_;
}

void WorkloadStatisticsInfo::unsetxInfer()
{
    xInferIsSet_ = false;
}

int32_t WorkloadStatisticsInfo::getSum() const
{
    return sum_;
}

void WorkloadStatisticsInfo::setSum(int32_t value)
{
    sum_ = value;
    sumIsSet_ = true;
}

bool WorkloadStatisticsInfo::sumIsSet() const
{
    return sumIsSet_;
}

void WorkloadStatisticsInfo::unsetsum()
{
    sumIsSet_ = false;
}

}
}
}
}
}


