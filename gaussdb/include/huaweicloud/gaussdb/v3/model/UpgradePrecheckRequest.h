
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradePrecheckRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradePrecheckRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/PreCheckForUpgradeDatabasesSingleInstance.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  实例升级预检查的请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradePrecheckRequest
    : public ModelBase
{
public:
    UpgradePrecheckRequest();
    virtual ~UpgradePrecheckRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradePrecheckRequest members

    /// <summary>
    /// **参数解释**：  升级预检查实例信息。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<PreCheckForUpgradeDatabasesSingleInstance>& getDatabasesInstanceInfos();
    bool databasesInstanceInfosIsSet() const;
    void unsetdatabasesInstanceInfos();
    void setDatabasesInstanceInfos(const std::vector<PreCheckForUpgradeDatabasesSingleInstance>& value);


protected:
    std::vector<PreCheckForUpgradeDatabasesSingleInstance> databasesInstanceInfos_;
    bool databasesInstanceInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradePrecheckRequest_H_
