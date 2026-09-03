
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyEngineVersionInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyEngineVersionInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/EngineRiskDesc.h>
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
/// 数据库代理节点引擎版本信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyEngineVersionInfo
    : public ModelBase
{
public:
    ProxyEngineVersionInfo();
    virtual ~ProxyEngineVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyEngineVersionInfo members

    /// <summary>
    /// **参数解释**：  当前引擎版本。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getCurrentEngineVersion() const;
    bool currentEngineVersionIsSet() const;
    void unsetcurrentEngineVersion();
    void setCurrentEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标引擎版本。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTargetEngineVersion() const;
    bool targetEngineVersionIsSet() const;
    void unsettargetEngineVersion();
    void setTargetEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否可升级标志。true表示可以升级，false表示不可升级。  **约束限制**：  不涉及。  **取值范围**：  - true - false  **默认取值**：  不涉及。
    /// </summary>

    bool isUpgradeFlag() const;
    bool upgradeFlagIsSet() const;
    void unsetupgradeFlag();
    void setUpgradeFlag(bool value);

    /// <summary>
    /// **参数解释**：  代理节点ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级风险列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<EngineRiskDesc>& getRisks();
    bool risksIsSet() const;
    void unsetrisks();
    void setRisks(const std::vector<EngineRiskDesc>& value);


protected:
    std::string currentEngineVersion_;
    bool currentEngineVersionIsSet_;
    std::string targetEngineVersion_;
    bool targetEngineVersionIsSet_;
    bool upgradeFlag_;
    bool upgradeFlagIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;
    std::vector<EngineRiskDesc> risks_;
    bool risksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyEngineVersionInfo_H_
