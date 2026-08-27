
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicyInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicyInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/PolicyInfo.h>
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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlBackupPolicyInfo
    : public ModelBase
{
public:
    MysqlBackupPolicyInfo();
    virtual ~MysqlBackupPolicyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlBackupPolicyInfo members

    /// <summary>
    /// **参数解释**：  备份时间段开始时间。  **约束限制**：  不涉及。  **取值范围**：  非空，格式必须为hh:mm且有效，当前时间指UTC时间。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份时间段结束时间。  **约束限制**：  end_time必须大于begin_time。  **取值范围**：  非空，格式必须为hh:mm且有效，当前时间指UTC时间。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  一级备份保留数量。  **约束限制**：  当一级备份开关开启时，该参数必传。反之，不能传。  **取值范围**：  - 0：不保留一级备份。 - 1：保留1个一级备份。  **默认取值**：  0。
    /// </summary>

    int32_t getRetentionNumBackupLevel1() const;
    bool retentionNumBackupLevel1IsSet() const;
    void unsetretentionNumBackupLevel1();
    void setRetentionNumBackupLevel1(int32_t value);

    /// <summary>
    /// **参数解释**：  备份策略集。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<PolicyInfo>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<PolicyInfo>& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t retentionNumBackupLevel1_;
    bool retentionNumBackupLevel1IsSet_;
    std::vector<PolicyInfo> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicyInfo_H_
