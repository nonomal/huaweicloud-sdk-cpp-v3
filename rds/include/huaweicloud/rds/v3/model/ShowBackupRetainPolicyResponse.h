
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupRetainPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupRetainPolicyResponse();
    virtual ~ShowBackupRetainPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupRetainPolicyResponse members

    /// <summary>
    /// **参数解释**：  实例id  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名字  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  引擎类型  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例引擎版本  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例删除时间  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    int64_t getInstanceDeleteTime() const;
    bool instanceDeleteTimeIsSet() const;
    void unsetinstanceDeleteTime();
    void setInstanceDeleteTime(int64_t value);

    /// <summary>
    /// **参数解释**  自动备份保留策略。NONE不保留，LAST保留最后一个，ALL全部保留。  **约束限制**  不涉及  **取值范围**  NONE、LAST、ALL  **默认取值**  不涉及
    /// </summary>

    std::string getAuto() const;
    bool autoIsSet() const;
    void unsetauto();
    void setAuto(const std::string& value);

    /// <summary>
    /// **参数解释**  手动备份保留策略。NONE不保留，LAST保留最后一个，ALL全部保留。  **约束限制**  不涉及  **取值范围**  NONE、LAST、ALL  **默认取值**  不涉及
    /// </summary>

    std::string getManual() const;
    bool manualIsSet() const;
    void unsetmanual();
    void setManual(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    int64_t instanceDeleteTime_;
    bool instanceDeleteTimeIsSet_;
    std::string auto_;
    bool autoIsSet_;
    std::string manual_;
    bool manualIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyResponse_H_
