
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkloadStatistics.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源可用容量，不考虑资源已分配量，即资源总容量减去故障资源和热备节点的资源
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadInfo
    : public ModelBase
{
public:
    WorkloadInfo();
    virtual ~WorkloadInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadInfo members

    /// <summary>
    /// 
    /// </summary>

    WorkloadStatistics getAllocated() const;
    bool allocatedIsSet() const;
    void unsetallocated();
    void setAllocated(const WorkloadStatistics& value);

    /// <summary>
    /// 
    /// </summary>

    WorkloadStatistics getQueue() const;
    bool queueIsSet() const;
    void unsetqueue();
    void setQueue(const WorkloadStatistics& value);

    /// <summary>
    /// UTC时间，格式yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;。
    /// </summary>

    std::string getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(const std::string& value);

    /// <summary>
    /// 统计间隔，1s表示1秒，1m表示一分钟，1h为一小时。
    /// </summary>

    std::string getWindow() const;
    bool windowIsSet() const;
    void unsetwindow();
    void setWindow(const std::string& value);


protected:
    WorkloadStatistics allocated_;
    bool allocatedIsSet_;
    WorkloadStatistics queue_;
    bool queueIsSet_;
    std::string timestamp_;
    bool timestampIsSet_;
    std::string window_;
    bool windowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadInfo_H_
