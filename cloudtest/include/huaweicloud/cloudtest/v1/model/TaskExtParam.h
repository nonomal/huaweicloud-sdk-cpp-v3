
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskExtParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskExtParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskExtParam
    : public ModelBase
{
public:
    TaskExtParam();
    virtual ~TaskExtParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskExtParam members

    /// <summary>
    /// 是否删除
    /// </summary>

    bool isDelete() const;
    bool deleteIsSet() const;
    void unsetdelete();
    void setDelete(bool value);

    /// <summary>
    /// 参数id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否敏感信息：true-敏感信息，false-非敏感信息
    /// </summary>

    bool isSensitiveInfo() const;
    bool sensitiveInfoIsSet() const;
    void unsetsensitiveInfo();
    void setSensitiveInfo(bool value);

    /// <summary>
    /// 参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数类型
    /// </summary>

    std::string getVariableType() const;
    bool variableTypeIsSet() const;
    void unsetvariableType();
    void setVariableType(const std::string& value);


protected:
    bool delete_;
    bool deleteIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool sensitiveInfo_;
    bool sensitiveInfoIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string variableType_;
    bool variableTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskExtParam_H_
