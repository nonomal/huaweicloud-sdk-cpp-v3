

#include "huaweicloud/iotda/v5/model/UpdateProtocolConfigDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProtocolConfigDTO::UpdateProtocolConfigDTO()
{
    keepaliveTimeout_ = 0;
    keepaliveTimeoutIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    codecMode_ = "";
    codecModeIsSet_ = false;
    funcUrn_ = "";
    funcUrnIsSet_ = false;
}

UpdateProtocolConfigDTO::~UpdateProtocolConfigDTO() = default;

void UpdateProtocolConfigDTO::validate()
{
}

web::json::value UpdateProtocolConfigDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepaliveTimeoutIsSet_) {
        val[utility::conversions::to_string_t("keepalive_timeout")] = ModelBase::toJson(keepaliveTimeout_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(codecModeIsSet_) {
        val[utility::conversions::to_string_t("codec_mode")] = ModelBase::toJson(codecMode_);
    }
    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }

    return val;
}
bool UpdateProtocolConfigDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keepalive_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keepalive_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepaliveTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    return ok;
}


int32_t UpdateProtocolConfigDTO::getKeepaliveTimeout() const
{
    return keepaliveTimeout_;
}

void UpdateProtocolConfigDTO::setKeepaliveTimeout(int32_t value)
{
    keepaliveTimeout_ = value;
    keepaliveTimeoutIsSet_ = true;
}

bool UpdateProtocolConfigDTO::keepaliveTimeoutIsSet() const
{
    return keepaliveTimeoutIsSet_;
}

void UpdateProtocolConfigDTO::unsetkeepaliveTimeout()
{
    keepaliveTimeoutIsSet_ = false;
}

std::string UpdateProtocolConfigDTO::getDescription() const
{
    return description_;
}

void UpdateProtocolConfigDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProtocolConfigDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProtocolConfigDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateProtocolConfigDTO::getCodecMode() const
{
    return codecMode_;
}

void UpdateProtocolConfigDTO::setCodecMode(const std::string& value)
{
    codecMode_ = value;
    codecModeIsSet_ = true;
}

bool UpdateProtocolConfigDTO::codecModeIsSet() const
{
    return codecModeIsSet_;
}

void UpdateProtocolConfigDTO::unsetcodecMode()
{
    codecModeIsSet_ = false;
}

std::string UpdateProtocolConfigDTO::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateProtocolConfigDTO::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateProtocolConfigDTO::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateProtocolConfigDTO::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

}
}
}
}
}


