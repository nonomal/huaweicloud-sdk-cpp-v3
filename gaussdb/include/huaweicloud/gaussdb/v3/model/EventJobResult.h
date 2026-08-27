
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventJobResult_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventJobResult_H_


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
/// **参数解释**：  设置事件执行策略响应结果。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  EventJobResult
    : public ModelBase
{
public:
    EventJobResult();
    virtual ~EventJobResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventJobResult members

    /// <summary>
    /// **参数解释**：  事件ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为ev07，长度为36个字符。
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为in07，长度为36个字符。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  创建数据同步的任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否下发成功。  **取值范围**：  - true：下发成功。 - false：下发失败。
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);

    /// <summary>
    /// **参数解释**：  错误码。  **取值范围**：  不涉及。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误消息。  **取值范围**：  不涉及。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string eventId_;
    bool eventIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    bool success_;
    bool successIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventJobResult_H_
