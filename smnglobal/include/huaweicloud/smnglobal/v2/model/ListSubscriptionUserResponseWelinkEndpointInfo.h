
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseWelinkEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseWelinkEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  ListSubscriptionUserResponseWelinkEndpointInfo
    : public ModelBase
{
public:
    ListSubscriptionUserResponseWelinkEndpointInfo();
    virtual ~ListSubscriptionUserResponseWelinkEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionUserResponseWelinkEndpointInfo members

    /// <summary>
    /// 终端地址。
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


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string clientId_;
    bool clientIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseWelinkEndpointInfo_H_
