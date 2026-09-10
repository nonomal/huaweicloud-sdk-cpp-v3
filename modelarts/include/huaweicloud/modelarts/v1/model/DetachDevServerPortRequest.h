
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerPortRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerPortRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DetachDevServerPortRequest
    : public ModelBase
{
public:
    DetachDevServerPortRequest();
    virtual ~DetachDevServerPortRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachDevServerPortRequest members

    /// <summary>
    /// **参数解释**：lite Server实例ID。 **约束限制**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：要卸载的网卡ID。 **约束限制**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string portId_;
    bool portIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachDevServerPortRequest& dereference_from_shared_ptr(std::shared_ptr<DetachDevServerPortRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerPortRequest_H_
