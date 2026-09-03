

#include "huaweicloud/rds/v3/model/GetInstancesOpsMetricNamesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesOpsMetricNamesResponse::GetInstancesOpsMetricNamesResponse()
{
    metricsIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    dim_ = "";
    dimIsSet_ = false;
}

GetInstancesOpsMetricNamesResponse::~GetInstancesOpsMetricNamesResponse() = default;

void GetInstancesOpsMetricNamesResponse::validate()
{
}

web::json::value GetInstancesOpsMetricNamesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(dimIsSet_) {
        val[utility::conversions::to_string_t("dim")] = ModelBase::toJson(dim_);
    }

    return val;
}
bool GetInstancesOpsMetricNamesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dim"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dim"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDim(refVal);
        }
    }
    return ok;
}


std::vector<MetricItem>& GetInstancesOpsMetricNamesResponse::getMetrics()
{
    return metrics_;
}

void GetInstancesOpsMetricNamesResponse::setMetrics(const std::vector<MetricItem>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool GetInstancesOpsMetricNamesResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void GetInstancesOpsMetricNamesResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

std::string GetInstancesOpsMetricNamesResponse::getNamespace() const
{
    return namespace_;
}

void GetInstancesOpsMetricNamesResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool GetInstancesOpsMetricNamesResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void GetInstancesOpsMetricNamesResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string GetInstancesOpsMetricNamesResponse::getDim() const
{
    return dim_;
}

void GetInstancesOpsMetricNamesResponse::setDim(const std::string& value)
{
    dim_ = value;
    dimIsSet_ = true;
}

bool GetInstancesOpsMetricNamesResponse::dimIsSet() const
{
    return dimIsSet_;
}

void GetInstancesOpsMetricNamesResponse::unsetdim()
{
    dimIsSet_ = false;
}

}
}
}
}
}


