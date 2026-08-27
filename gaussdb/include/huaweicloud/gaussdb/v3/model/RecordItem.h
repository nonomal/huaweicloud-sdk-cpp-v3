
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecordItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecordItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/OnlineDDLTaskContentItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  单个无锁变更任务信息。  **取值范围**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RecordItem
    : public ModelBase
{
public:
    RecordItem();
    virtual ~RecordItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordItem members

    /// <summary>
    /// **参数解释**：  无锁变更任务记录标识。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更任务详细内容。
    /// </summary>

    std::vector<OnlineDDLTaskContentItem>& getTaskContent();
    bool taskContentIsSet() const;
    void unsettaskContent();
    void setTaskContent(const std::vector<OnlineDDLTaskContentItem>& value);

    /// <summary>
    /// **参数解释**：  无锁变更任务创建时间，13位毫秒时间戳。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// **参数解释**：  无锁变更任务结束时间，13位毫秒时间戳。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getEndedAt() const;
    bool endedAtIsSet() const;
    void unsetendedAt();
    void setEndedAt(int64_t value);

    /// <summary>
    /// **参数解释**：  无锁变更任务执行状态。  **取值范围**：   - checking：表示正在执行预检查步骤。   - check successful： 表示预检查步骤执行成功。   - check failed： 表示预检查步骤执行失败。   - altering： 表示正在任务正在执行变更步骤。   - alter successful： 表示变更步骤执行成功。   - alter failed： 表示变更步骤执行失败。   - stopping：表示正在执行停止任务步骤。   - stop successful： 表示执行停止步骤成功。   - stop failed： 表示执行停止步骤失败。   - cleaning： 表示正在执行清理临时表步骤。   - clean successful： 表示清理临时表步骤执行成功。   - clean failed： 表示清理临时表步骤执行失败。
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  表示数据库内核层面无锁变更任务运行阶段。  **取值范围**：   - 0：表示无锁变更任务未开始。  - 1：表示无锁变更任务已完成资源初始化。  - 2：表示无锁变更任务正在运行。  - 3：表示无锁变更任务已完成。
    /// </summary>

    int32_t getAlterStage() const;
    bool alterStageIsSet() const;
    void unsetalterStage();
    void setAlterStage(int32_t value);

    /// <summary>
    /// **参数解释**：  无锁变更任务百分比进度，1位小数精度。  **取值范围**：  0.0-100.0。
    /// </summary>

    float getPercentage() const;
    bool percentageIsSet() const;
    void unsetpercentage();
    void setPercentage(float value);

    /// <summary>
    /// **参数解释**：  无锁变更任务失败原因，任务执行失败时有返回值。  **取值范围**： 不涉及。
    /// </summary>

    std::string getErrorReason() const;
    bool errorReasonIsSet() const;
    void unseterrorReason();
    void setErrorReason(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更任务临时表名称，关闭临时表自动清理时有返回值。  **取值范围**： 不涉及。
    /// </summary>

    std::string getTempTableName() const;
    bool tempTableNameIsSet() const;
    void unsettempTableName();
    void setTempTableName(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::vector<OnlineDDLTaskContentItem> taskContent_;
    bool taskContentIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    int64_t endedAt_;
    bool endedAtIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    int32_t alterStage_;
    bool alterStageIsSet_;
    float percentage_;
    bool percentageIsSet_;
    std::string errorReason_;
    bool errorReasonIsSet_;
    std::string tempTableName_;
    bool tempTableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecordItem_H_
