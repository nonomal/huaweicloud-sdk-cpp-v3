
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactsPublish_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactsPublish_H_


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
/// 训练产物自动发布配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ArtifactsPublish
    : public ModelBase
{
public:
    ArtifactsPublish();
    virtual ~ArtifactsPublish();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ArtifactsPublish members

    /// <summary>
    /// 是否是中间产物，false-是模型产物，true-是中间产物
    /// </summary>

    bool isIsCkpt() const;
    bool isCkptIsSet() const;
    void unsetisCkpt();
    void setIsCkpt(bool value);

    /// <summary>
    /// 断点ID,ckpt发布时使用
    /// </summary>

    std::string getArtifactId() const;
    bool artifactIdIsSet() const;
    void unsetartifactId();
    void setArtifactId(const std::string& value);

    /// <summary>
    /// 模型产物发布后资产名称，默认{源模型名字}-{训练类型}-{训练时间}
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 全局可见性，用来控制资产是当前空间可见或者全部空间可见，取值current|all。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 发布资产描述信息，{任务名}的最终产出模型
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模型发布方式
    /// </summary>

    std::string getPublishAssetType() const;
    bool publishAssetTypeIsSet() const;
    void unsetpublishAssetType();
    void setPublishAssetType(const std::string& value);

    /// <summary>
    /// 资产来源
    /// </summary>

    std::string getAssetSourceType() const;
    bool assetSourceTypeIsSet() const;
    void unsetassetSourceType();
    void setAssetSourceType(const std::string& value);

    /// <summary>
    /// 选择模型。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// 版本号。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// 版本描述。
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);


protected:
    bool isCkpt_;
    bool isCkptIsSet_;
    std::string artifactId_;
    bool artifactIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string publishAssetType_;
    bool publishAssetTypeIsSet_;
    std::string assetSourceType_;
    bool assetSourceTypeIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactsPublish_H_
