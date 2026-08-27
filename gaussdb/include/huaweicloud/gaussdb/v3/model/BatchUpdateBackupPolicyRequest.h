
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BatchUpdateBackupPolicyRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchUpdateBackupPolicyRequest
    : public ModelBase
{
public:
    BatchUpdateBackupPolicyRequest();
    virtual ~BatchUpdateBackupPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateBackupPolicyRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us：英文。 - zh-cn：中文。  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchUpdateBackupPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpdateBackupPolicyRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchUpdateBackupPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateBackupPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateBackupPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateBackupPolicyRequest_H_
