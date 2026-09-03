
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ExceededInstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ExceededInstanceInfo_H_


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
/// 超阈值实例信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ExceededInstanceInfo
    : public ModelBase
{
public:
    ExceededInstanceInfo();
    virtual ~ExceededInstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExceededInstanceInfo members

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  日志备份空间使用量，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getObsUsageGb() const;
    bool obsUsageGbIsSet() const;
    void unsetobsUsageGb();
    void setObsUsageGb(double value);

    /// <summary>
    /// **参数解释**：  日志备份免费备份空间额度，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getObsFreeBackupSpaceGb() const;
    bool obsFreeBackupSpaceGbIsSet() const;
    void unsetobsFreeBackupSpaceGb();
    void setObsFreeBackupSpaceGb(double value);

    /// <summary>
    /// **参数解释**：  快照备份空间使用量，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getSnapshotUsageGb() const;
    bool snapshotUsageGbIsSet() const;
    void unsetsnapshotUsageGb();
    void setSnapshotUsageGb(double value);

    /// <summary>
    /// **参数解释**：  快照免费备份空间额度，单位GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getSnapshotFreeBackupSpaceGb() const;
    bool snapshotFreeBackupSpaceGbIsSet() const;
    void unsetsnapshotFreeBackupSpaceGb();
    void setSnapshotFreeBackupSpaceGb(double value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    double obsUsageGb_;
    bool obsUsageGbIsSet_;
    double obsFreeBackupSpaceGb_;
    bool obsFreeBackupSpaceGbIsSet_;
    double snapshotUsageGb_;
    bool snapshotUsageGbIsSet_;
    double snapshotFreeBackupSpaceGb_;
    bool snapshotFreeBackupSpaceGbIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ExceededInstanceInfo_H_
