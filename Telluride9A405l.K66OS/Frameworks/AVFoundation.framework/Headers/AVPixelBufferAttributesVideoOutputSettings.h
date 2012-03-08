/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x346ef8c1; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x346ef70d
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x346ef75d
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x346ef969
- (int)height;	// 0x346ef8d1
- (BOOL)isDictionaryFullyFormed;	// 0x346ebd85
// declared property getter: - (id)pixelBufferAttributes;	// 0x346ef8c1
- (int)width;	// 0x346ef91d
- (BOOL)willYieldCompressedSamples;	// 0x346ebd81
@end
