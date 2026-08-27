
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaskContentItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaskContentItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DDLInfoItem.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaskContentItem
    : public ModelBase
{
public:
    TaskContentItem();
    virtual ~TaskContentItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskContentItem members

    /// <summary>
    /// **参数解释**：  无锁变更的目标数据库。  **约束限制**： 不涉及。  **取值范围**： 不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更的DDL信息，包含临时表名。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<DDLInfoItem>& getDdlInfo();
    bool ddlInfoIsSet() const;
    void unsetddlInfo();
    void setDdlInfo(const std::vector<DDLInfoItem>& value);


protected:
    std::string schema_;
    bool schemaIsSet_;
    std::vector<DDLInfoItem> ddlInfo_;
    bool ddlInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaskContentItem_H_
