
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_OperateNotice_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_OperateNotice_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AlertGroup.h>
#include <string>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  OperateNotice
    : public ModelBase
{
public:
    OperateNotice();
    virtual ~OperateNotice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateNotice members

    /// <summary>
    /// 发送告警渠道
    /// </summary>

    std::string getAlertChannel() const;
    bool alertChannelIsSet() const;
    void unsetalertChannel();
    void setAlertChannel(const std::string& value);

    /// <summary>
    /// 操作通知 0 关闭 1开启
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 通知组列表
    /// </summary>

    std::vector<AlertGroup>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<AlertGroup>& value);

    /// <summary>
    /// 通知类型列表
    /// </summary>

    std::vector<std::string>& getOperateTypes();
    bool operateTypesIsSet() const;
    void unsetoperateTypes();
    void setOperateTypes(const std::vector<std::string>& value);


protected:
    std::string alertChannel_;
    bool alertChannelIsSet_;
    std::string enable_;
    bool enableIsSet_;
    std::vector<AlertGroup> groups_;
    bool groupsIsSet_;
    std::vector<std::string> operateTypes_;
    bool operateTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_OperateNotice_H_
