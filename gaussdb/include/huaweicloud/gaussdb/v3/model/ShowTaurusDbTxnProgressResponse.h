
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbTxnProgressResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbTxnProgressResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TxnItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowTaurusDbTxnProgressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaurusDbTxnProgressResponse();
    virtual ~ShowTaurusDbTxnProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaurusDbTxnProgressResponse members

    /// <summary>
    /// **参数解释**：  处于活跃状态（回滚中）的事务进度列表。如果输入的ID已结束或不存在，则不在此列表中返回。
    /// </summary>

    std::vector<TxnItem>& getTransactions();
    bool transactionsIsSet() const;
    void unsettransactions();
    void setTransactions(const std::vector<TxnItem>& value);

    /// <summary>
    /// **参数解释**： 满足查询条件的事务记录总数。 **取值范围**： 0~100。 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<TxnItem> transactions_;
    bool transactionsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbTxnProgressResponse_H_
