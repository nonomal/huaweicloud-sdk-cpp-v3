
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ExecuteWindow_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ExecuteWindow_H_


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
/// **参数解释**：  事件执行窗口。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ExecuteWindow
    : public ModelBase
{
public:
    ExecuteWindow();
    virtual ~ExecuteWindow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteWindow members

    /// <summary>
    /// **参数解释**：  计划执行日期，格式为：“yyyy-MM-dd”。  **取值范围**：  不涉及。
    /// </summary>

    std::string getPlannedExecutionDay() const;
    bool plannedExecutionDayIsSet() const;
    void unsetplannedExecutionDay();
    void setPlannedExecutionDay(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件执行窗口开始时间，格式为 \&quot;hh:mm\&quot;。  **取值范围**：  不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件执行窗口结束时间，格式为 \&quot;hh:mm\&quot;。  **取值范围**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string plannedExecutionDay_;
    bool plannedExecutionDayIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ExecuteWindow_H_
