
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestFeishuEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestFeishuEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestFeishuEndpointInfo
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestFeishuEndpointInfo();
    virtual ~CreateSubscriptionUserRequestFeishuEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestFeishuEndpointInfo members

    /// <summary>
    /// 终端地址。必须是一个飞书群机器人的地址。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// feishu协议订阅用户的关键字。feishu协议订阅用户必须指定keyword和sign_secret二者之一。当用户在飞书机器人端添加关键字校验的安全策略时，这里的关键字必须是飞书端所填写的关键字之一。
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// feishu协议订阅用户的加签密钥字段。feishu协议订阅用户必须指定keyword和sign_secret二者之一。当用户在飞书机器人端添加关键字校验的安全策略时，这里的关键字必须是飞书端所填写的关键字之一。
    /// </summary>

    std::string getSignSecret() const;
    bool signSecretIsSet() const;
    void unsetsignSecret();
    void setSignSecret(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string keyword_;
    bool keywordIsSet_;
    std::string signSecret_;
    bool signSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestFeishuEndpointInfo_H_
