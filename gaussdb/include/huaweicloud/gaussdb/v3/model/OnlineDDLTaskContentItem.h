
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLTaskContentItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLTaskContentItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/OnlineDDLInfoItem.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OnlineDDLTaskContentItem
    : public ModelBase
{
public:
    OnlineDDLTaskContentItem();
    virtual ~OnlineDDLTaskContentItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OnlineDDLTaskContentItem members

    /// <summary>
    /// **参数解释**：  无锁变更的目标数据库。  **取值范围**： 不涉及。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// **参数解释**：  无锁变更的DDL信息。
    /// </summary>

    std::vector<OnlineDDLInfoItem>& getDdlInfo();
    bool ddlInfoIsSet() const;
    void unsetddlInfo();
    void setDdlInfo(const std::vector<OnlineDDLInfoItem>& value);


protected:
    std::string schema_;
    bool schemaIsSet_;
    std::vector<OnlineDDLInfoItem> ddlInfo_;
    bool ddlInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OnlineDDLTaskContentItem_H_
