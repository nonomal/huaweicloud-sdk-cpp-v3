
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDiskSpaceDiagnosisResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDiskSpaceDiagnosisResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DiskSpaceDiagnosisResult.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowDiskSpaceDiagnosisResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDiskSpaceDiagnosisResponse();
    virtual ~ShowDiskSpaceDiagnosisResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDiskSpaceDiagnosisResponse members

    /// <summary>
    /// **参数解释**：  诊断结果执行状态。  **约束限制**：  不涉及。  **取值范围**：  -FINISHED (已完成) -RUNNING (诊断中) -UNEXECUTED (未执行诊断)  **默认取值**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  各维度诊断信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<DiskSpaceDiagnosisResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<DiskSpaceDiagnosisResult>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<DiskSpaceDiagnosisResult> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDiskSpaceDiagnosisResponse_H_
