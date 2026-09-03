
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageAlarmConfigResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageAlarmConfigResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupUsageAlarmConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupUsageAlarmConfigResponse();
    virtual ~ShowBackupUsageAlarmConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupUsageAlarmConfigResponse members

    /// <summary>
    /// **参数解释**：  告警开关。  **约束限制**：  不涉及。  **取值范围**：  - ON - OFF  **默认取值**：  OFF。
    /// </summary>

    std::string getAlarmEnabled() const;
    bool alarmEnabledIsSet() const;
    void unsetalarmEnabled();
    void setAlarmEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：  阈值百分比，占免费备份空间大小的百分比。  **约束限制**：  不涉及。  **取值范围**：  1-100。  **默认取值**：  90。
    /// </summary>

    int32_t getThresholdPercent() const;
    bool thresholdPercentIsSet() const;
    void unsetthresholdPercent();
    void setThresholdPercent(int32_t value);

    /// <summary>
    /// **参数解释**：  增量百分比，占免费备份空间大小的百分比。  **约束限制**：  不涉及。  **取值范围**：  1-100。  **默认取值**：  10。
    /// </summary>

    int32_t getIncrementPercent() const;
    bool incrementPercentIsSet() const;
    void unsetincrementPercent();
    void setIncrementPercent(int32_t value);


protected:
    std::string alarmEnabled_;
    bool alarmEnabledIsSet_;
    int32_t thresholdPercent_;
    bool thresholdPercentIsSet_;
    int32_t incrementPercent_;
    bool incrementPercentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageAlarmConfigResponse_H_
