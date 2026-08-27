
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableMetasResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableMetasResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ColdTableMetaInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListColdTableMetasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListColdTableMetasResponse();
    virtual ~ListColdTableMetasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListColdTableMetasResponse members

    /// <summary>
    /// **参数解释**：  冷表元信息记录总数。  **取值范围**：  ≥0。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**：  冷表元记录列表。
    /// </summary>

    std::vector<ColdTableMetaInfo>& getMetaInfo();
    bool metaInfoIsSet() const;
    void unsetmetaInfo();
    void setMetaInfo(const std::vector<ColdTableMetaInfo>& value);

    /// <summary>
    /// **参数解释**：  冷表数据量总大小（MB）。  **取值范围**：  ≥0。
    /// </summary>

    float getTotalDataSize() const;
    bool totalDataSizeIsSet() const;
    void unsettotalDataSize();
    void setTotalDataSize(float value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ColdTableMetaInfo> metaInfo_;
    bool metaInfoIsSet_;
    float totalDataSize_;
    bool totalDataSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableMetasResponse_H_
