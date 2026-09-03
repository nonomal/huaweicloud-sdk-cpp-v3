
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishArtifactsBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishArtifactsBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ArtifactsPublish.h>
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
/// 产物发布请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PublishArtifactsBody
    : public ModelBase
{
public:
    PublishArtifactsBody();
    virtual ~PublishArtifactsBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishArtifactsBody members

    /// <summary>
    /// 工作空间ID
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 产物发布请求列表
    /// </summary>

    std::vector<ArtifactsPublish>& getPublishArtifacts();
    bool publishArtifactsIsSet() const;
    void unsetpublishArtifacts();
    void setPublishArtifacts(const std::vector<ArtifactsPublish>& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<ArtifactsPublish> publishArtifacts_;
    bool publishArtifactsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishArtifactsBody_H_
