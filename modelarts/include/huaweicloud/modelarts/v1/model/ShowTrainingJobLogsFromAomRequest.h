
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobLogsFromAomRequest
    : public ModelBase
{
public:
    ShowTrainingJobLogsFromAomRequest();
    virtual ~ShowTrainingJobLogsFromAomRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobLogsFromAomRequest members

    /// <summary>
    /// 训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);

    /// <summary>
    /// 训练作业的任务名称。可从训练作业详情中的status.tasks字段中获取。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：日志查询的基线行号，用于分页查询。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及（从最新日志开始查询）。
    /// </summary>

    std::string getBaseLine() const;
    bool baseLineIsSet() const;
    void unsetbaseLine();
    void setBaseLine(const std::string& value);

    /// <summary>
    /// **参数解释**：返回的日志行数。 **约束限制**：不涉及。 **取值范围**：1 ~ 500。 **默认取值**：50。
    /// </summary>

    int32_t getLines() const;
    bool linesIsSet() const;
    void unsetlines();
    void setLines(int32_t value);

    /// <summary>
    /// **参数解释**：日志排序方式。 **约束限制**：不涉及。 **取值范围**：枚举值如下： - asc：升序（从旧到新） - desc：降序（从新到旧） **默认取值**：desc。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string baseLine_;
    bool baseLineIsSet_;
    int32_t lines_;
    bool linesIsSet_;
    std::string order_;
    bool orderIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTrainingJobLogsFromAomRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTrainingJobLogsFromAomRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomRequest_H_
