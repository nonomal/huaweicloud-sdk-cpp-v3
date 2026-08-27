
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLInfoItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLInfoItem_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OnlineDDLInfoItem
    : public ModelBase
{
public:
    OnlineDDLInfoItem();
    virtual ~OnlineDDLInfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OnlineDDLInfoItem members

    /// <summary>
    /// **参数解释**：   无锁变更的目标表。  **取值范围**：  不涉及。  
    /// </summary>

    std::string getTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更的具体执行SQL。  **取值范围**：   不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);


protected:
    std::string table_;
    bool tableIsSet_;
    std::string sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLInfoItem_H_
