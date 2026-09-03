

#include "huaweicloud/modelarts/v1/model/ShowFtMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowFtMetricsResponse::ShowFtMetricsResponse()
{
    lossIsSet_ = false;
    evalLossIsSet_ = false;
    trainingInfoIsSet_ = false;
    trainProcess_ = 0.0;
    trainProcessIsSet_ = false;
    dataIsSet_ = false;
}

ShowFtMetricsResponse::~ShowFtMetricsResponse() = default;

void ShowFtMetricsResponse::validate()
{
}

web::json::value ShowFtMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lossIsSet_) {
        val[utility::conversions::to_string_t("loss")] = ModelBase::toJson(loss_);
    }
    if(evalLossIsSet_) {
        val[utility::conversions::to_string_t("eval_loss")] = ModelBase::toJson(evalLoss_);
    }
    if(trainingInfoIsSet_) {
        val[utility::conversions::to_string_t("training_info")] = ModelBase::toJson(trainingInfo_);
    }
    if(trainProcessIsSet_) {
        val[utility::conversions::to_string_t("train_process")] = ModelBase::toJson(trainProcess_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowFtMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("loss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loss"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eval_loss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eval_loss"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvalLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("training_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_process"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            FtMetricData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Object ShowFtMetricsResponse::getLoss() const
{
    return loss_;
}

void ShowFtMetricsResponse::setLoss(const Object& value)
{
    loss_ = value;
    lossIsSet_ = true;
}

bool ShowFtMetricsResponse::lossIsSet() const
{
    return lossIsSet_;
}

void ShowFtMetricsResponse::unsetloss()
{
    lossIsSet_ = false;
}

Object ShowFtMetricsResponse::getEvalLoss() const
{
    return evalLoss_;
}

void ShowFtMetricsResponse::setEvalLoss(const Object& value)
{
    evalLoss_ = value;
    evalLossIsSet_ = true;
}

bool ShowFtMetricsResponse::evalLossIsSet() const
{
    return evalLossIsSet_;
}

void ShowFtMetricsResponse::unsetevalLoss()
{
    evalLossIsSet_ = false;
}

Object ShowFtMetricsResponse::getTrainingInfo() const
{
    return trainingInfo_;
}

void ShowFtMetricsResponse::setTrainingInfo(const Object& value)
{
    trainingInfo_ = value;
    trainingInfoIsSet_ = true;
}

bool ShowFtMetricsResponse::trainingInfoIsSet() const
{
    return trainingInfoIsSet_;
}

void ShowFtMetricsResponse::unsettrainingInfo()
{
    trainingInfoIsSet_ = false;
}

double ShowFtMetricsResponse::getTrainProcess() const
{
    return trainProcess_;
}

void ShowFtMetricsResponse::setTrainProcess(double value)
{
    trainProcess_ = value;
    trainProcessIsSet_ = true;
}

bool ShowFtMetricsResponse::trainProcessIsSet() const
{
    return trainProcessIsSet_;
}

void ShowFtMetricsResponse::unsettrainProcess()
{
    trainProcessIsSet_ = false;
}

FtMetricData ShowFtMetricsResponse::getData() const
{
    return data_;
}

void ShowFtMetricsResponse::setData(const FtMetricData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFtMetricsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFtMetricsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


