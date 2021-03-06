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
@property(readonly, assign, nonatomic) NSDictionary *cleanApertureDictionary;	// G=0x2c30a775; 
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x2c30a8b9; 
@property(readonly, assign, nonatomic) int height;	// G=0x2c30a70d; 
@property(readonly, assign, nonatomic) NSDictionary *pixelAspectRatioDictionary;	// G=0x2c30a741; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x2c30a7a9; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x2c30a6c9; 
@property(readonly, assign, nonatomic) int width;	// G=0x2c30a6d9; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x2c30a4ed
+ (id)_validValuesForScalingMode;	// 0x2c30a411
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x2c30a629
+ (id)defaultVideoOutputSettings;	// 0x2c30a66d
+ (id)registeredOutputSettingsClasses;	// 0x2c30a489
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)trustedVideoSettingsDictionary;	// 0x2c30a575
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x2c30a4fd
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x2c30a68d
// declared property getter: - (id)cleanApertureDictionary;	// 0x2c30a775
- (id)compatibleMediaTypes;	// 0x2c30a69d
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x2c30a8b9
// declared property getter: - (int)height;	// 0x2c30a70d
// declared property getter: - (id)pixelAspectRatioDictionary;	// 0x2c30a741
// declared property getter: - (id)pixelTransferProperties;	// 0x2c30a7a9
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x2c30a915
// declared property getter: - (id)videoSettingsDictionary;	// 0x2c30a6c9
// declared property getter: - (int)width;	// 0x2c30a6d9
@end

