
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesRequestBody_H_


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
/// 获取已恢复库表信息请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRestoreTablesRequestBody
    : public ModelBase
{
public:
    ShowRestoreTablesRequestBody();
    virtual ~ShowRestoreTablesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRestoreTablesRequestBody members

    /// <summary>
    /// **参数解释**：  任务流ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称。  **约束限制**：  不涉及。  **取值范围**：  - RestoreTableMysql - RestoreDatabaseMysql  **默认取值**：  不涉及。
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesRequestBody_H_
