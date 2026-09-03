
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestoreTablesInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRestoreTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRestoreTablesResponse();
    virtual ~ShowRestoreTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRestoreTablesResponse members

    /// <summary>
    /// **参数解释**：  已恢复库表信息列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<RestoreTablesInfo>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<RestoreTablesInfo>& value);


protected:
    std::vector<RestoreTablesInfo> dataList_;
    bool dataListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestoreTablesResponse_H_
