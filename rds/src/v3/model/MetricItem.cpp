

#include "huaweicloud/rds/v3/model/MetricItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MetricItem::MetricItem()
{
    metric_ = "";
    metricIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
}

MetricItem::~MetricItem() = default;

void MetricItem::validate()
{
}

web::json::value MetricItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}
bool MetricItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    return ok;
}


std::string MetricItem::getMetric() const
{
    return metric_;
}

void MetricItem::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool MetricItem::metricIsSet() const
{
    return metricIsSet_;
}

void MetricItem::unsetmetric()
{
    metricIsSet_ = false;
}

std::string MetricItem::getName() const
{
    return name_;
}

void MetricItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MetricItem::nameIsSet() const
{
    return nameIsSet_;
}

void MetricItem::unsetname()
{
    nameIsSet_ = false;
}

std::string MetricItem::getFilter() const
{
    return filter_;
}

void MetricItem::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool MetricItem::filterIsSet() const
{
    return filterIsSet_;
}

void MetricItem::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


