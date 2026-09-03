
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceAllProxyVersionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceAllProxyVersionResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ProxyEngineVersionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstanceAllProxyVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceAllProxyVersionResponse();
    virtual ~ListInstanceAllProxyVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceAllProxyVersionResponse members

    /// <summary>
    /// **参数解释**：  数据库代理节点引擎版本信息列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<ProxyEngineVersionInfo>& getProxyEngineVersionInfos();
    bool proxyEngineVersionInfosIsSet() const;
    void unsetproxyEngineVersionInfos();
    void setProxyEngineVersionInfos(const std::vector<ProxyEngineVersionInfo>& value);


protected:
    std::vector<ProxyEngineVersionInfo> proxyEngineVersionInfos_;
    bool proxyEngineVersionInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceAllProxyVersionResponse_H_
