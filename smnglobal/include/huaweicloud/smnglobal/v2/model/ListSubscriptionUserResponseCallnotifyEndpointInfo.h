
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseCallnotifyEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseCallnotifyEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  ListSubscriptionUserResponseCallnotifyEndpointInfo
    : public ModelBase
{
public:
    ListSubscriptionUserResponseCallnotifyEndpointInfo();
    virtual ~ListSubscriptionUserResponseCallnotifyEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionUserResponseCallnotifyEndpointInfo members

    /// <summary>
    /// 终端地址。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 是否启用验证码发送确认短信，默认为false。
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

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseCallnotifyEndpointInfo_H_
