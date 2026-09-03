
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobMetadata_H_


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
/// 批量删除训练作业时所需的作业元数据。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteJobMetadata
    : public ModelBase
{
public:
    BatchDeleteJobMetadata();
    virtual ~BatchDeleteJobMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteJobMetadata members

    /// <summary>
    /// **参数解释**：训练作业ID，格式为UUID。 **约束限制**：不涉及。 **取值范围**：32位字母、数字与中划线的组合。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobMetadata_H_
