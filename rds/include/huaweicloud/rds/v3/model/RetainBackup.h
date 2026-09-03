
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RetainBackup_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RetainBackup_H_


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
/// **参数解释**  保留的备份  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RetainBackup
    : public ModelBase
{
public:
    RetainBackup();
    virtual ~RetainBackup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetainBackup members

    /// <summary>
    /// **参数解释**：  备份名字  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份ID  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份类型。Db表示自动备份、Snapshot表示手动备份  **约束限制**  不涉及  **取值范围**  Db、Snapshot  **默认取值**  不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份开始时间  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份结束时间  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份大小  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份描述信息  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getDescribe() const;
    bool describeIsSet() const;
    void unsetdescribe();
    void setDescribe(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份方式。Physics表示物理备份、Snapshot表示快照备份  **约束限制**  不涉及  **取值范围**  Physics、Snapshot  **默认取值**  不涉及
    /// </summary>

    std::string getBackupMethod() const;
    bool backupMethodIsSet() const;
    void unsetbackupMethod();
    void setBackupMethod(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份是否tde加密  **约束限制**  不涉及  **取值范围**  false、true  **默认取值**  不涉及
    /// </summary>

    bool isTde() const;
    bool tdeIsSet() const;
    void unsettde();
    void setTde(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string describe_;
    bool describeIsSet_;
    std::string backupMethod_;
    bool backupMethodIsSet_;
    bool tde_;
    bool tdeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RetainBackup_H_
