

#include "huaweicloud/gaussdb/v3/model/SetInstanceReadonlyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetInstanceReadonlyRequestBody::SetInstanceReadonlyRequestBody()
{
    readonly_ = false;
    readonlyIsSet_ = false;
}

SetInstanceReadonlyRequestBody::~SetInstanceReadonlyRequestBody() = default;

void SetInstanceReadonlyRequestBody::validate()
{
}

web::json::value SetInstanceReadonlyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}
bool SetInstanceReadonlyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    return ok;
}


bool SetInstanceReadonlyRequestBody::isReadonly() const
{
    return readonly_;
}

void SetInstanceReadonlyRequestBody::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool SetInstanceReadonlyRequestBody::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void SetInstanceReadonlyRequestBody::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


