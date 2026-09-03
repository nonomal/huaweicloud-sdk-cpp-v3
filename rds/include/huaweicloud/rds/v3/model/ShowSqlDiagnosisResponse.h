
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SqlDiagnosisResult.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSqlDiagnosisResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSqlDiagnosisResponse();
    virtual ~ShowSqlDiagnosisResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSqlDiagnosisResponse members

    /// <summary>
    /// **参数解释**：  sql信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<SqlDiagnosisResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<SqlDiagnosisResult>& value);

    /// <summary>
    /// **参数解释**：  总数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SqlDiagnosisResult> results_;
    bool resultsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisResponse_H_
