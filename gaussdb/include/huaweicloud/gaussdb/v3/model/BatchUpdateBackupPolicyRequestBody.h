
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlBackupPolicyInfo.h>
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
/// 批量设置同区域备份策略请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchUpdateBackupPolicyRequestBody
    : public ModelBase
{
public:
    BatchUpdateBackupPolicyRequestBody();
    virtual ~BatchUpdateBackupPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateBackupPolicyRequestBody members

    /// <summary>
    /// **参数解释**：  需要设置备份策略的实例ID列表。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  列表数量小于等于50。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupPolicyInfo getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const MysqlBackupPolicyInfo& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    MysqlBackupPolicyInfo backupPolicy_;
    bool backupPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequestBody_H_
