

#include "huaweicloud/modelarts/v1/model/BatchDrainPoolNodesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDrainPoolNodesReq::BatchDrainPoolNodesReq()
{
    nodeNamesIsSet_ = false;
}

BatchDrainPoolNodesReq::~BatchDrainPoolNodesReq() = default;

void BatchDrainPoolNodesReq::validate()
{
}

web::json::value BatchDrainPoolNodesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }

    return val;
}
bool BatchDrainPoolNodesReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDrainPoolNodesReq::getNodeNames()
{
    return nodeNames_;
}

void BatchDrainPoolNodesReq::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool BatchDrainPoolNodesReq::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void BatchDrainPoolNodesReq::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

}
}
}
}
}


