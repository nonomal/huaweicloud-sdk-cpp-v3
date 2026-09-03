
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 磁盘容量趋势诊断请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateDiskSpaceDiagnosisRequestBody
    : public ModelBase
{
public:
    CreateDiskSpaceDiagnosisRequestBody();
    virtual ~CreateDiskSpaceDiagnosisRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDiskSpaceDiagnosisRequestBody members

    /// <summary>
    /// **参数解释**：  开始日期，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。  **约束限制**：  开始日期范围需要在24小时内。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  结束日期，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。  **约束限制**：  开始日期范围需要在24小时内。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisRequestBody_H_
