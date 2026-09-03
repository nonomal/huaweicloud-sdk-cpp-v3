
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKernelUpgradeCheckResultResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKernelUpgradeCheckResultResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/UpgradeDatabasePrecheckResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowKernelUpgradeCheckResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKernelUpgradeCheckResultResponse();
    virtual ~ShowKernelUpgradeCheckResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKernelUpgradeCheckResultResponse members

    /// <summary>
    /// **参数解释**：  预检查结果。  **取值范围**：  - true：成功。 - false：失败。
    /// </summary>

    std::string getUpgradePrecheckResult() const;
    bool upgradePrecheckResultIsSet() const;
    void unsetupgradePrecheckResult();
    void setUpgradePrecheckResult(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查完成时间。  **取值范围**：  格式为UNIX时间戳，单位是毫秒，时区为UTC标准时区。
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);

    /// <summary>
    /// **参数解释**：  实例预检查详情。
    /// </summary>

    std::vector<UpgradeDatabasePrecheckResult>& getUpgradePrecheckDetail();
    bool upgradePrecheckDetailIsSet() const;
    void unsetupgradePrecheckDetail();
    void setUpgradePrecheckDetail(const std::vector<UpgradeDatabasePrecheckResult>& value);


protected:
    std::string upgradePrecheckResult_;
    bool upgradePrecheckResultIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;
    std::vector<UpgradeDatabasePrecheckResult> upgradePrecheckDetail_;
    bool upgradePrecheckDetailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKernelUpgradeCheckResultResponse_H_
