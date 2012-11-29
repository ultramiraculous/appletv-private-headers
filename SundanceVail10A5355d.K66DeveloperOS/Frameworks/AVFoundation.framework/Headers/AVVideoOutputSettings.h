/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x326df379; 
@property(readonly, assign, nonatomic) int height;	// G=0x326df239; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x326df26d; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x326df1f5; 
@property(readonly, assign, nonatomic) int width;	// G=0x326df205; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x326df019
+ (id)_validValuesForScalingMode;	// 0x326def3d
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x326df155
+ (id)defaultVideoOutputSettings;	// 0x326df199
+ (id)registeredOutputSettingsClasses;	// 0x326defb5
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)trustedVideoSettingsDictionary;	// 0x326df0a1
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x326df029
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x326df1b9
- (id)compatibleMediaTypes;	// 0x326df1c9
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x326df379
// declared property getter: - (int)height;	// 0x326df239
// declared property getter: - (id)pixelTransferProperties;	// 0x326df26d
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x326df3d5
// declared property getter: - (id)videoSettingsDictionary;	// 0x326df1f5
// declared property getter: - (int)width;	// 0x326df205
@end
