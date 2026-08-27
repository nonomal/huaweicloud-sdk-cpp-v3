
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableMetaInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableMetaInfo_H_


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
/// 冷表元信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ColdTableMetaInfo
    : public ModelBase
{
public:
    ColdTableMetaInfo();
    virtual ~ColdTableMetaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColdTableMetaInfo members

    /// <summary>
    /// **参数解释**：  表空间ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSpaceId() const;
    bool spaceIdIsSet() const;
    void unsetspaceId();
    void setSpaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  表ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDdId() const;
    bool ddIdIsSet() const;
    void unsetddId();
    void setDdId(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷表库名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷表表名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷表分区名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷表有效周期（秒）。  **取值范围**：  ≥0。
    /// </summary>

    int64_t getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(int64_t value);

    /// <summary>
    /// **参数解释**：  冷表已保留时间（秒）。  **取值范围**：  ≥0。
    /// </summary>

    int64_t getRetainedTime() const;
    bool retainedTimeIsSet() const;
    void unsetretainedTime();
    void setRetainedTime(int64_t value);

    /// <summary>
    /// **参数解释**：  冷表数据量大小（MB）。  **取值范围**：  ≥0。
    /// </summary>

    float getDataSize() const;
    bool dataSizeIsSet() const;
    void unsetdataSize();
    void setDataSize(float value);


protected:
    std::string spaceId_;
    bool spaceIdIsSet_;
    std::string ddId_;
    bool ddIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    int64_t expirationTime_;
    bool expirationTimeIsSet_;
    int64_t retainedTime_;
    bool retainedTimeIsSet_;
    float dataSize_;
    bool dataSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableMetaInfo_H_
