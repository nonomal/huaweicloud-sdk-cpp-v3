
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DiskSpaceDiagnosisResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DiskSpaceDiagnosisResult_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  DiskSpaceDiagnosisResult
    : public ModelBase
{
public:
    DiskSpaceDiagnosisResult();
    virtual ~DiskSpaceDiagnosisResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiskSpaceDiagnosisResult members

    /// <summary>
    /// **参数解释**：  诊断项编码。  **约束限制**：  不涉及。  **取值范围**：  - 1001（慢查询using filesort产生临时文件） - 1002（慢查询using temporary产生临时文件） - 1003（大事务产生binlog临时文件） - 1004（未使用ROW_FORMAT创建临时表） - 1005（使用ROW_FORMAT创建临时表） - 1006（Online DDL创建临时文件） - 1007（DDL产生临时日志） - 2001（长事务产生undo文件） - 2002（慢日志） - 2003（审计日志） - 2004（binlog） - 2005（relaylog） - 3001（数据文件） - 4001（执行时间长） - 4002（临时表类） - 4003（排序类） - 4004（DDL类）  **默认取值**：  不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  诊断详情。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户查询时间内的磁盘容量是否受该诊断项影响，1代表是，0代表否。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getAffect() const;
    bool affectIsSet() const;
    void unsetaffect();
    void setAffect(int32_t value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string detail_;
    bool detailIsSet_;
    int32_t affect_;
    bool affectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DiskSpaceDiagnosisResult_H_
