
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScheduleEventInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceScheduleEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceScheduleEventsResponse();
    virtual ~ShowInstanceScheduleEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceScheduleEventsResponse members

    /// <summary>
    /// **参数解释**：  事件总数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  待授权的事件数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getInquiringCount() const;
    bool inquiringCountIsSet() const;
    void unsetinquiringCount();
    void setInquiringCount(int32_t value);

    /// <summary>
    /// **参数解释**：  待执行的事件数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getScheduleCount() const;
    bool scheduleCountIsSet() const;
    void unsetscheduleCount();
    void setScheduleCount(int32_t value);

    /// <summary>
    /// **参数解释**：  正在执行的事件数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getExecutingCount() const;
    bool executingCountIsSet() const;
    void unsetexecutingCount();
    void setExecutingCount(int32_t value);

    /// <summary>
    /// **参数解释**：  执行失败的事件数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getFailedCount() const;
    bool failedCountIsSet() const;
    void unsetfailedCount();
    void setFailedCount(int32_t value);

    /// <summary>
    /// **参数解释**：  事件详情列表，包含事件ID、事件类别、事件状态、事件级别、实例信息、执行时间等详细信息
    /// </summary>

    std::vector<ScheduleEventInfo>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<ScheduleEventInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t inquiringCount_;
    bool inquiringCountIsSet_;
    int32_t scheduleCount_;
    bool scheduleCountIsSet_;
    int32_t executingCount_;
    bool executingCountIsSet_;
    int32_t failedCount_;
    bool failedCountIsSet_;
    std::vector<ScheduleEventInfo> events_;
    bool eventsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsResponse_H_
