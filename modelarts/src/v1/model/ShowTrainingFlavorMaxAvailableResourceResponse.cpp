

#include "huaweicloud/modelarts/v1/model/ShowTrainingFlavorMaxAvailableResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingFlavorMaxAvailableResourceResponse::ShowTrainingFlavorMaxAvailableResourceResponse()
{
    cpuCoreNum_ = 0;
    cpuCoreNumIsSet_ = false;
    memSize_ = 0;
    memSizeIsSet_ = false;
}

ShowTrainingFlavorMaxAvailableResourceResponse::~ShowTrainingFlavorMaxAvailableResourceResponse() = default;

void ShowTrainingFlavorMaxAvailableResourceResponse::validate()
{
}

web::json::value ShowTrainingFlavorMaxAvailableResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuCoreNumIsSet_) {
        val[utility::conversions::to_string_t("cpu_core_num")] = ModelBase::toJson(cpuCoreNum_);
    }
    if(memSizeIsSet_) {
        val[utility::conversions::to_string_t("mem_size")] = ModelBase::toJson(memSize_);
    }

    return val;
}
bool ShowTrainingFlavorMaxAvailableResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_core_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_core_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuCoreNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemSize(refVal);
        }
    }
    return ok;
}


int32_t ShowTrainingFlavorMaxAvailableResourceResponse::getCpuCoreNum() const
{
    return cpuCoreNum_;
}

void ShowTrainingFlavorMaxAvailableResourceResponse::setCpuCoreNum(int32_t value)
{
    cpuCoreNum_ = value;
    cpuCoreNumIsSet_ = true;
}

bool ShowTrainingFlavorMaxAvailableResourceResponse::cpuCoreNumIsSet() const
{
    return cpuCoreNumIsSet_;
}

void ShowTrainingFlavorMaxAvailableResourceResponse::unsetcpuCoreNum()
{
    cpuCoreNumIsSet_ = false;
}

int32_t ShowTrainingFlavorMaxAvailableResourceResponse::getMemSize() const
{
    return memSize_;
}

void ShowTrainingFlavorMaxAvailableResourceResponse::setMemSize(int32_t value)
{
    memSize_ = value;
    memSizeIsSet_ = true;
}

bool ShowTrainingFlavorMaxAvailableResourceResponse::memSizeIsSet() const
{
    return memSizeIsSet_;
}

void ShowTrainingFlavorMaxAvailableResourceResponse::unsetmemSize()
{
    memSizeIsSet_ = false;
}

}
}
}
}
}


