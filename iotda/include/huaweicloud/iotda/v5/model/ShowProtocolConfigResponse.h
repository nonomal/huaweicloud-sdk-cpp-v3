
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProtocolConfigResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProtocolConfigResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/FrameDecodeConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowProtocolConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProtocolConfigResponse();
    virtual ~ShowProtocolConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProtocolConfigResponse members

    /// <summary>
    /// **参数说明**：泛协议配置ID。
    /// </summary>

    std::string getProtocolId() const;
    bool protocolIdIsSet() const;
    void unsetprotocolId();
    void setProtocolId(const std::string& value);

    /// <summary>
    /// **参数说明**：泛协议配置的端口号。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数说明**：连接空闲断链时间，单位（s）。
    /// </summary>

    int32_t getKeepaliveTimeout() const;
    bool keepaliveTimeoutIsSet() const;
    void unsetkeepaliveTimeout();
    void setKeepaliveTimeout(int32_t value);

    /// <summary>
    /// **参数说明**：协议类型。 **取值范围**： - TCP：通用TCP协议接入
    /// </summary>

    std::string getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::string& value);

    /// <summary>
    /// **参数说明**：泛协议的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：是否开启tls加密传输。
    /// </summary>

    bool isSslEnable() const;
    bool sslEnableIsSet() const;
    void unsetsslEnable();
    void setSslEnable(bool value);

    /// <summary>
    /// **参数说明**：码流拆包组包配置列表。
    /// </summary>

    std::vector<FrameDecodeConfig>& getFrameDecodeConfigs();
    bool frameDecodeConfigsIsSet() const;
    void unsetframeDecodeConfigs();
    void setFrameDecodeConfigs(const std::vector<FrameDecodeConfig>& value);

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

    /// <summary>
    /// **参数说明**：在物联网平台查询自定义鉴权的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如：20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数说明**：在物联网平台更新查询自定义鉴权的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如：20151212T121212Z。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string protocolId_;
    bool protocolIdIsSet_;
    int32_t port_;
    bool portIsSet_;
    int32_t keepaliveTimeout_;
    bool keepaliveTimeoutIsSet_;
    std::string protocolType_;
    bool protocolTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool sslEnable_;
    bool sslEnableIsSet_;
    std::vector<FrameDecodeConfig> frameDecodeConfigs_;
    bool frameDecodeConfigsIsSet_;
    std::string codecMode_;
    bool codecModeIsSet_;
    std::string funcUrn_;
    bool funcUrnIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProtocolConfigResponse_H_
