
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadOnlineDdlTaskLogResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadOnlineDdlTaskLogResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DownloadOnlineDdlTaskLogResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadOnlineDdlTaskLogResponse();
    virtual ~DownloadOnlineDdlTaskLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadOnlineDdlTaskLogResponse members

    /// <summary>
    /// **参数解释**：  下载实例无锁变更任务日志的链接。  **取值范围**：   不涉及。
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);


protected:
    std::string downloadLink_;
    bool downloadLinkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadOnlineDdlTaskLogResponse_H_
