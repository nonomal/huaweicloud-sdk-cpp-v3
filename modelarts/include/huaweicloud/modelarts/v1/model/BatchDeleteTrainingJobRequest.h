
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteTrainingJobRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteTrainingJobRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchDeleteJobsReq.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteTrainingJobRequest
    : public ModelBase
{
public:
    BatchDeleteTrainingJobRequest();
    virtual ~BatchDeleteTrainingJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTrainingJobRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteJobsReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteJobsReq& value);


protected:
    BatchDeleteJobsReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTrainingJobRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTrainingJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteTrainingJobRequest_H_
