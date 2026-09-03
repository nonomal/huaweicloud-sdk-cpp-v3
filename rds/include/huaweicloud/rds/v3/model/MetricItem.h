
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MetricItem_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MetricItem_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 监控指标项
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MetricItem
    : public ModelBase
{
public:
    MetricItem();
    virtual ~MetricItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricItem members

    /// <summary>
    /// **参数解释**：  监控指标键名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(const std::string& value);

    /// <summary>
    /// **参数解释**：  监控指标显示名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  监控指标过滤条件。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);


protected:
    std::string metric_;
    bool metricIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string filter_;
    bool filterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MetricItem_H_
