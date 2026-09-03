
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountTrainingJobsByTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountTrainingJobsByTagsResponse_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CountTrainingJobsByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    CountTrainingJobsByTagsResponse();
    virtual ~CountTrainingJobsByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountTrainingJobsByTagsResponse members

    /// <summary>
    /// **参数解释**：符合条件的训练作业总数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountTrainingJobsByTagsResponse_H_
