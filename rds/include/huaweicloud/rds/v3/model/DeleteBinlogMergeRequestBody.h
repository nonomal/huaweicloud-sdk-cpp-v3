
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBinlogMergeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBinlogMergeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除Binlog合并记录请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteBinlogMergeRequestBody
    : public ModelBase
{
public:
    DeleteBinlogMergeRequestBody();
    virtual ~DeleteBinlogMergeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBinlogMergeRequestBody members

    /// <summary>
    /// **参数解释**：  Binlog合并记录ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBinlogMergeRequestBody_H_
