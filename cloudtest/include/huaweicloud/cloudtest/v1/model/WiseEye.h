
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WiseEye_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WiseEye_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  WiseEye
    : public ModelBase
{
public:
    WiseEye();
    virtual ~WiseEye();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WiseEye members

    /// <summary>
    /// 是否开启云眼告警配置
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 云眼告警级别
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 云眼告警区域，目前取值有：china（中国区），asiaAfricaLatin（亚非拉），europe（欧洲）
    /// </summary>

    std::string getRegionKey() const;
    bool regionKeyIsSet() const;
    void unsetregionKey();
    void setRegionKey(const std::string& value);

    /// <summary>
    /// 云眼告警id，对应云眼信息中的name
    /// </summary>

    std::string getScopeId() const;
    bool scopeIdIsSet() const;
    void unsetscopeId();
    void setScopeId(const std::string& value);

    /// <summary>
    /// 云眼告警范围，对应云眼信息中的label
    /// </summary>

    std::string getScopeName() const;
    bool scopeNameIsSet() const;
    void unsetscopeName();
    void setScopeName(const std::string& value);


protected:
    std::string enable_;
    bool enableIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string regionKey_;
    bool regionKeyIsSet_;
    std::string scopeId_;
    bool scopeIdIsSet_;
    std::string scopeName_;
    bool scopeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WiseEye_H_
