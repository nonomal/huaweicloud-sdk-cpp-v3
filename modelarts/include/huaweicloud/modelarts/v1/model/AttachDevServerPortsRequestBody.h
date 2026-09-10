
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortsRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortsRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachDevServerPortsRequestBody
    : public ModelBase
{
public:
    AttachDevServerPortsRequestBody();
    virtual ~AttachDevServerPortsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachDevServerPortsRequestBody members

    /// <summary>
    /// **参数解释**：网卡ID，填该参数时，表明挂载已有网卡，其他参数不用填。 **约束限制**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// **参数解释**：网卡名称。 **约束限制**：不涉及。 **取值范围**：默认为空，最大长度不超过255。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：端口子网ID。 **约束限制**：参数port_id未填时，需要新建网卡进行挂载，此时network_id为必填项。 **取值范围**：必须是UUID格式的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// **参数解释**：端口IP地址。 **约束限制**：不支持更新。 **取值范围**：所属网络网段。 **默认取值**：不涉及。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：关联安全组ID列表。 **约束限制**：一个端口默认最多吃吃100个安全组。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：是否使能efi。 **约束限制**：不涉及。 **取值范围**： - true：启用efi - false：不启用efi  **默认取值**：不涉及。
    /// </summary>

    bool isEnableEfi() const;
    bool enableEfiIsSet() const;
    void unsetenableEfi();
    void setEnableEfi(bool value);

    /// <summary>
    /// **参数解释**：efi 协议。 **约束限制**：不涉及。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getEfiProtocol() const;
    bool efiProtocolIsSet() const;
    void unsetefiProtocol();
    void setEfiProtocol(const std::string& value);


protected:
    std::string portId_;
    bool portIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    bool enableEfi_;
    bool enableEfiIsSet_;
    std::string efiProtocol_;
    bool efiProtocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortsRequestBody_H_
