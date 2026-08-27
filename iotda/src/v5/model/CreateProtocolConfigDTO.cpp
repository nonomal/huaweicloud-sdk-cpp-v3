

#include "huaweicloud/iotda/v5/model/CreateProtocolConfigDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProtocolConfigDTO::CreateProtocolConfigDTO()
{
    port_ = 0;
    portIsSet_ = false;
    keepaliveTimeout_ = 0;
    keepaliveTimeoutIsSet_ = false;
    protocolType_ = "";
    protocolTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sslEnable_ = false;
    sslEnableIsSet_ = false;
    frameDecodeConfigsIsSet_ = false;
    codecMode_ = "";
    codecModeIsSet_ = false;
    funcUrn_ = "";
    funcUrnIsSet_ = false;
}

CreateProtocolConfigDTO::~CreateProtocolConfigDTO() = default;

void CreateProtocolConfigDTO::validate()
{
}

web::json::value CreateProtocolConfigDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(keepaliveTimeoutIsSet_) {
        val[utility::conversions::to_string_t("keepalive_timeout")] = ModelBase::toJson(keepaliveTimeout_);
    }
    if(protocolTypeIsSet_) {
        val[utility::conversions::to_string_t("protocol_type")] = ModelBase::toJson(protocolType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sslEnableIsSet_) {
        val[utility::conversions::to_string_t("ssl_enable")] = ModelBase::toJson(sslEnable_);
    }
    if(frameDecodeConfigsIsSet_) {
        val[utility::conversions::to_string_t("frame_decode_configs")] = ModelBase::toJson(frameDecodeConfigs_);
    }
    if(codecModeIsSet_) {
        val[utility::conversions::to_string_t("codec_mode")] = ModelBase::toJson(codecMode_);
    }
    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }

    return val;
}
bool CreateProtocolConfigDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keepalive_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keepalive_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepaliveTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_decode_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_decode_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<FrameDecodeConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameDecodeConfigs(refVal);
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


int32_t CreateProtocolConfigDTO::getPort() const
{
    return port_;
}

void CreateProtocolConfigDTO::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateProtocolConfigDTO::portIsSet() const
{
    return portIsSet_;
}

void CreateProtocolConfigDTO::unsetport()
{
    portIsSet_ = false;
}

int32_t CreateProtocolConfigDTO::getKeepaliveTimeout() const
{
    return keepaliveTimeout_;
}

void CreateProtocolConfigDTO::setKeepaliveTimeout(int32_t value)
{
    keepaliveTimeout_ = value;
    keepaliveTimeoutIsSet_ = true;
}

bool CreateProtocolConfigDTO::keepaliveTimeoutIsSet() const
{
    return keepaliveTimeoutIsSet_;
}

void CreateProtocolConfigDTO::unsetkeepaliveTimeout()
{
    keepaliveTimeoutIsSet_ = false;
}

std::string CreateProtocolConfigDTO::getProtocolType() const
{
    return protocolType_;
}

void CreateProtocolConfigDTO::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool CreateProtocolConfigDTO::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void CreateProtocolConfigDTO::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string CreateProtocolConfigDTO::getDescription() const
{
    return description_;
}

void CreateProtocolConfigDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProtocolConfigDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProtocolConfigDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CreateProtocolConfigDTO::isSslEnable() const
{
    return sslEnable_;
}

void CreateProtocolConfigDTO::setSslEnable(bool value)
{
    sslEnable_ = value;
    sslEnableIsSet_ = true;
}

bool CreateProtocolConfigDTO::sslEnableIsSet() const
{
    return sslEnableIsSet_;
}

void CreateProtocolConfigDTO::unsetsslEnable()
{
    sslEnableIsSet_ = false;
}

std::vector<FrameDecodeConfig>& CreateProtocolConfigDTO::getFrameDecodeConfigs()
{
    return frameDecodeConfigs_;
}

void CreateProtocolConfigDTO::setFrameDecodeConfigs(const std::vector<FrameDecodeConfig>& value)
{
    frameDecodeConfigs_ = value;
    frameDecodeConfigsIsSet_ = true;
}

bool CreateProtocolConfigDTO::frameDecodeConfigsIsSet() const
{
    return frameDecodeConfigsIsSet_;
}

void CreateProtocolConfigDTO::unsetframeDecodeConfigs()
{
    frameDecodeConfigsIsSet_ = false;
}

std::string CreateProtocolConfigDTO::getCodecMode() const
{
    return codecMode_;
}

void CreateProtocolConfigDTO::setCodecMode(const std::string& value)
{
    codecMode_ = value;
    codecModeIsSet_ = true;
}

bool CreateProtocolConfigDTO::codecModeIsSet() const
{
    return codecModeIsSet_;
}

void CreateProtocolConfigDTO::unsetcodecMode()
{
    codecModeIsSet_ = false;
}

std::string CreateProtocolConfigDTO::getFuncUrn() const
{
    return funcUrn_;
}

void CreateProtocolConfigDTO::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool CreateProtocolConfigDTO::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void CreateProtocolConfigDTO::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

}
}
}
}
}


