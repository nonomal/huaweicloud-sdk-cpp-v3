
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteOnlineDDLTaskRecordRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteOnlineDDLTaskRecordRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  创建无锁变更任务请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteOnlineDDLTaskRecordRequestV3
    : public ModelBase
{
public:
    DeleteOnlineDDLTaskRecordRequestV3();
    virtual ~DeleteOnlineDDLTaskRecordRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteOnlineDDLTaskRecordRequestV3 members

    /// <summary>
    /// **参数解释**：   要删除的实例无锁变更任务记录标识。  获取方法请参见[查询无锁变更任务记录列表](https://support.huaweicloud.com/api-taurusdb/ListOnlineDdlTaskRecords.html)。  **约束限制**： 不涉及。   **取值范围**：  不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteOnlineDDLTaskRecordRequestV3_H_
