
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_tags_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_tags_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CountResourceInstancesReq_tags
    : public ModelBase
{
public:
    CountResourceInstancesReq_tags();
    virtual ~CountResourceInstancesReq_tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountResourceInstancesReq_tags members

    /// <summary>
    /// **参数解释**：标签键。 **约束限制**：不涉及。 **取值范围**：1~128个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：标签值列表。 **约束限制**：最多10个标签值，每个标签值0~255个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_tags_H_
