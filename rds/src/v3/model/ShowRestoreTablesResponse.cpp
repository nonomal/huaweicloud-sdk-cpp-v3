

#include "huaweicloud/rds/v3/model/ShowRestoreTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRestoreTablesResponse::ShowRestoreTablesResponse()
{
    dataListIsSet_ = false;
}

ShowRestoreTablesResponse::~ShowRestoreTablesResponse() = default;

void ShowRestoreTablesResponse::validate()
{
}

web::json::value ShowRestoreTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }

    return val;
}
bool ShowRestoreTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreTablesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    return ok;
}


std::vector<RestoreTablesInfo>& ShowRestoreTablesResponse::getDataList()
{
    return dataList_;
}

void ShowRestoreTablesResponse::setDataList(const std::vector<RestoreTablesInfo>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ShowRestoreTablesResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ShowRestoreTablesResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

}
}
}
}
}


