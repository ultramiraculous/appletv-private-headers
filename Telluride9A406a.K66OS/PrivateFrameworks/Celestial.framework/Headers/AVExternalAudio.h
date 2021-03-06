/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVExternalAudio : NSObject {
	AVExternalAudioPrivate *_priv;	// 4 = 0x4
}
+ (id)avExternalAudio:(id)audio;	// 0x338cd551
- (id)initWithDelegate:(id)delegate;	// 0x338cd58d
- (BOOL)activate:(id *)activate;	// 0x338cd865
- (id)attributeForKey:(id)key;	// 0x338cde19
- (void)dealloc;	// 0x338cde85
- (void)fmpChangeConnectionActive:(BOOL)active;	// 0x338cd511
- (void)fmpServerConnectionDied;	// 0x338cd311
- (void)fmpUserVolumeDidChange;	// 0x338cd455
- (BOOL)isActive;	// 0x338cd06d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x338cd1e1
- (BOOL)okToNotifyFromThisThread;	// 0x338cd919
- (void)postServerConnectionDiedNotification:(id)notification;	// 0x338cd281
- (void)postUserVolumeChangedNotification:(id)notification;	// 0x338cd37d
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x338cd93d
- (float)volume;	// 0x338cd7f1
@end

