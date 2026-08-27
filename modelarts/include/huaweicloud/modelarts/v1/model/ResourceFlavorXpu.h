
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorXpu_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorXpu_H_


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
/// 算力卡信息，包含类型、卡数、单卡显存等
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorXpu
    : public ModelBase
{
public:
    ResourceFlavorXpu();
    virtual ~ResourceFlavorXpu();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorXpu members

    /// <summary>
    /// **参数解释**：卡类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：芯片数量。reseverd for backwards compatibility **取值范围**：不涉及。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// **参数解释**：单卡显存大小。 **取值范围**：不涉及。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：卡数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getCard() const;
    bool cardIsSet() const;
    void unsetcard();
    void setCard(const std::string& value);

    /// <summary>
    /// **参数解释**：芯片数量。值同size字段一致。 **取值范围**：不涉及。
    /// </summary>

    std::string getChip() const;
    bool chipIsSet() const;
    void unsetchip();
    void setChip(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    std::string card_;
    bool cardIsSet_;
    std::string chip_;
    bool chipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorXpu_H_
