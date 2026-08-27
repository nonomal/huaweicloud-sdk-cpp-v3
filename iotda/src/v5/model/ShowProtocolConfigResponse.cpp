

#include "huaweicloud/iotda/v5/model/ShowProtocolConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowProtocolConfigResponse::ShowProtocolConfigResponse()
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

ShowProtocolConfigResponse::~ShowProtocolConfigResponse() = default;

void ShowProtocolConfigResponse::validate()
{
}

web::json::value ShowProtocolConfigResponse::toJson() const
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
bool ShowProtocolConfigResponse::fromJson(const web::json::value& val)
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


std::string ShowProtocolConfigResponse::getProtocolId() const
{
    return protocolId_;
}

void ShowProtocolConfigResponse::setProtocolId(const std::string& value)
{
    protocolId_ = value;
    protocolIdIsSet_ = true;
}

bool ShowProtocolConfigResponse::protocolIdIsSet() const
{
    return protocolIdIsSet_;
}

void ShowProtocolConfigResponse::unsetprotocolId()
{
    protocolIdIsSet_ = false;
}

int32_t ShowProtocolConfigResponse::getPort() const
{
    return port_;
}

void ShowProtocolConfigResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ShowProtocolConfigResponse::portIsSet() const
{
    return portIsSet_;
}

void ShowProtocolConfigResponse::unsetport()
{
    portIsSet_ = false;
}

int32_t ShowProtocolConfigResponse::getKeepaliveTimeout() const
{
    return keepaliveTimeout_;
}

void ShowProtocolConfigResponse::setKeepaliveTimeout(int32_t value)
{
    keepaliveTimeout_ = value;
    keepaliveTimeoutIsSet_ = true;
}

bool ShowProtocolConfigResponse::keepaliveTimeoutIsSet() const
{
    return keepaliveTimeoutIsSet_;
}

void ShowProtocolConfigResponse::unsetkeepaliveTimeout()
{
    keepaliveTimeoutIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getProtocolType() const
{
    return protocolType_;
}

void ShowProtocolConfigResponse::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool ShowProtocolConfigResponse::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void ShowProtocolConfigResponse::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getDescription() const
{
    return description_;
}

void ShowProtocolConfigResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProtocolConfigResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProtocolConfigResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowProtocolConfigResponse::isSslEnable() const
{
    return sslEnable_;
}

void ShowProtocolConfigResponse::setSslEnable(bool value)
{
    sslEnable_ = value;
    sslEnableIsSet_ = true;
}

bool ShowProtocolConfigResponse::sslEnableIsSet() const
{
    return sslEnableIsSet_;
}

void ShowProtocolConfigResponse::unsetsslEnable()
{
    sslEnableIsSet_ = false;
}

std::vector<FrameDecodeConfig>& ShowProtocolConfigResponse::getFrameDecodeConfigs()
{
    return frameDecodeConfigs_;
}

void ShowProtocolConfigResponse::setFrameDecodeConfigs(const std::vector<FrameDecodeConfig>& value)
{
    frameDecodeConfigs_ = value;
    frameDecodeConfigsIsSet_ = true;
}

bool ShowProtocolConfigResponse::frameDecodeConfigsIsSet() const
{
    return frameDecodeConfigsIsSet_;
}

void ShowProtocolConfigResponse::unsetframeDecodeConfigs()
{
    frameDecodeConfigsIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getCodecMode() const
{
    return codecMode_;
}

void ShowProtocolConfigResponse::setCodecMode(const std::string& value)
{
    codecMode_ = value;
    codecModeIsSet_ = true;
}

bool ShowProtocolConfigResponse::codecModeIsSet() const
{
    return codecModeIsSet_;
}

void ShowProtocolConfigResponse::unsetcodecMode()
{
    codecModeIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getFuncUrn() const
{
    return funcUrn_;
}

void ShowProtocolConfigResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ShowProtocolConfigResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ShowProtocolConfigResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowProtocolConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowProtocolConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowProtocolConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowProtocolConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowProtocolConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowProtocolConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowProtocolConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


