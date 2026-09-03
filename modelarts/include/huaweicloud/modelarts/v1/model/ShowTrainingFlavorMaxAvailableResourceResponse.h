
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingFlavorMaxAvailableResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingFlavorMaxAvailableResourceResponse();
    virtual ~ShowTrainingFlavorMaxAvailableResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingFlavorMaxAvailableResourceResponse members

    /// <summary>
    /// **参数解释**：最大可用CPU核数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getCpuCoreNum() const;
    bool cpuCoreNumIsSet() const;
    void unsetcpuCoreNum();
    void setCpuCoreNum(int32_t value);

    /// <summary>
    /// **参数解释**：最大可用内存大小，单位为GB。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getMemSize() const;
    bool memSizeIsSet() const;
    void unsetmemSize();
    void setMemSize(int32_t value);


protected:
    int32_t cpuCoreNum_;
    bool cpuCoreNumIsSet_;
    int32_t memSize_;
    bool memSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingFlavorMaxAvailableResourceResponse_H_
