
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PublishArtifactsBody.h>
#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PublishFtArtifactsRequest
    : public ModelBase
{
public:
    PublishFtArtifactsRequest();
    virtual ~PublishFtArtifactsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishFtArtifactsRequest members

    /// <summary>
    /// 训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublishArtifactsBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PublishArtifactsBody& value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    PublishArtifactsBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PublishFtArtifactsRequest& dereference_from_shared_ptr(std::shared_ptr<PublishFtArtifactsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PublishFtArtifactsRequest_H_
