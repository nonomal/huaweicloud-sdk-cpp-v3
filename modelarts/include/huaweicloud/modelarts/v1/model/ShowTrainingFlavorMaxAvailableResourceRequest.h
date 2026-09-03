
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingFlavorMaxAvailableResourceRequest
    : public ModelBase
{
public:
    ShowTrainingFlavorMaxAvailableResourceRequest();
    virtual ~ShowTrainingFlavorMaxAvailableResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingFlavorMaxAvailableResourceRequest members

    /// <summary>
    /// **参数解释**：资源规格ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTrainingFlavorMaxAvailableResourceRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTrainingFlavorMaxAvailableResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceRequest_H_
