
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ArtifactInfo.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListFtArtifactsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFtArtifactsResponse();
    virtual ~ListFtArtifactsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFtArtifactsResponse members

    /// <summary>
    /// 本次查询到的数据条目数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 产物信息。
    /// </summary>

    std::vector<ArtifactInfo>& getArtifactInfo();
    bool artifactInfoIsSet() const;
    void unsetartifactInfo();
    void setArtifactInfo(const std::vector<ArtifactInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ArtifactInfo> artifactInfo_;
    bool artifactInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsResponse_H_
