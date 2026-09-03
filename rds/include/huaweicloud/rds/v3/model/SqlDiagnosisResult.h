
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlDiagnosisResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlDiagnosisResult_H_


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
/// 诊断结果
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SqlDiagnosisResult
    : public ModelBase
{
public:
    SqlDiagnosisResult();
    virtual ~SqlDiagnosisResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlDiagnosisResult members

    /// <summary>
    /// **参数解释**：  线程id。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// **参数解释**：  用户名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户host信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：  执行开始时间  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  sql语句。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string db_;
    bool dbIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlDiagnosisResult_H_
