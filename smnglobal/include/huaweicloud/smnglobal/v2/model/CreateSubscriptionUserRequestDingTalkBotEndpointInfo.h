
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestDingTalkBotEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestDingTalkBotEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestDingTalkBotEndpointInfo
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestDingTalkBotEndpointInfo();
    virtual ~CreateSubscriptionUserRequestDingTalkBotEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestDingTalkBotEndpointInfo members

    /// <summary>
    /// 钉钉企业用户的userId。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 个人钉钉appKey字段。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 个人钉钉appSecret字段。
    /// </summary>

    std::string getAppSecret() const;
    bool appSecretIsSet() const;
    void unsetappSecret();
    void setAppSecret(const std::string& value);

    /// <summary>
    /// 个人钉钉robotCode字段。
    /// </summary>

    std::string getRobotCode() const;
    bool robotCodeIsSet() const;
    void unsetrobotCode();
    void setRobotCode(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    std::string appSecret_;
    bool appSecretIsSet_;
    std::string robotCode_;
    bool robotCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestDingTalkBotEndpointInfo_H_
