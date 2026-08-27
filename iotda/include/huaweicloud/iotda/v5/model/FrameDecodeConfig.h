
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FrameDecodeConfig_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FrameDecodeConfig_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 泛协议码流的拆包组包配置
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  FrameDecodeConfig
    : public ModelBase
{
public:
    FrameDecodeConfig();
    virtual ~FrameDecodeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FrameDecodeConfig members

    /// <summary>
    /// **参数说明**：拆包组包规则。 **取值范围**： - DELIMITER：通过特定分隔符（如逗号、换行符等）来拆分或组合数据包。 - FIXED_LENGTH：按照固定的字节长度，对每一帧数据进行拆分或组合。 - FIELD_LENGTH：每一帧的长度可变，通过数据包中携带的长度字段信息进行拆分或组合。
    /// </summary>

    std::string getFrameDecodeType() const;
    bool frameDecodeTypeIsSet() const;
    void unsetframeDecodeType();
    void setFrameDecodeType(const std::string& value);

    /// <summary>
    /// **参数说明**：单个帧的最大长度。拆包规则为DELIMITER|FIELD_LENGTH时，该参数必选。
    /// </summary>

    int32_t getMaxFrameLength() const;
    bool maxFrameLengthIsSet() const;
    void unsetmaxFrameLength();
    void setMaxFrameLength(int32_t value);

    /// <summary>
    /// **参数说明**：分隔符，hex string格式。拆包规则为DELIMITER，该参数必选。
    /// </summary>

    std::string getDelimiter() const;
    bool delimiterIsSet() const;
    void unsetdelimiter();
    void setDelimiter(const std::string& value);

    /// <summary>
    /// **参数说明**：单个帧的固定长度。拆包规则为FIXED_LENGTH，该参数必选。
    /// </summary>

    int32_t getFixedFrameLength() const;
    bool fixedFrameLengthIsSet() const;
    void unsetfixedFrameLength();
    void setFixedFrameLength(int32_t value);

    /// <summary>
    /// **参数说明**：指定长度字段在数据包中的起始位置（偏移量）。拆包规则为FIELD_LENGTH ，该参数必选。
    /// </summary>

    int32_t getFieldOffset() const;
    bool fieldOffsetIsSet() const;
    void unsetfieldOffset();
    void setFieldOffset(int32_t value);

    /// <summary>
    /// **参数说明**：指定长度字段占用的字节数。拆包规则为FIELD_LENGTH，该参数必选。
    /// </summary>

    int32_t getFieldLength() const;
    bool fieldLengthIsSet() const;
    void unsetfieldLength();
    void setFieldLength(int32_t value);

    /// <summary>
    /// **参数说明**：起始字符，hex string格式。拆包规则为FIXED_LENGTH，该参数可选。
    /// </summary>

    std::string getInitialBytes() const;
    bool initialBytesIsSet() const;
    void unsetinitialBytes();
    void setInitialBytes(const std::string& value);

    /// <summary>
    /// **参数说明**：调整长度字段的值。拆包规则为FIELD_LENGTH，该参数可选。
    /// </summary>

    int32_t getAdjustmentLength() const;
    bool adjustmentLengthIsSet() const;
    void unsetadjustmentLength();
    void setAdjustmentLength(int32_t value);

    /// <summary>
    /// **参数说明**：指定解码后从数据包中去掉的字节数。通常用于去掉长度字段，只保留数据内容。拆包规则为FIELD_LENGTH，该参数可选。
    /// </summary>

    int32_t getInitialBytesToStrip() const;
    bool initialBytesToStripIsSet() const;
    void unsetinitialBytesToStrip();
    void setInitialBytesToStrip(int32_t value);


protected:
    std::string frameDecodeType_;
    bool frameDecodeTypeIsSet_;
    int32_t maxFrameLength_;
    bool maxFrameLengthIsSet_;
    std::string delimiter_;
    bool delimiterIsSet_;
    int32_t fixedFrameLength_;
    bool fixedFrameLengthIsSet_;
    int32_t fieldOffset_;
    bool fieldOffsetIsSet_;
    int32_t fieldLength_;
    bool fieldLengthIsSet_;
    std::string initialBytes_;
    bool initialBytesIsSet_;
    int32_t adjustmentLength_;
    bool adjustmentLengthIsSet_;
    int32_t initialBytesToStrip_;
    bool initialBytesToStripIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FrameDecodeConfig_H_
