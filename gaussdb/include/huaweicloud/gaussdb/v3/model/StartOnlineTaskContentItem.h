
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineTaskContentItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineTaskContentItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StartOnlineDDLInfoItem.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StartOnlineTaskContentItem
    : public ModelBase
{
public:
    StartOnlineTaskContentItem();
    virtual ~StartOnlineTaskContentItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartOnlineTaskContentItem members

    /// <summary>
    /// **参数解释**：  无锁变更的目标数据库。 获取方法请参见[查询数据库列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlDatabase.html)。  **约束限制**：  不涉及。  **取值范围**： 不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更的DDL信息。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<StartOnlineDDLInfoItem>& getDdlInfo();
    bool ddlInfoIsSet() const;
    void unsetddlInfo();
    void setDdlInfo(const std::vector<StartOnlineDDLInfoItem>& value);


protected:
    std::string schema_;
    bool schemaIsSet_;
    std::vector<StartOnlineDDLInfoItem> ddlInfo_;
    bool ddlInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StartOnlineTaskContentItem_H_
