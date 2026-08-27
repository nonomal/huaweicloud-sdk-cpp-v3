
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DDLInfoItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DDLInfoItem_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DDLInfoItem
    : public ModelBase
{
public:
    DDLInfoItem();
    virtual ~DDLInfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DDLInfoItem members

    /// <summary>
    /// **参数解释**：   无锁变更产生的临时表，获取方法参见[查询无锁变更任务记录列表](https://support.huaweicloud.com/api-taurusdb/ListOnlineDdlTaskRecords.html)的响应参数temp_table_name。   **约束限制**：  不涉及。   **取值范围**：   不涉及。   **默认取值**：   不涉及。
    /// </summary>

    std::string getTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(const std::string& value);


protected:
    std::string table_;
    bool tableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DDLInfoItem_H_
