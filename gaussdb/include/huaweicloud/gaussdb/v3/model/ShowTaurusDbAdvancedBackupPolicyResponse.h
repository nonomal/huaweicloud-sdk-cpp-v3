
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbAdvancedBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbAdvancedBackupPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/BackupPolicyInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowTaurusDbAdvancedBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaurusDbAdvancedBackupPolicyResponse();
    virtual ~ShowTaurusDbAdvancedBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaurusDbAdvancedBackupPolicyResponse members

    /// <summary>
    /// **参数解释**：  备份时间段开始时间。  **取值范围**：  非空，格式必须为hh:mm且有效，当前时间指UTC时间。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份时间段结束时间。  **取值范围**：  非空，格式必须为hh:mm且有效，当前时间指UTC时间。end_time必须大于begin_time。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  一级备份保留数量。当一级备份开关开启时，返回此参数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getRetentionNumBackupLevel1() const;
    bool retentionNumBackupLevel1IsSet() const;
    void unsetretentionNumBackupLevel1();
    void setRetentionNumBackupLevel1(int32_t value);

    /// <summary>
    /// **参数解释**：  备份策略集。
    /// </summary>

    std::vector<BackupPolicyInfo>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<BackupPolicyInfo>& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t retentionNumBackupLevel1_;
    bool retentionNumBackupLevel1IsSet_;
    std::vector<BackupPolicyInfo> policies_;
    bool policiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbAdvancedBackupPolicyResponse_H_
