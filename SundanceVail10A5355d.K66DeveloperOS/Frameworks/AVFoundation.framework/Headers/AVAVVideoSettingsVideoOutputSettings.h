/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
	NSDictionary *_adaptedVideoCompressionProperties;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned long videoCodecType;	// G=0x326e088d; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x326e08d5; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x326e08d1; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x326df895
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x326df845
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x326df7b9
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x326dfca9
- (id)initWithTrustedAVVideoSettingsDictionary:(id)trustedAVVideoSettingsDictionary;	// 0x326e05ad
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x326e0691
- (void)dealloc;	// 0x326e063d
- (int)height;	// 0x326e083d
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x326e068d
// declared property getter: - (unsigned long)videoCodecType;	// 0x326e088d
// declared property getter: - (id)videoCompressionProperties;	// 0x326e08d5
// declared property getter: - (id)videoEncoderSpecification;	// 0x326e08d1
- (int)width;	// 0x326e07ed
- (BOOL)willYieldCompressedSamples;	// 0x326e0689
@end
