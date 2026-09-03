
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestWelinkEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestWelinkEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestWelinkEndpointInfo
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestWelinkEndpointInfo();
    virtual ~CreateSubscriptionUserRequestWelinkEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestWelinkEndpointInfo members

    /// <summary>
    /// 终端地址。必须是一个welink的群号。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// welink协议订阅用户的client_id，从Welink方获取。
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// welink协议订阅用户的client_secret，从Welink方获取。
    /// </summary>

    std::string getClientSecret() const;
    bool clientSecretIsSet() const;
    void unsetclientSecret();
    void setClientSecret(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string clientId_;
    bool clientIdIsSet_;
    std::string clientSecret_;
    bool clientSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestWelinkEndpointInfo_H_
