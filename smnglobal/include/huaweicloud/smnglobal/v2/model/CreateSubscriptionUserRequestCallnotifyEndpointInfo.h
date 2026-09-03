
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestCallnotifyEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestCallnotifyEndpointInfo_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestCallnotifyEndpointInfo
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestCallnotifyEndpointInfo();
    virtual ~CreateSubscriptionUserRequestCallnotifyEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestCallnotifyEndpointInfo members

    /// <summary>
    /// 终端地址。必须是一个电话号码。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 是否启用验证码，默认为false。当protocol值为sms或callnotify，且该字段值设置为true时，发送订阅确认短信为验证码格式；该字段为false或者不存在时，发送的订阅确认短信为超链接格式。当protocol值为其他协议时，该字段不生效
    /// </summary>

    bool isVerificationCodeEnabled() const;
    bool verificationCodeEnabledIsSet() const;
    void unsetverificationCodeEnabled();
    void setVerificationCodeEnabled(bool value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    bool verificationCodeEnabled_;
    bool verificationCodeEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestCallnotifyEndpointInfo_H_
