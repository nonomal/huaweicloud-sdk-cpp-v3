
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachDevServerPortResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachDevServerPortResponse();
    virtual ~AttachDevServerPortResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachDevServerPortResponse members

    /// <summary>
    /// **参数解释**：端口MAC地址，由系统分配。
    /// </summary>

    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);

    /// <summary>
    /// **参数解释**：网卡ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// **参数解释**：端口状态。 **取值范围**： - ACTIVE：端口处于活动状态，可以正常进行网络通信。 - BUILD：端口正在创建或配置中。 - DOWN：端口处于非活动状态，不能进行网络通信。
    /// </summary>

    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);

    /// <summary>
    /// **参数解释**：端口所在子网ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getVirsubnetId() const;
    bool virsubnetIdIsSet() const;
    void unsetvirsubnetId();
    void setVirsubnetId(const std::string& value);


protected:
    std::string macAddr_;
    bool macAddrIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portState_;
    bool portStateIsSet_;
    std::string virsubnetId_;
    bool virsubnetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortResponse_H_
