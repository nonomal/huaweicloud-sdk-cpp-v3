
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublicNetworkConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublicNetworkConfig_H_


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
/// **参数解释**：NoteBook网关类型 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PublicNetworkConfig
    : public ModelBase
{
public:
    PublicNetworkConfig();
    virtual ~PublicNetworkConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicNetworkConfig members

    /// <summary>
    /// **参数解释**：NoteBook网络类型 **约束限制**： - SHARED：公共网络 - EXCLUSIVE：专属网络 - FORBIDDEN：禁用网络
    /// </summary>

    std::string getPublicNetworkType() const;
    bool publicNetworkTypeIsSet() const;
    void unsetpublicNetworkType();
    void setPublicNetworkType(const std::string& value);


protected:
    std::string publicNetworkType_;
    bool publicNetworkTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublicNetworkConfig_H_
