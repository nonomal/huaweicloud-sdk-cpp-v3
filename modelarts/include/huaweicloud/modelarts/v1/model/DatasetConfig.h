
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DatasetConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DatasetConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DatasetConfig
    : public ModelBase
{
public:
    DatasetConfig();
    virtual ~DatasetConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatasetConfig members

    /// <summary>
    /// 训练数据集名称，取自数据集列表接口响应体name。
    /// </summary>

    std::string getDatasetName() const;
    bool datasetNameIsSet() const;
    void unsetdatasetName();
    void setDatasetName(const std::string& value);

    /// <summary>
    /// 所使用的数据集来源，取值datamng|OBS|DB,分别表示来自于数据工程|OBS|数据库
    /// </summary>

    std::string getDatasetSource() const;
    bool datasetSourceIsSet() const;
    void unsetdatasetSource();
    void setDatasetSource(const std::string& value);

    /// <summary>
    /// 训练数据集id，取自数据集列表接口响应体dataset_id。
    /// </summary>

    std::string getDatasetId() const;
    bool datasetIdIsSet() const;
    void unsetdatasetId();
    void setDatasetId(const std::string& value);

    /// <summary>
    /// 训练、验证数据集分割比率，当该模型支持验证集且验证集来自选择的训练集时使用，取值大于等于1，小于等于50。
    /// </summary>

    int32_t getSplitRatio() const;
    bool splitRatioIsSet() const;
    void unsetsplitRatio();
    void setSplitRatio(int32_t value);

    /// <summary>
    /// 数据集使用的阶段，取值为train|eval|test，分别表示该数据集用于训练|验证|测试。
    /// </summary>

    std::string getUsedStep() const;
    bool usedStepIsSet() const;
    void unsetusedStep();
    void setUsedStep(const std::string& value);

    /// <summary>
    /// 数据集配比比率，表示使用多少比率的该数据集进行训练。
    /// </summary>

    int32_t getDatasetProportion() const;
    bool datasetProportionIsSet() const;
    void unsetdatasetProportion();
    void setDatasetProportion(int32_t value);


protected:
    std::string datasetName_;
    bool datasetNameIsSet_;
    std::string datasetSource_;
    bool datasetSourceIsSet_;
    std::string datasetId_;
    bool datasetIdIsSet_;
    int32_t splitRatio_;
    bool splitRatioIsSet_;
    std::string usedStep_;
    bool usedStepIsSet_;
    int32_t datasetProportion_;
    bool datasetProportionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DatasetConfig_H_
