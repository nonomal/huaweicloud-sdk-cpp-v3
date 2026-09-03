
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertExpression_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertExpression_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertExpression
    : public ModelBase
{
public:
    AlertExpression();
    virtual ~AlertExpression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertExpression members

    /// <summary>
    /// 表达式操作符
    /// </summary>

    std::string getExpressionOperator() const;
    bool expressionOperatorIsSet() const;
    void unsetexpressionOperator();
    void setExpressionOperator(const std::string& value);

    /// <summary>
    /// 指标名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 指标操作符
    /// </summary>

    std::string getMetricOperator() const;
    bool metricOperatorIsSet() const;
    void unsetmetricOperator();
    void setMetricOperator(const std::string& value);

    /// <summary>
    /// 指标阈值
    /// </summary>

    int32_t getMetricThreshold() const;
    bool metricThresholdIsSet() const;
    void unsetmetricThreshold();
    void setMetricThreshold(int32_t value);


protected:
    std::string expressionOperator_;
    bool expressionOperatorIsSet_;
    std::string metricName_;
    bool metricNameIsSet_;
    std::string metricOperator_;
    bool metricOperatorIsSet_;
    int32_t metricThreshold_;
    bool metricThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertExpression_H_
