

#include "huaweicloud/cloudtest/v1/model/AlertExpression.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertExpression::AlertExpression()
{
    expressionOperator_ = "";
    expressionOperatorIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    metricOperator_ = "";
    metricOperatorIsSet_ = false;
    metricThreshold_ = 0;
    metricThresholdIsSet_ = false;
}

AlertExpression::~AlertExpression() = default;

void AlertExpression::validate()
{
}

web::json::value AlertExpression::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expressionOperatorIsSet_) {
        val[utility::conversions::to_string_t("expression_operator")] = ModelBase::toJson(expressionOperator_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(metricOperatorIsSet_) {
        val[utility::conversions::to_string_t("metric_operator")] = ModelBase::toJson(metricOperator_);
    }
    if(metricThresholdIsSet_) {
        val[utility::conversions::to_string_t("metric_threshold")] = ModelBase::toJson(metricThreshold_);
    }

    return val;
}
bool AlertExpression::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expression_operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expression_operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpressionOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricThreshold(refVal);
        }
    }
    return ok;
}


std::string AlertExpression::getExpressionOperator() const
{
    return expressionOperator_;
}

void AlertExpression::setExpressionOperator(const std::string& value)
{
    expressionOperator_ = value;
    expressionOperatorIsSet_ = true;
}

bool AlertExpression::expressionOperatorIsSet() const
{
    return expressionOperatorIsSet_;
}

void AlertExpression::unsetexpressionOperator()
{
    expressionOperatorIsSet_ = false;
}

std::string AlertExpression::getMetricName() const
{
    return metricName_;
}

void AlertExpression::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool AlertExpression::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void AlertExpression::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string AlertExpression::getMetricOperator() const
{
    return metricOperator_;
}

void AlertExpression::setMetricOperator(const std::string& value)
{
    metricOperator_ = value;
    metricOperatorIsSet_ = true;
}

bool AlertExpression::metricOperatorIsSet() const
{
    return metricOperatorIsSet_;
}

void AlertExpression::unsetmetricOperator()
{
    metricOperatorIsSet_ = false;
}

int32_t AlertExpression::getMetricThreshold() const
{
    return metricThreshold_;
}

void AlertExpression::setMetricThreshold(int32_t value)
{
    metricThreshold_ = value;
    metricThresholdIsSet_ = true;
}

bool AlertExpression::metricThresholdIsSet() const
{
    return metricThresholdIsSet_;
}

void AlertExpression::unsetmetricThreshold()
{
    metricThresholdIsSet_ = false;
}

}
}
}
}
}


