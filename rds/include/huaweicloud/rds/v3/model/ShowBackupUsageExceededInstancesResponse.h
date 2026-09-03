
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageExceededInstancesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageExceededInstancesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ExceededInstanceInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupUsageExceededInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupUsageExceededInstancesResponse();
    virtual ~ShowBackupUsageExceededInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupUsageExceededInstancesResponse members

    /// <summary>
    /// **参数解释**：  超阈值实例列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<ExceededInstanceInfo>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ExceededInstanceInfo>& value);

    /// <summary>
    /// **参数解释**：  超阈值实例总数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ExceededInstanceInfo> instances_;
    bool instancesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageExceededInstancesResponse_H_
