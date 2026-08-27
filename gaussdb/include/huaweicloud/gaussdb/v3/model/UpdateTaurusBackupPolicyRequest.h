
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusBackupPolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusBackupPolicyRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/Policy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改同区域备份策略请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateTaurusBackupPolicyRequest
    : public ModelBase
{
public:
    UpdateTaurusBackupPolicyRequest();
    virtual ~UpdateTaurusBackupPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTaurusBackupPolicyRequest members

    /// <summary>
    /// **参数解释**：  备份时间段开始时间。  **约束限制**：  不涉及。  **取值范围**：  格式必须为hh:mm且有效，h为0~23的数字，m为0~59的数字，当前时间指UTC时间。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份时间段结束时间。  **约束限制**：  end_time必须大于begin_time。  **取值范围**：  格式必须为hh:mm且有效，h为0~23的数字，m为0~59的数字，当前时间指UTC时间。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  一级备份保留数量。  **约束限制**：  当一级备份开关开启时，该参数必传。反之，不能传。  **取值范围**：  - 0：不保留一级备份。 - 1：一级备份保留数量，单位为个。  **默认取值**：  0。
    /// </summary>

    int32_t getRetentionNumBackupLevel1() const;
    bool retentionNumBackupLevel1IsSet() const;
    void unsetretentionNumBackupLevel1();
    void setRetentionNumBackupLevel1(int32_t value);

    /// <summary>
    /// **参数解释**：  备份策略集，包含备份周期、保留天数和策略类型等配置信息，详见Policy数据结构。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<Policy>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<Policy>& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t retentionNumBackupLevel1_;
    bool retentionNumBackupLevel1IsSet_;
    std::vector<Policy> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusBackupPolicyRequest_H_
