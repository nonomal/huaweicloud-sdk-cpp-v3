

#include "huaweicloud/iotda/v5/model/FrameDecodeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FrameDecodeConfig::FrameDecodeConfig()
{
    frameDecodeType_ = "";
    frameDecodeTypeIsSet_ = false;
    maxFrameLength_ = 0;
    maxFrameLengthIsSet_ = false;
    delimiter_ = "";
    delimiterIsSet_ = false;
    fixedFrameLength_ = 0;
    fixedFrameLengthIsSet_ = false;
    fieldOffset_ = 0;
    fieldOffsetIsSet_ = false;
    fieldLength_ = 0;
    fieldLengthIsSet_ = false;
    initialBytes_ = "";
    initialBytesIsSet_ = false;
    adjustmentLength_ = 0;
    adjustmentLengthIsSet_ = false;
    initialBytesToStrip_ = 0;
    initialBytesToStripIsSet_ = false;
}

FrameDecodeConfig::~FrameDecodeConfig() = default;

void FrameDecodeConfig::validate()
{
}

web::json::value FrameDecodeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(frameDecodeTypeIsSet_) {
        val[utility::conversions::to_string_t("frame_decode_type")] = ModelBase::toJson(frameDecodeType_);
    }
    if(maxFrameLengthIsSet_) {
        val[utility::conversions::to_string_t("max_frame_length")] = ModelBase::toJson(maxFrameLength_);
    }
    if(delimiterIsSet_) {
        val[utility::conversions::to_string_t("delimiter")] = ModelBase::toJson(delimiter_);
    }
    if(fixedFrameLengthIsSet_) {
        val[utility::conversions::to_string_t("fixed_frame_length")] = ModelBase::toJson(fixedFrameLength_);
    }
    if(fieldOffsetIsSet_) {
        val[utility::conversions::to_string_t("field_offset")] = ModelBase::toJson(fieldOffset_);
    }
    if(fieldLengthIsSet_) {
        val[utility::conversions::to_string_t("field_length")] = ModelBase::toJson(fieldLength_);
    }
    if(initialBytesIsSet_) {
        val[utility::conversions::to_string_t("initial_bytes")] = ModelBase::toJson(initialBytes_);
    }
    if(adjustmentLengthIsSet_) {
        val[utility::conversions::to_string_t("adjustment_length")] = ModelBase::toJson(adjustmentLength_);
    }
    if(initialBytesToStripIsSet_) {
        val[utility::conversions::to_string_t("initial_bytes_to_strip")] = ModelBase::toJson(initialBytesToStrip_);
    }

    return val;
}
bool FrameDecodeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("frame_decode_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_decode_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameDecodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_frame_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_frame_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxFrameLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delimiter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delimiter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelimiter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_frame_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_frame_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedFrameLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_bytes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adjustment_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adjustment_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdjustmentLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_bytes_to_strip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_bytes_to_strip"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialBytesToStrip(refVal);
        }
    }
    return ok;
}


std::string FrameDecodeConfig::getFrameDecodeType() const
{
    return frameDecodeType_;
}

void FrameDecodeConfig::setFrameDecodeType(const std::string& value)
{
    frameDecodeType_ = value;
    frameDecodeTypeIsSet_ = true;
}

bool FrameDecodeConfig::frameDecodeTypeIsSet() const
{
    return frameDecodeTypeIsSet_;
}

void FrameDecodeConfig::unsetframeDecodeType()
{
    frameDecodeTypeIsSet_ = false;
}

int32_t FrameDecodeConfig::getMaxFrameLength() const
{
    return maxFrameLength_;
}

void FrameDecodeConfig::setMaxFrameLength(int32_t value)
{
    maxFrameLength_ = value;
    maxFrameLengthIsSet_ = true;
}

bool FrameDecodeConfig::maxFrameLengthIsSet() const
{
    return maxFrameLengthIsSet_;
}

void FrameDecodeConfig::unsetmaxFrameLength()
{
    maxFrameLengthIsSet_ = false;
}

std::string FrameDecodeConfig::getDelimiter() const
{
    return delimiter_;
}

void FrameDecodeConfig::setDelimiter(const std::string& value)
{
    delimiter_ = value;
    delimiterIsSet_ = true;
}

bool FrameDecodeConfig::delimiterIsSet() const
{
    return delimiterIsSet_;
}

void FrameDecodeConfig::unsetdelimiter()
{
    delimiterIsSet_ = false;
}

int32_t FrameDecodeConfig::getFixedFrameLength() const
{
    return fixedFrameLength_;
}

void FrameDecodeConfig::setFixedFrameLength(int32_t value)
{
    fixedFrameLength_ = value;
    fixedFrameLengthIsSet_ = true;
}

bool FrameDecodeConfig::fixedFrameLengthIsSet() const
{
    return fixedFrameLengthIsSet_;
}

void FrameDecodeConfig::unsetfixedFrameLength()
{
    fixedFrameLengthIsSet_ = false;
}

int32_t FrameDecodeConfig::getFieldOffset() const
{
    return fieldOffset_;
}

void FrameDecodeConfig::setFieldOffset(int32_t value)
{
    fieldOffset_ = value;
    fieldOffsetIsSet_ = true;
}

bool FrameDecodeConfig::fieldOffsetIsSet() const
{
    return fieldOffsetIsSet_;
}

void FrameDecodeConfig::unsetfieldOffset()
{
    fieldOffsetIsSet_ = false;
}

int32_t FrameDecodeConfig::getFieldLength() const
{
    return fieldLength_;
}

void FrameDecodeConfig::setFieldLength(int32_t value)
{
    fieldLength_ = value;
    fieldLengthIsSet_ = true;
}

bool FrameDecodeConfig::fieldLengthIsSet() const
{
    return fieldLengthIsSet_;
}

void FrameDecodeConfig::unsetfieldLength()
{
    fieldLengthIsSet_ = false;
}

std::string FrameDecodeConfig::getInitialBytes() const
{
    return initialBytes_;
}

void FrameDecodeConfig::setInitialBytes(const std::string& value)
{
    initialBytes_ = value;
    initialBytesIsSet_ = true;
}

bool FrameDecodeConfig::initialBytesIsSet() const
{
    return initialBytesIsSet_;
}

void FrameDecodeConfig::unsetinitialBytes()
{
    initialBytesIsSet_ = false;
}

int32_t FrameDecodeConfig::getAdjustmentLength() const
{
    return adjustmentLength_;
}

void FrameDecodeConfig::setAdjustmentLength(int32_t value)
{
    adjustmentLength_ = value;
    adjustmentLengthIsSet_ = true;
}

bool FrameDecodeConfig::adjustmentLengthIsSet() const
{
    return adjustmentLengthIsSet_;
}

void FrameDecodeConfig::unsetadjustmentLength()
{
    adjustmentLengthIsSet_ = false;
}

int32_t FrameDecodeConfig::getInitialBytesToStrip() const
{
    return initialBytesToStrip_;
}

void FrameDecodeConfig::setInitialBytesToStrip(int32_t value)
{
    initialBytesToStrip_ = value;
    initialBytesToStripIsSet_ = true;
}

bool FrameDecodeConfig::initialBytesToStripIsSet() const
{
    return initialBytesToStripIsSet_;
}

void FrameDecodeConfig::unsetinitialBytesToStrip()
{
    initialBytesToStripIsSet_ = false;
}

}
}
}
}
}


