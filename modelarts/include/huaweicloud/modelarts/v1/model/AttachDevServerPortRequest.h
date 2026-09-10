
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/AttachDevServerPortsRequestBody.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachDevServerPortRequest
    : public ModelBase
{
public:
    AttachDevServerPortRequest();
    virtual ~AttachDevServerPortRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachDevServerPortRequest members

    /// <summary>
    /// **参数解释**：DevServer实例ID。 **约束限制**：必填。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AttachDevServerPortsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AttachDevServerPortsRequestBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    AttachDevServerPortsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AttachDevServerPortRequest& dereference_from_shared_ptr(std::shared_ptr<AttachDevServerPortRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerPortRequest_H_
