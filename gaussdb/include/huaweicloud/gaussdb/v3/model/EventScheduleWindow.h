
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventScheduleWindow_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventScheduleWindow_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  执行时间窗。  **约束限制**：  当operation_type为reservation时，该字段必传。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  EventScheduleWindow
    : public ModelBase
{
public:
    EventScheduleWindow();
    virtual ~EventScheduleWindow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventScheduleWindow members

    /// <summary>
    /// **参数解释**：  执行日期。  **约束限制**：  格式为“yyyy-mm-dd”。  **取值范围**：  大于或等于当前日期。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPlannedDay() const;
    bool plannedDayIsSet() const;
    void unsetplannedDay();
    void setPlannedDay(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件执行窗口开始时间。  **约束限制**：  格式为 “hh:mm”。当end_time有值时，该字段必传。  **取值范围**：  不涉及。  **默认取值**：  “01:00”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件执行窗口结束时间。  **约束限制**：  格式为 \&quot;hh:mm\&quot;。当start_time有值时，该字段必传。  **取值范围**：  不涉及。  **默认取值**：  “03:00”。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string plannedDay_;
    bool plannedDayIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventScheduleWindow_H_
