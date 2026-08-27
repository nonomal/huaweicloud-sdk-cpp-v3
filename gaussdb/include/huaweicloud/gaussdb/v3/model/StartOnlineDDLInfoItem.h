
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLInfoItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLInfoItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StartOnlineDDLInfoItem
    : public ModelBase
{
public:
    StartOnlineDDLInfoItem();
    virtual ~StartOnlineDDLInfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartOnlineDDLInfoItem members

    /// <summary>
    /// **参数解释**：  无锁变更的具体执行SQL。  **约束限制**:  满足ALTER TABLE Statement语法形式，多条SQL需要以英文分号隔开。  **取值范围**：   不涉及。  **默认取值**：   不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);


protected:
    std::string sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineDDLInfoItem_H_
