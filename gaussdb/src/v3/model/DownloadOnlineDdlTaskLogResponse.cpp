

#include "huaweicloud/gaussdb/v3/model/DownloadOnlineDdlTaskLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadOnlineDdlTaskLogResponse::DownloadOnlineDdlTaskLogResponse()
{
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
}

DownloadOnlineDdlTaskLogResponse::~DownloadOnlineDdlTaskLogResponse() = default;

void DownloadOnlineDdlTaskLogResponse::validate()
{
}

web::json::value DownloadOnlineDdlTaskLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }

    return val;
}
bool DownloadOnlineDdlTaskLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    return ok;
}


std::string DownloadOnlineDdlTaskLogResponse::getDownloadLink() const
{
    return downloadLink_;
}

void DownloadOnlineDdlTaskLogResponse::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool DownloadOnlineDdlTaskLogResponse::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void DownloadOnlineDdlTaskLogResponse::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

}
}
}
}
}


