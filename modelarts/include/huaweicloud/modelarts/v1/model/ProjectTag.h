
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ProjectTag_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ProjectTag_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 项目下训练作业标签，包含key和该key下所有不同的value。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ProjectTag
    : public ModelBase
{
public:
    ProjectTag();
    virtual ~ProjectTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectTag members

    /// <summary>
    /// **参数解释**：标签key。 **取值范围**：1-128字符，支持字母、数字、中文及特殊字符（_.:&#x3D;+-@），不能以_sys_开头。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：该key下出现过的所有不同value列表，已去重。 **取值范围**：0-255字符，支持字母、数字、中文及特殊字符（_.:/&#x3D;+-@）。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ProjectTag_H_
