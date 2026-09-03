
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateBinlogMergeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateBinlogMergeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并Binlog请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateBinlogMergeRequestBody
    : public ModelBase
{
public:
    CreateBinlogMergeRequestBody();
    virtual ~CreateBinlogMergeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBinlogMergeRequestBody members

    /// <summary>
    /// **参数解释**：  查询开始时间，格式为Unix时间戳，单位为毫秒。  **约束限制**：  开始时间需早于结束时间。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  查询结束时间，格式为Unix时间戳，单位为毫秒。  **约束限制**：  结束时间需晚于开始时间。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateBinlogMergeRequestBody_H_
