
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleEventInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleEventInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/EventEntity.h>
#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/ExecuteWindow.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  事件详情。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScheduleEventInfo
    : public ModelBase
{
public:
    ScheduleEventInfo();
    virtual ~ScheduleEventInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleEventInfo members

    /// <summary>
    /// **参数解释**：  事件ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为ev07，长度为36个字符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件类别。  **取值范围**：  Maintenance：计划内运维事件。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件影响。  **取值范围**：  不涉及。
    /// </summary>

    std::string getImpact() const;
    bool impactIsSet() const;
    void unsetimpact();
    void setImpact(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件状态。  **取值范围**：    - inquiring：待授权。   - scheduled：待执行。   - executing：执行中。   - completed：执行完成。   - canceled：事件关闭。   - failed：执行失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件原因。  **取值范围**：  不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件级别。  **取值范围**：  - critical：紧急。 - major：重要。 - minor：一般。 - info：提示。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为in07，长度为36个字符。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名称。  **取值范围**：  最小为4个字符，最大为64个字符且不超过64个字节（注意：一个中文字符占用3个字节），必须以字母或中文开头，区分大小写，可以包含字母、数字、中划线、下划线或中文，不能包含其他特殊字符。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  引擎名称。  **取值范围**：  taurus：TaurusDB企业版。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**：  创建时间。UTC，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  **取值范围**：  不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  更新时间。UTC，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  **取值范围**：  不涉及。
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件类型。  **取值范围**：  - system.lifecycle.rebuild_node：备机重建事件。 - system.lifecycle.db_upgrade：数据库内核小版本升级事件。 - system.scheduled_event.high_cpu_memory：实例CPU或内存高负载事件，需要变更实例规格。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  扩展信息。  **取值范围**：  不涉及。
    /// </summary>

    std::string getExtendInfo() const;
    bool extendInfoIsSet() const;
    void unsetextendInfo();
    void setExtendInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件的执行时间。UTC，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  **取值范围**：  不涉及。
    /// </summary>

    std::string getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteWindow getExecutionTimeWindow() const;
    bool executionTimeWindowIsSet() const;
    void unsetexecutionTimeWindow();
    void setExecutionTimeWindow(const ExecuteWindow& value);

    /// <summary>
    /// **参数解释**：  事件对象信息列表，包含事件对象ID和事件对象的执行状态
    /// </summary>

    std::vector<EventEntity>& getEventEntities();
    bool eventEntitiesIsSet() const;
    void unseteventEntities();
    void setEventEntities(const std::vector<EventEntity>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string impact_;
    bool impactIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string extendInfo_;
    bool extendInfoIsSet_;
    std::string executeTime_;
    bool executeTimeIsSet_;
    ExecuteWindow executionTimeWindow_;
    bool executionTimeWindowIsSet_;
    std::vector<EventEntity> eventEntities_;
    bool eventEntitiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleEventInfo_H_
