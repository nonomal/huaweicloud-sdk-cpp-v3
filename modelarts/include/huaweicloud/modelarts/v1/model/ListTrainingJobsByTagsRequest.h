
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobsByTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobsByTagsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceInstancesFilterReq.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTrainingJobsByTagsRequest
    : public ModelBase
{
public:
    ListTrainingJobsByTagsRequest();
    virtual ~ListTrainingJobsByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrainingJobsByTagsRequest members

    /// <summary>
    /// **参数解释**：每页返回的资源数量。 **约束限制**：不涉及。 **取值范围**：1 - 1000。 **默认取值**：1000。
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

    /// <summary>
    /// 
    /// </summary>

    ResourceInstancesFilterReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceInstancesFilterReq& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    ResourceInstancesFilterReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTrainingJobsByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTrainingJobsByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobsByTagsRequest_H_
