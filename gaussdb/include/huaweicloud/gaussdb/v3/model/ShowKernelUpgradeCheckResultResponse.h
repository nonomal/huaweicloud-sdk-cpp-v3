
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKernelUpgradeCheckResultResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKernelUpgradeCheckResultResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
    /// **参数解释**：  预检查任务ID集合。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;

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
