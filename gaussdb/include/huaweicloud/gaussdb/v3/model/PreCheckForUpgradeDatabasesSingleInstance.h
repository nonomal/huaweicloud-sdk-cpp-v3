
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PreCheckForUpgradeDatabasesSingleInstance_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PreCheckForUpgradeDatabasesSingleInstance_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  升级预检查实例信息。  **取值范围**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  PreCheckForUpgradeDatabasesSingleInstance
    : public ModelBase
{
public:
    PreCheckForUpgradeDatabasesSingleInstance();
    virtual ~PreCheckForUpgradeDatabasesSingleInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreCheckForUpgradeDatabasesSingleInstance members

    /// <summary>
    /// **参数解释**：  实例当前的内核版本。可通过调用[查询内核版本信息](https://support.huaweicloud.com/api-taurusdb/ShowInstanceDatabaseVersion.html)接口获取。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PreCheckForUpgradeDatabasesSingleInstance_H_
