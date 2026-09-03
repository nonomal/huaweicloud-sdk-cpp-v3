
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobLogsFromAomResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingJobLogsFromAomResponse();
    virtual ~ShowTrainingJobLogsFromAomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobLogsFromAomResponse members

    /// <summary>
    /// **参数解释**：返回日志的起始行号。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getStartLine() const;
    bool startLineIsSet() const;
    void unsetstartLine();
    void setStartLine(const std::string& value);

    /// <summary>
    /// **参数解释**：返回日志的结束行号。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getEndLine() const;
    bool endLineIsSet() const;
    void unsetendLine();
    void setEndLine(const std::string& value);

    /// <summary>
    /// **参数解释**：返回的日志行数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getLines() const;
    bool linesIsSet() const;
    void unsetlines();
    void setLines(int32_t value);

    /// <summary>
    /// **参数解释**：日志内容。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string startLine_;
    bool startLineIsSet_;
    std::string endLine_;
    bool endLineIsSet_;
    int32_t lines_;
    bool linesIsSet_;
    std::string content_;
    bool contentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsFromAomResponse_H_
