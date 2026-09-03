

#include "huaweicloud/modelarts/v1/model/FtMetricData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FtMetricData::FtMetricData()
{
    formatVersion_ = "";
    formatVersionIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    metricsIsSet_ = false;
}

FtMetricData::~FtMetricData() = default;

void FtMetricData::validate()
{
}

web::json::value FtMetricData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatVersionIsSet_) {
        val[utility::conversions::to_string_t("format_version")] = ModelBase::toJson(formatVersion_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool FtMetricData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormatVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<FtMetric> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::string FtMetricData::getFormatVersion() const
{
    return formatVersion_;
}

void FtMetricData::setFormatVersion(const std::string& value)
{
    formatVersion_ = value;
    formatVersionIsSet_ = true;
}

bool FtMetricData::formatVersionIsSet() const
{
    return formatVersionIsSet_;
}

void FtMetricData::unsetformatVersion()
{
    formatVersionIsSet_ = false;
}

std::string FtMetricData::getTimestamp() const
{
    return timestamp_;
}

void FtMetricData::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool FtMetricData::timestampIsSet() const
{
    return timestampIsSet_;
}

void FtMetricData::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::vector<FtMetric>& FtMetricData::getMetrics()
{
    return metrics_;
}

void FtMetricData::setMetrics(const std::vector<FtMetric>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool FtMetricData::metricsIsSet() const
{
    return metricsIsSet_;
}

void FtMetricData::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


