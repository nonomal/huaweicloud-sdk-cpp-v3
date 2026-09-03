
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BlockAlert_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BlockAlert_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BlockAlert
    : public ModelBase
{
public:
    BlockAlert();
    virtual ~BlockAlert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlockAlert members

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getAlertTemplate() const;
    bool alertTemplateIsSet() const;
    void unsetalertTemplate();
    void setAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// 阻塞告警开启 0关闭 1开启
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 等待队列大于多少个开始阻塞
    /// </summary>

    int32_t getWaitingCount() const;
    bool waitingCountIsSet() const;
    void unsetwaitingCount();
    void setWaitingCount(int32_t value);


protected:
    AlertTemplate alertTemplate_;
    bool alertTemplateIsSet_;
    std::string enable_;
    bool enableIsSet_;
    int32_t waitingCount_;
    bool waitingCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BlockAlert_H_
