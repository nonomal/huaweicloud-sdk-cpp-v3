
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PublishFtArtifactsResponse
    : public ModelBase, public HttpResponse
{
public:
    PublishFtArtifactsResponse();
    virtual ~PublishFtArtifactsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishFtArtifactsResponse members

    /// <summary>
    /// 模型ID
    /// </summary>

    std::string getModelId() const;
    bool modelIdIsSet() const;
    void unsetmodelId();
    void setModelId(const std::string& value);


protected:
    std::string modelId_;
    bool modelIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsResponse_H_
