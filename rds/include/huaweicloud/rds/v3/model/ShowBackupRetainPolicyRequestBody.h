
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询备份保留策略的请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupRetainPolicyRequestBody
    : public ModelBase
{
public:
    ShowBackupRetainPolicyRequestBody();
    virtual ~ShowBackupRetainPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupRetainPolicyRequestBody members

    /// <summary>
    /// **参数解释**：  实例ID列表，实例ID是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  实例ID只能由英文字母、数字组成，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getInstanceids();
    bool instanceidsIsSet() const;
    void unsetinstanceids();
    void setInstanceids(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**  索引位置，偏移量。  **约束限制**  从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。  **取值范围**  大于等于0的整数。  **默认取值**  0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**  查询记录数。  **约束限制**  不能为负数。  **取值范围**  最小值为1，最大值为100。  **默认取值**  10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  实例状态  **约束限制**：  不涉及。  **取值范围**：  normal、deleted  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// **参数解释**  查询开始时间。时间指实例的删除时间。  **约束限制**  “begin_time”有值时，“end_time”必选。 “begin_time”有值时，查询实例状态为已删除的实例。  **取值范围**  格式为“yyyy-mm-ddThh:mm:ss±HH:mm”。  其中，T指某个时间的开始；±HH:mm指时区偏移量，例如北京时间偏移显示为+08:00。  **默认取值**  不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**  查询结束时间。时间指实例的删除时间  **约束限制**  “end_time”有值时，“begin_time”必选。 “end_time”有值时，查询实例状态为已删除的实例。  **取值范围**  格式为“yyyy-mm-ddThh:mm:ss±HH:mm”，且大于查询开始时间。  其中，T指某个时间的开始；±HH:mm指时区偏移量，例如北京时间偏移显示为+08:00。  **默认取值**  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::vector<std::string> instanceids_;
    bool instanceidsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupRetainPolicyRequestBody_H_
