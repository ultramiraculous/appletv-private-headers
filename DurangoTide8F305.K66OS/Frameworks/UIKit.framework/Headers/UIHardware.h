/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIHardware : NSObject {
}
+ (float)TVAspectRatio;	// 0x320eb185
+ (BOOL)TVOutCapable;	// 0x320704f1
+ (BOOL)TVOutCapableAndPreferred;	// 0x320eb091
+ (void)TVOutResetPreferred;	// 0x320eb2d9
+ (CGSize)TVScreenSize;	// 0x320702e9
+ (BOOL)_TVOutStatus:(BOOL)status;	// 0x32070509
+ (void)_playSystemSound:(unsigned long)sound;	// 0x32040e35
+ (void)_registerForSystemSounds:(id)systemSounds;	// 0x32035e45
+ (void)_unregisterForSystemSounds:(id)systemSounds;	// 0x31f7bc45
+ (void)_updateSystemSoundActiveStatus:(id)status;	// 0x3204d381
+ (void)accessoryAvailabilityChanged;	// 0x320eb07d
+ (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x320eb21d
+ (id)deviceName;	// 0x320eb365
+ (int)deviceOrientation:(BOOL)orientation;	// 0x31fe10dd
+ (CGRect)fullScreenApplicationContentRect;	// 0x320eb0a9
+ (BOOL)isTTYEnabled;	// 0x320eb11d
+ (id)localizedDeviceName;	// 0x320eb371
+ (CGSize)mainScreenSize;	// 0x31fab8bd
+ (int)ringerState;	// 0x320eb0dd
+ (BOOL)setSpeakerPhoneEnabled:(BOOL)enabled;	// 0x320eb0f9
+ (float)statusBarHeight;	// 0x320109a5
@end
