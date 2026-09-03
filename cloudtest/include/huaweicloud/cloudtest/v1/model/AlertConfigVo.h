
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertConfigVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertConfigVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/FailedAlert.h>
#include <huaweicloud/cloudtest/v1/model/TimeoutAlert.h>
#include <huaweicloud/cloudtest/v1/model/AlertExpression.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertTemplate.h>
#include <huaweicloud/cloudtest/v1/model/ErrorAlert.h>
#include <huaweicloud/cloudtest/v1/model/BlockAlert.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertConfigVo
    : public ModelBase
{
public:
    AlertConfigVo();
    virtual ~AlertConfigVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertConfigVo members

    /// <summary>
    /// 告警表达式
    /// </summary>

    std::vector<AlertExpression>& getAlertExpression();
    bool alertExpressionIsSet() const;
    void unsetalertExpression();
    void setAlertExpression(const std::vector<AlertExpression>& value);

    /// <summary>
    /// 告警区间，开始时间
    /// </summary>

    std::string getAlertPeriodBegin() const;
    bool alertPeriodBeginIsSet() const;
    void unsetalertPeriodBegin();
    void setAlertPeriodBegin(const std::string& value);

    /// <summary>
    /// 告警区间，开始时间
    /// </summary>

    std::string getAlertPeriodEnd() const;
    bool alertPeriodEndIsSet() const;
    void unsetalertPeriodEnd();
    void setAlertPeriodEnd(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BlockAlert getBlockAlert() const;
    bool blockAlertIsSet() const;
    void unsetblockAlert();
    void setBlockAlert(const BlockAlert& value);

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getDefaultAlertTemplate() const;
    bool defaultAlertTemplateIsSet() const;
    void unsetdefaultAlertTemplate();
    void setDefaultAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// 告警开启 0关闭 1开启
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorAlert getErrorAlert() const;
    bool errorAlertIsSet() const;
    void unseterrorAlert();
    void setErrorAlert(const ErrorAlert& value);

    /// <summary>
    /// 
    /// </summary>

    FailedAlert getFailedAlert() const;
    bool failedAlertIsSet() const;
    void unsetfailedAlert();
    void setFailedAlert(const FailedAlert& value);

    /// <summary>
    /// 告警恢复通知开关 0关闭 1开启
    /// </summary>

    std::string getRecoverNoticeEnable() const;
    bool recoverNoticeEnableIsSet() const;
    void unsetrecoverNoticeEnable();
    void setRecoverNoticeEnable(const std::string& value);

    /// <summary>
    /// 告警收敛开关 0关闭 1开启
    /// </summary>

    std::string getRestrainAlertEnable() const;
    bool restrainAlertEnableIsSet() const;
    void unsetrestrainAlertEnable();
    void setRestrainAlertEnable(const std::string& value);

    /// <summary>
    /// 智能告警 成功多少次后发送恢复告警
    /// </summary>

    int32_t getResumeAlertNum() const;
    bool resumeAlertNumIsSet() const;
    void unsetresumeAlertNum();
    void setResumeAlertNum(int32_t value);

    /// <summary>
    /// 智能告警 指定时间后发送恢复告警
    /// </summary>

    std::string getResumeAlertTime() const;
    bool resumeAlertTimeIsSet() const;
    void unsetresumeAlertTime();
    void setResumeAlertTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TimeoutAlert getTimeoutAlert() const;
    bool timeoutAlertIsSet() const;
    void unsettimeoutAlert();
    void setTimeoutAlert(const TimeoutAlert& value);

    /// <summary>
    /// 
    /// </summary>

    TimeoutAlert getTimeoutAlertV4() const;
    bool timeoutAlertV4IsSet() const;
    void unsettimeoutAlertV4();
    void setTimeoutAlertV4(const TimeoutAlert& value);


protected:
    std::vector<AlertExpression> alertExpression_;
    bool alertExpressionIsSet_;
    std::string alertPeriodBegin_;
    bool alertPeriodBeginIsSet_;
    std::string alertPeriodEnd_;
    bool alertPeriodEndIsSet_;
    BlockAlert blockAlert_;
    bool blockAlertIsSet_;
    AlertTemplate defaultAlertTemplate_;
    bool defaultAlertTemplateIsSet_;
    std::string enable_;
    bool enableIsSet_;
    ErrorAlert errorAlert_;
    bool errorAlertIsSet_;
    FailedAlert failedAlert_;
    bool failedAlertIsSet_;
    std::string recoverNoticeEnable_;
    bool recoverNoticeEnableIsSet_;
    std::string restrainAlertEnable_;
    bool restrainAlertEnableIsSet_;
    int32_t resumeAlertNum_;
    bool resumeAlertNumIsSet_;
    std::string resumeAlertTime_;
    bool resumeAlertTimeIsSet_;
    TimeoutAlert timeoutAlert_;
    bool timeoutAlertIsSet_;
    TimeoutAlert timeoutAlertV4_;
    bool timeoutAlertV4IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertConfigVo_H_
