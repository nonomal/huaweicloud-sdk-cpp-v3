
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineRiskDesc_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineRiskDesc_H_


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
/// 引擎风险描述
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  EngineRiskDesc
    : public ModelBase
{
public:
    EngineRiskDesc();
    virtual ~EngineRiskDesc();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EngineRiskDesc members

    /// <summary>
    /// **参数解释**：  代理节点ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  引擎名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// **参数解释**：  引擎版本。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：  风险等级（该字段当前无效，默认为1）。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释**：  建议。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSuggest() const;
    bool suggestIsSet() const;
    void unsetsuggest();
    void setSuggest(const std::string& value);

    /// <summary>
    /// **参数解释**：  影响。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInfluence() const;
    bool influenceIsSet() const;
    void unsetinfluence();
    void setInfluence(const std::string& value);

    /// <summary>
    /// **参数解释**：  指导。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getGuidance() const;
    bool guidanceIsSet() const;
    void unsetguidance();
    void setGuidance(const std::string& value);

    /// <summary>
    /// **参数解释**：  服务影响时长说明。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getServiceImpactDuration() const;
    bool serviceImpactDurationIsSet() const;
    void unsetserviceImpactDuration();
    void setServiceImpactDuration(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级时长说明。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getUpgradeDuration() const;
    bool upgradeDurationIsSet() const;
    void unsetupgradeDuration();
    void setUpgradeDuration(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string suggest_;
    bool suggestIsSet_;
    std::string influence_;
    bool influenceIsSet_;
    std::string guidance_;
    bool guidanceIsSet_;
    std::string serviceImpactDuration_;
    bool serviceImpactDurationIsSet_;
    std::string upgradeDuration_;
    bool upgradeDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineRiskDesc_H_
