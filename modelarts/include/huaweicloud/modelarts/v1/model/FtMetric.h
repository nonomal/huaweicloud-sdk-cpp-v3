
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetric_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetric_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
/// 训练指标结构体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FtMetric
    : public ModelBase
{
public:
    FtMetric();
    virtual ~FtMetric();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FtMetric members

    /// <summary>
    /// 指标中文名称，如 训练指标、准确率，前端用作图例或列名
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// 指标英文名称，如 train_loss、val_accuracy，前端用作图例或列名
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 指标中文解释，如 训练指标，前端用作针对指标进行释义
    /// </summary>

    std::string getDesEn() const;
    bool desEnIsSet() const;
    void unsetdesEn();
    void setDesEn(const std::string& value);

    /// <summary>
    /// 指标英文解释，如 train loss，前端用作针对指标进行释义
    /// </summary>

    std::string getDesCn() const;
    bool desCnIsSet() const;
    void unsetdesCn();
    void setDesCn(const std::string& value);

    /// <summary>
    /// 指标绘图类型，可选 line（折线图）或 pie（饼图）、tabel（表格）、scalar（单值），可扩展 image 等
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 逻辑分组，如 training、validation、test，可扩展，用于前端分栏或过滤
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 指定哪些数据点字段用于分组生成多个系列（如 [\&quot;layer\&quot;,\&quot;feature\&quot;]）
    /// </summary>

    std::vector<std::string>& getGroupBy();
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::vector<std::string>& value);

    /// <summary>
    /// 明确指定用作 X 轴的数据点字段名（如 \&quot;step\&quot;、\&quot;epoch\&quot;、\&quot;timestamp\&quot;）
    /// </summary>

    std::string getXAxis() const;
    bool xAxisIsSet() const;
    void unsetxAxis();
    void setXAxis(const std::string& value);

    /// <summary>
    /// 逻辑分组，如 表面loss，用于前端分组或过滤
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 单位，如 %、samples/sec，仅用于展示
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// 数据点数组，严格按时间/步序升序排列
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);


protected:
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string desEn_;
    bool desEnIsSet_;
    std::string desCn_;
    bool desCnIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::vector<std::string> groupBy_;
    bool groupByIsSet_;
    std::string xAxis_;
    bool xAxisIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string unit_;
    bool unitIsSet_;
    Object data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FtMetric_H_
