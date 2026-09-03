
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AdvancedConfig_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AdvancedConfig_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AdvancedConfig
    : public ModelBase
{
public:
    AdvancedConfig();
    virtual ~AdvancedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdvancedConfig members

    /// <summary>
    /// 分块开关 1:打开 0：关闭，默认：打开
    /// </summary>

    std::string getBlockEnable() const;
    bool blockEnableIsSet() const;
    void unsetblockEnable();
    void setBlockEnable(const std::string& value);

    /// <summary>
    /// 用例超时时间
    /// </summary>

    int64_t getCaseTimeout() const;
    bool caseTimeoutIsSet() const;
    void unsetcaseTimeout();
    void setCaseTimeout(int64_t value);

    /// <summary>
    /// httpClient报存cookie配置：1 保存 0 不保存
    /// </summary>

    std::string getEnableCookie() const;
    bool enableCookieIsSet() const;
    void unsetenableCookie();
    void setEnableCookie(const std::string& value);

    /// <summary>
    /// 关闭默认添加content-type和accept请求头配置：1 打开 0 关闭
    /// </summary>

    std::string getHeaderDefault() const;
    bool headerDefaultIsSet() const;
    void unsetheaderDefault();
    void setHeaderDefault(const std::string& value);

    /// <summary>
    /// http请求超时时间
    /// </summary>

    int64_t getHttpTimeout() const;
    bool httpTimeoutIsSet() const;
    void unsethttpTimeout();
    void setHttpTimeout(int64_t value);

    /// <summary>
    /// 八爪鱼镜像地址
    /// </summary>

    std::string getOctopusImage() const;
    bool octopusImageIsSet() const;
    void unsetoctopusImage();
    void setOctopusImage(const std::string& value);

    /// <summary>
    /// 并行用例个数
    /// </summary>

    int32_t getParallelNumber() const;
    bool parallelNumberIsSet() const;
    void unsetparallelNumber();
    void setParallelNumber(int32_t value);

    /// <summary>
    /// 代理用户名
    /// </summary>

    std::string getProxyAuthName() const;
    bool proxyAuthNameIsSet() const;
    void unsetproxyAuthName();
    void setProxyAuthName(const std::string& value);

    /// <summary>
    /// 代理密码
    /// </summary>

    std::string getProxyAuthPassword() const;
    bool proxyAuthPasswordIsSet() const;
    void unsetproxyAuthPassword();
    void setProxyAuthPassword(const std::string& value);

    /// <summary>
    /// 代理服务配置
    /// </summary>

    std::string getProxyHostName() const;
    bool proxyHostNameIsSet() const;
    void unsetproxyHostName();
    void setProxyHostName(const std::string& value);

    /// <summary>
    /// 代理服务配置
    /// </summary>

    std::string getProxyPort() const;
    bool proxyPortIsSet() const;
    void unsetproxyPort();
    void setProxyPort(const std::string& value);

    /// <summary>
    /// 串行配置
    /// </summary>

    std::string getSerialRun() const;
    bool serialRunIsSet() const;
    void unsetserialRun();
    void setSerialRun(const std::string& value);

    /// <summary>
    /// 任务停止时间
    /// </summary>

    utility::datetime getTaskStopTime() const;
    bool taskStopTimeIsSet() const;
    void unsettaskStopTime();
    void setTaskStopTime(const utility::datetime& value);

    /// <summary>
    /// 任务超时时间
    /// </summary>

    int64_t getTaskTimeout() const;
    bool taskTimeoutIsSet() const;
    void unsettaskTimeout();
    void setTaskTimeout(int64_t value);


protected:
    std::string blockEnable_;
    bool blockEnableIsSet_;
    int64_t caseTimeout_;
    bool caseTimeoutIsSet_;
    std::string enableCookie_;
    bool enableCookieIsSet_;
    std::string headerDefault_;
    bool headerDefaultIsSet_;
    int64_t httpTimeout_;
    bool httpTimeoutIsSet_;
    std::string octopusImage_;
    bool octopusImageIsSet_;
    int32_t parallelNumber_;
    bool parallelNumberIsSet_;
    std::string proxyAuthName_;
    bool proxyAuthNameIsSet_;
    std::string proxyAuthPassword_;
    bool proxyAuthPasswordIsSet_;
    std::string proxyHostName_;
    bool proxyHostNameIsSet_;
    std::string proxyPort_;
    bool proxyPortIsSet_;
    std::string serialRun_;
    bool serialRunIsSet_;
    utility::datetime taskStopTime_;
    bool taskStopTimeIsSet_;
    int64_t taskTimeout_;
    bool taskTimeoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AdvancedConfig_H_
