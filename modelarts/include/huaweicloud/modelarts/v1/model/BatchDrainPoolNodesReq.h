
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDrainPoolNodesReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDrainPoolNodesReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量对节点进行排水的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDrainPoolNodesReq
    : public ModelBase
{
public:
    BatchDrainPoolNodesReq();
    virtual ~BatchDrainPoolNodesReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDrainPoolNodesReq members

    /// <summary>
    /// **参数解释**：节点名称列表。 **约束限制**：节点不能超过10个。
    /// </summary>

    std::vector<std::string>& getNodeNames();
    bool nodeNamesIsSet() const;
    void unsetnodeNames();
    void setNodeNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeNames_;
    bool nodeNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDrainPoolNodesReq_H_
