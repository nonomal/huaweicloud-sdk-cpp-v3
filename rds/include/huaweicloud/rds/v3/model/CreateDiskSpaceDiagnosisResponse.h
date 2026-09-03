
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateDiskSpaceDiagnosisResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDiskSpaceDiagnosisResponse();
    virtual ~CreateDiskSpaceDiagnosisResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDiskSpaceDiagnosisResponse members

    /// <summary>
    /// **参数解释**：   下发结果。  **约束限制**：   不涉及。  **取值范围**：  - success 代表后台开始诊断。  **默认取值**：   不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDiskSpaceDiagnosisResponse_H_
