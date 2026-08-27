
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnProgressRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnProgressRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 查询大事务进度的请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TxnProgressRequestBody
    : public ModelBase
{
public:
    TxnProgressRequestBody();
    virtual ~TxnProgressRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TxnProgressRequestBody members

    /// <summary>
    /// **参数解释**： 指定查询的事务动作类型。  **约束限制**：  不涉及。 **取值范围**：  rollback：查询事务的回滚进度。  **默认取值**：   rollback。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：   事务唯一标识列表。   - 列表为空/不传：将执行全量查询，并根据limit和offset分页参数返回当前所有处于执行中的事务信息。   - 列表不为空：将精确匹配并返回transaction_ids中指定的事务信息，此时分页参数（limit/offset）无效。 **约束限制**：   单次查询最多支持100个事务ID。 **取值范围**：   符合事务ID格式的字符串列表。
    /// </summary>

    std::vector<std::string>& getTransactionIds();
    bool transactionIdsIsSet() const;
    void unsettransactionIds();
    void setTransactionIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  查询记录数。  **约束限制**：  必须为整数，不能为负数。  **取值范围**：  1-100。  **默认取值**：  100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：    索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。    **约束限制**：    必须为整数，不能为负数。    **取值范围**：    ≥0。  **默认取值**：    0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<std::string> transactionIds_;
    bool transactionIdsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnProgressRequestBody_H_
