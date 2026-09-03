
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsMetricNamesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsMetricNamesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MetricItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetInstancesOpsMetricNamesResponse
    : public ModelBase, public HttpResponse
{
public:
    GetInstancesOpsMetricNamesResponse();
    virtual ~GetInstancesOpsMetricNamesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetInstancesOpsMetricNamesResponse members

    /// <summary>
    /// **参数解释**：  监控指标项列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<MetricItem>& getMetrics();
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const std::vector<MetricItem>& value);

    /// <summary>
    /// **参数解释**：  CES命名空间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：  监控维度类型。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDim() const;
    bool dimIsSet() const;
    void unsetdim();
    void setDim(const std::string& value);


protected:
    std::vector<MetricItem> metrics_;
    bool metricsIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string dim_;
    bool dimIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsMetricNamesResponse_H_
