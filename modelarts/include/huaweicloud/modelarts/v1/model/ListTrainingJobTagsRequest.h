
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobTagsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTrainingJobTagsRequest
    : public ModelBase
{
public:
    ListTrainingJobTagsRequest();
    virtual ~ListTrainingJobTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrainingJobTagsRequest members

    /// <summary>
    /// **参数解释**：每页返回的标签key数量。 **约束限制**：不涉及。 **取值范围**：1 - 1000。 **默认取值**：1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：分页查询的偏移量。 **约束限制**：不涉及。 **取值范围**：大于等于0。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTrainingJobTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTrainingJobTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobTagsRequest_H_
