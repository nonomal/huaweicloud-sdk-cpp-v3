
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLTaskRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLTaskRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StartOnlineTaskContentItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  开启无锁变更任务请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StartOnlineDDLTaskRequestV3
    : public ModelBase
{
public:
    StartOnlineDDLTaskRequestV3();
    virtual ~StartOnlineDDLTaskRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartOnlineDDLTaskRequestV3 members

    /// <summary>
    /// **参数解释**：  是否开启自动清理临时表。  **约束限制**：  不涉及。  **取值范围**： - true：开启自动清理临时表。 - false：关闭自动清理临时表。  **默认取值**：  false。
    /// </summary>

    bool isAutoClear() const;
    bool autoClearIsSet() const;
    void unsetautoClear();
    void setAutoClear(bool value);

    /// <summary>
    /// **参数解释**：  无锁变更任务详细内容。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<StartOnlineTaskContentItem>& getTaskContent();
    bool taskContentIsSet() const;
    void unsettaskContent();
    void setTaskContent(const std::vector<StartOnlineTaskContentItem>& value);


protected:
    bool autoClear_;
    bool autoClearIsSet_;
    std::vector<StartOnlineTaskContentItem> taskContent_;
    bool taskContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLTaskRequestV3_H_
