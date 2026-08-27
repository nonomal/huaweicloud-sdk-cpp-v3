

#include "huaweicloud/iotda/v5/model/ProtocolConfigBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ProtocolConfigBase::ProtocolConfigBase()
{
    protocolId_ = "";
    protocolIdIsSet_ = false;
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
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

ProtocolConfigBase::~ProtocolConfigBase() = default;

void ProtocolConfigBase::validate()
{
}

web::json::value ProtocolConfigBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIdIsSet_) {
        val[utility::conversions::to_string_t("protocol_id")] = ModelBase::toJson(protocolId_);
    }
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ProtocolConfigBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ProtocolConfigBase::getProtocolId() const
{
    return protocolId_;
}

void ProtocolConfigBase::setProtocolId(const std::string& value)
{
    protocolId_ = value;
    protocolIdIsSet_ = true;
}

bool ProtocolConfigBase::protocolIdIsSet() const
{
    return protocolIdIsSet_;
}

void ProtocolConfigBase::unsetprotocolId()
{
    protocolIdIsSet_ = false;
}

int32_t ProtocolConfigBase::getPort() const
{
    return port_;
}

void ProtocolConfigBase::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ProtocolConfigBase::portIsSet() const
{
    return portIsSet_;
}

void ProtocolConfigBase::unsetport()
{
    portIsSet_ = false;
}

int32_t ProtocolConfigBase::getKeepaliveTimeout() const
{
    return keepaliveTimeout_;
}

void ProtocolConfigBase::setKeepaliveTimeout(int32_t value)
{
    keepaliveTimeout_ = value;
    keepaliveTimeoutIsSet_ = true;
}

bool ProtocolConfigBase::keepaliveTimeoutIsSet() const
{
    return keepaliveTimeoutIsSet_;
}

void ProtocolConfigBase::unsetkeepaliveTimeout()
{
    keepaliveTimeoutIsSet_ = false;
}

std::string ProtocolConfigBase::getProtocolType() const
{
    return protocolType_;
}

void ProtocolConfigBase::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool ProtocolConfigBase::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void ProtocolConfigBase::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string ProtocolConfigBase::getDescription() const
{
    return description_;
}

void ProtocolConfigBase::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProtocolConfigBase::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProtocolConfigBase::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ProtocolConfigBase::isSslEnable() const
{
    return sslEnable_;
}

void ProtocolConfigBase::setSslEnable(bool value)
{
    sslEnable_ = value;
    sslEnableIsSet_ = true;
}

bool ProtocolConfigBase::sslEnableIsSet() const
{
    return sslEnableIsSet_;
}

void ProtocolConfigBase::unsetsslEnable()
{
    sslEnableIsSet_ = false;
}

std::vector<FrameDecodeConfig>& ProtocolConfigBase::getFrameDecodeConfigs()
{
    return frameDecodeConfigs_;
}

void ProtocolConfigBase::setFrameDecodeConfigs(const std::vector<FrameDecodeConfig>& value)
{
    frameDecodeConfigs_ = value;
    frameDecodeConfigsIsSet_ = true;
}

bool ProtocolConfigBase::frameDecodeConfigsIsSet() const
{
    return frameDecodeConfigsIsSet_;
}

void ProtocolConfigBase::unsetframeDecodeConfigs()
{
    frameDecodeConfigsIsSet_ = false;
}

std::string ProtocolConfigBase::getCodecMode() const
{
    return codecMode_;
}

void ProtocolConfigBase::setCodecMode(const std::string& value)
{
    codecMode_ = value;
    codecModeIsSet_ = true;
}

bool ProtocolConfigBase::codecModeIsSet() const
{
    return codecModeIsSet_;
}

void ProtocolConfigBase::unsetcodecMode()
{
    codecModeIsSet_ = false;
}

std::string ProtocolConfigBase::getFuncUrn() const
{
    return funcUrn_;
}

void ProtocolConfigBase::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ProtocolConfigBase::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ProtocolConfigBase::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ProtocolConfigBase::getCreateTime() const
{
    return createTime_;
}

void ProtocolConfigBase::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProtocolConfigBase::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProtocolConfigBase::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ProtocolConfigBase::getUpdateTime() const
{
    return updateTime_;
}

void ProtocolConfigBase::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProtocolConfigBase::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProtocolConfigBase::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


