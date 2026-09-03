
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchDeleteJobMetadata.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除训练作业时的作业标识信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteJobItem
    : public ModelBase
{
public:
    BatchDeleteJobItem();
    virtual ~BatchDeleteJobItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteJobItem members

    /// <summary>
    /// **参数解释**：训练作业类型。 **取值范围**： - job - edge_job - mrs_job - hetero_job - autosearch_job - diag_job - visualization_job - federated_pool_job
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteJobMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const BatchDeleteJobMetadata& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    BatchDeleteJobMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobItem_H_
