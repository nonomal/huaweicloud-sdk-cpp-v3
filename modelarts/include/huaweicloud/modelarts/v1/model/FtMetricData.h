
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetricData_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetricData_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/FtMetric.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练指标响应体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FtMetricData
    : public ModelBase
{
public:
    FtMetricData();
    virtual ~FtMetricData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FtMetricData members

    /// <summary>
    /// 固定值 \&quot;1.0\&quot;，标识数据格式版本
    /// </summary>

    std::string getFormatVersion() const;
    bool formatVersionIsSet() const;
    void unsetformatVersion();
    void setFormatVersion(const std::string& value);

    /// <summary>
    /// 文件生成时间，ISO 8601 格式（如 2026-07-18T10:30:00Z）
    /// </summary>

    std::string getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<FtMetric>& getMetrics();
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const std::vector<FtMetric>& value);


protected:
    std::string formatVersion_;
    bool formatVersionIsSet_;
    std::string timestamp_;
    bool timestampIsSet_;
    std::vector<FtMetric> metrics_;
    bool metricsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetricData_H_
