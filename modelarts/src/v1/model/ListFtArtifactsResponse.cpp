

#include "huaweicloud/modelarts/v1/model/ListFtArtifactsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListFtArtifactsResponse::ListFtArtifactsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    artifactInfoIsSet_ = false;
}

ListFtArtifactsResponse::~ListFtArtifactsResponse() = default;

void ListFtArtifactsResponse::validate()
{
}

web::json::value ListFtArtifactsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(artifactInfoIsSet_) {
        val[utility::conversions::to_string_t("artifact_info")] = ModelBase::toJson(artifactInfo_);
    }

    return val;
}
bool ListFtArtifactsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ArtifactInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactInfo(refVal);
        }
    }
    return ok;
}


int32_t ListFtArtifactsResponse::getTotal() const
{
    return total_;
}

void ListFtArtifactsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFtArtifactsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFtArtifactsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ArtifactInfo>& ListFtArtifactsResponse::getArtifactInfo()
{
    return artifactInfo_;
}

void ListFtArtifactsResponse::setArtifactInfo(const std::vector<ArtifactInfo>& value)
{
    artifactInfo_ = value;
    artifactInfoIsSet_ = true;
}

bool ListFtArtifactsResponse::artifactInfoIsSet() const
{
    return artifactInfoIsSet_;
}

void ListFtArtifactsResponse::unsetartifactInfo()
{
    artifactInfoIsSet_ = false;
}

}
}
}
}
}


