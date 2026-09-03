
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchMySqlProxySlowLogResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchMySqlProxySlowLogResponse();
    virtual ~SwitchMySqlProxySlowLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchMySqlProxySlowLogResponse members

    /// <summary>
    /// **参数解释**：  下发请求的链路ID。该返回值不支持在任务中心查询相关任务，请使用状态码判断是否请求成功。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogResponse_H_
