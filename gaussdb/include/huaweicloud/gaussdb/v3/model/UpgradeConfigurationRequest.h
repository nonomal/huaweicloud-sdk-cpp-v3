
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/UpgradeConfigurationRequestBody.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeConfigurationRequest
    : public ModelBase
{
public:
    UpgradeConfigurationRequest();
    virtual ~UpgradeConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeConfigurationRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us：英文。 - zh-cn：中文。  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  参数模板ID，此参数是参数模板的唯一标识。 获取方法请参见[查询参数模板](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlConfigurations.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeConfigurationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpgradeConfigurationRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    UpgradeConfigurationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpgradeConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<UpgradeConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequest_H_
