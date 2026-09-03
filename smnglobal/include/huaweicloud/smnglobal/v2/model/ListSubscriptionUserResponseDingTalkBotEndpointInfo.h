
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseDingTalkBotEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseDingTalkBotEndpointInfo_H_


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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  ListSubscriptionUserResponseDingTalkBotEndpointInfo
    : public ModelBase
{
public:
    ListSubscriptionUserResponseDingTalkBotEndpointInfo();
    virtual ~ListSubscriptionUserResponseDingTalkBotEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionUserResponseDingTalkBotEndpointInfo members

    /// <summary>
    /// 钉钉企业用户的userId。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 钉钉创建的机器人编码。
    /// </summary>

    std::string getRobotCode() const;
    bool robotCodeIsSet() const;
    void unsetrobotCode();
    void setRobotCode(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string robotCode_;
    bool robotCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseDingTalkBotEndpointInfo_H_
