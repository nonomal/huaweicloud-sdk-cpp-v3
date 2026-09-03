
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorAlert_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorAlert_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskErrorPolicy.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertTemplate.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ErrorAlert
    : public ModelBase
{
public:
    ErrorAlert();
    virtual ~ErrorAlert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorAlert members

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getAlertTemplate() const;
    bool alertTemplateIsSet() const;
    void unsetalertTemplate();
    void setAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// 异常告警是否开启：0关闭，1开启，默认关闭
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskErrorPolicy getTaskErrorPolicy() const;
    bool taskErrorPolicyIsSet() const;
    void unsettaskErrorPolicy();
    void setTaskErrorPolicy(const TaskErrorPolicy& value);


protected:
    AlertTemplate alertTemplate_;
    bool alertTemplateIsSet_;
    std::string enable_;
    bool enableIsSet_;
    TaskErrorPolicy taskErrorPolicy_;
    bool taskErrorPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorAlert_H_
