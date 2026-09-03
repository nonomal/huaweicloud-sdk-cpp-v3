
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtensionResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtensionResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  SubscriptionExtensionResponse
    : public ModelBase
{
public:
    SubscriptionExtensionResponse();
    virtual ~SubscriptionExtensionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionExtensionResponse members

    /// <summary>
    /// 是否启用验证码发送确认短信，默认为false。
    /// </summary>

    bool isVerificationCodeEnabled() const;
    bool verificationCodeEnabledIsSet() const;
    void unsetverificationCodeEnabled();
    void setVerificationCodeEnabled(bool value);


protected:
    bool verificationCodeEnabled_;
    bool verificationCodeEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtensionResponse_H_
