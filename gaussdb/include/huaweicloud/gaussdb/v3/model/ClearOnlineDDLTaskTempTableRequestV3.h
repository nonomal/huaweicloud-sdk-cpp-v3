
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClearOnlineDDLTaskTempTableRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClearOnlineDDLTaskTempTableRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TaskContentItem.h>
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
/// **参数解释**：  清理实例无锁变更任务临时表请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClearOnlineDDLTaskTempTableRequestV3
    : public ModelBase
{
public:
    ClearOnlineDDLTaskTempTableRequestV3();
    virtual ~ClearOnlineDDLTaskTempTableRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClearOnlineDDLTaskTempTableRequestV3 members

    /// <summary>
    /// **参数解释**：   无锁变更任务唯一标识。  获取方法参见[查询无锁变更任务记录列表](https://support.huaweicloud.com/api-taurusdb/ListOnlineDdlTaskRecords.html)。   **约束限制**：   不涉及。   **取值范围**：   不涉及。  **默认取值**：   不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更任务详细内容，包含目标数据库和临时表名。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<TaskContentItem>& getTaskContent();
    bool taskContentIsSet() const;
    void unsettaskContent();
    void setTaskContent(const std::vector<TaskContentItem>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::vector<TaskContentItem> taskContent_;
    bool taskContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClearOnlineDDLTaskTempTableRequestV3_H_
