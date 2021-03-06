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
@private
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
	NSDictionary *_adaptedVideoCompressionProperties;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned videoCodecType;	// G=0x30eca145; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x30eca039; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x30ec5d9d; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x30ec9b2d
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x30ec9f61
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x30ec9fb1
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x30eca269
- (void)dealloc;	// 0x30eca21d
- (int)height;	// 0x30eca185
- (BOOL)isDictionaryFullyFormed;	// 0x30ec5d8d
// declared property getter: - (unsigned long)videoCodecType;	// 0x30eca145
// declared property getter: - (id)videoCompressionProperties;	// 0x30eca039
// declared property getter: - (id)videoEncoderSpecification;	// 0x30ec5d9d
- (int)width;	// 0x30eca1d1
- (BOOL)willYieldCompressedSamples;	// 0x30ec5d89
@end

