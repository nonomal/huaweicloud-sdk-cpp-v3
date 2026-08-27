
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProtocolConfigDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProtocolConfigDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新泛协议配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateProtocolConfigDTO
    : public ModelBase
{
public:
    UpdateProtocolConfigDTO();
    virtual ~UpdateProtocolConfigDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProtocolConfigDTO members

    /// <summary>
    /// **参数说明**：连接空闲断链时间，单位（s）。
    /// </summary>

    int32_t getKeepaliveTimeout() const;
    bool keepaliveTimeoutIsSet() const;
    void unsetkeepaliveTimeout();
    void setKeepaliveTimeout(int32_t value);

    /// <summary>
    /// **参数说明**：泛协议的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：编解码类型。 **取值范围**： - FGS：将编解码插件以函数形式部署到FunctionGraph。 - PLUGIN：将编解码插件以OSGI插件形式部署到设备接入平台，使用该方式需提工单联系技术支持。
    /// </summary>

    std::string getCodecMode() const;
    bool codecModeIsSet() const;
    void unsetcodecMode();
    void setCodecMode(const std::string& value);

    /// <summary>
    /// **参数说明**：函数的URN（Uniform Resource Name），唯一标识函数，采用FGS进行编解码的对应函数地址。 **取值范围**：长度不超过256，只允许字母、数字、下划线（_）、连接符（-）、分隔符（:）的组合。
    /// </summary>

    std::string getFuncUrn() const;
    bool funcUrnIsSet() const;
    void unsetfuncUrn();
    void setFuncUrn(const std::string& value);


protected:
    int32_t keepaliveTimeout_;
    bool keepaliveTimeoutIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string codecMode_;
    bool codecModeIsSet_;
    std::string funcUrn_;
    bool funcUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProtocolConfigDTO_H_
