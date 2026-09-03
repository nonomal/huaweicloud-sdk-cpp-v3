
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotasRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotasRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ModifyTrainingQuotaRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ModifyTrainingQuotasRequest
    : public ModelBase
{
public:
    ModifyTrainingQuotasRequest();
    virtual ~ModifyTrainingQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyTrainingQuotasRequest members

    /// <summary>
    /// 
    /// </summary>

    ModifyTrainingQuotaRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyTrainingQuotaRequest& value);


protected:
    ModifyTrainingQuotaRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyTrainingQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyTrainingQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotasRequest_H_
