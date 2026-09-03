

#include "huaweicloud/modelarts/v1/model/DatasetConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DatasetConfig::DatasetConfig()
{
    datasetName_ = "";
    datasetNameIsSet_ = false;
    datasetSource_ = "";
    datasetSourceIsSet_ = false;
    datasetId_ = "";
    datasetIdIsSet_ = false;
    splitRatio_ = 0;
    splitRatioIsSet_ = false;
    usedStep_ = "";
    usedStepIsSet_ = false;
    datasetProportion_ = 0;
    datasetProportionIsSet_ = false;
}

DatasetConfig::~DatasetConfig() = default;

void DatasetConfig::validate()
{
}

web::json::value DatasetConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datasetNameIsSet_) {
        val[utility::conversions::to_string_t("dataset_name")] = ModelBase::toJson(datasetName_);
    }
    if(datasetSourceIsSet_) {
        val[utility::conversions::to_string_t("dataset_source")] = ModelBase::toJson(datasetSource_);
    }
    if(datasetIdIsSet_) {
        val[utility::conversions::to_string_t("dataset_id")] = ModelBase::toJson(datasetId_);
    }
    if(splitRatioIsSet_) {
        val[utility::conversions::to_string_t("split_ratio")] = ModelBase::toJson(splitRatio_);
    }
    if(usedStepIsSet_) {
        val[utility::conversions::to_string_t("used_step")] = ModelBase::toJson(usedStep_);
    }
    if(datasetProportionIsSet_) {
        val[utility::conversions::to_string_t("dataset_proportion")] = ModelBase::toJson(datasetProportion_);
    }

    return val;
}
bool DatasetConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("split_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_step"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_proportion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_proportion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetProportion(refVal);
        }
    }
    return ok;
}


std::string DatasetConfig::getDatasetName() const
{
    return datasetName_;
}

void DatasetConfig::setDatasetName(const std::string& value)
{
    datasetName_ = value;
    datasetNameIsSet_ = true;
}

bool DatasetConfig::datasetNameIsSet() const
{
    return datasetNameIsSet_;
}

void DatasetConfig::unsetdatasetName()
{
    datasetNameIsSet_ = false;
}

std::string DatasetConfig::getDatasetSource() const
{
    return datasetSource_;
}

void DatasetConfig::setDatasetSource(const std::string& value)
{
    datasetSource_ = value;
    datasetSourceIsSet_ = true;
}

bool DatasetConfig::datasetSourceIsSet() const
{
    return datasetSourceIsSet_;
}

void DatasetConfig::unsetdatasetSource()
{
    datasetSourceIsSet_ = false;
}

std::string DatasetConfig::getDatasetId() const
{
    return datasetId_;
}

void DatasetConfig::setDatasetId(const std::string& value)
{
    datasetId_ = value;
    datasetIdIsSet_ = true;
}

bool DatasetConfig::datasetIdIsSet() const
{
    return datasetIdIsSet_;
}

void DatasetConfig::unsetdatasetId()
{
    datasetIdIsSet_ = false;
}

int32_t DatasetConfig::getSplitRatio() const
{
    return splitRatio_;
}

void DatasetConfig::setSplitRatio(int32_t value)
{
    splitRatio_ = value;
    splitRatioIsSet_ = true;
}

bool DatasetConfig::splitRatioIsSet() const
{
    return splitRatioIsSet_;
}

void DatasetConfig::unsetsplitRatio()
{
    splitRatioIsSet_ = false;
}

std::string DatasetConfig::getUsedStep() const
{
    return usedStep_;
}

void DatasetConfig::setUsedStep(const std::string& value)
{
    usedStep_ = value;
    usedStepIsSet_ = true;
}

bool DatasetConfig::usedStepIsSet() const
{
    return usedStepIsSet_;
}

void DatasetConfig::unsetusedStep()
{
    usedStepIsSet_ = false;
}

int32_t DatasetConfig::getDatasetProportion() const
{
    return datasetProportion_;
}

void DatasetConfig::setDatasetProportion(int32_t value)
{
    datasetProportion_ = value;
    datasetProportionIsSet_ = true;
}

bool DatasetConfig::datasetProportionIsSet() const
{
    return datasetProportionIsSet_;
}

void DatasetConfig::unsetdatasetProportion()
{
    datasetProportionIsSet_ = false;
}

}
}
}
}
}


