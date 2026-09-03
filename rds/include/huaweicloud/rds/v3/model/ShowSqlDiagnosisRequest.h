
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSqlDiagnosisRequest
    : public ModelBase
{
public:
    ShowSqlDiagnosisRequest();
    virtual ~ShowSqlDiagnosisRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSqlDiagnosisRequest members

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例诊断类型。  **约束限制**：  不涉及。  **取值范围**：  - disk (当前仅支持传入该项)  **默认取值**：  不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：  sql诊断类型。  **约束限制**：  不涉及。  **取值范围**：  - time (执行耗时长) - temp (临时表类) - sort (排序类) - ddl (DDL类)  **默认取值**：  不涉及。
    /// </summary>

    std::string getSubcategory() const;
    bool subcategoryIsSet() const;
    void unsetsubcategory();
    void setSubcategory(const std::string& value);

    /// <summary>
    /// **参数解释**：  索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  0
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释**：  查询记录数。默认为10，最小值为1，最大值为100。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  10
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string subcategory_;
    bool subcategoryIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSqlDiagnosisRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSqlDiagnosisRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSqlDiagnosisRequest_H_
