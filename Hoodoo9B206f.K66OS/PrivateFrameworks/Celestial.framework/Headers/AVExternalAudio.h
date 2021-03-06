/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVExternalAudio : NSObject {
	AVExternalAudioPrivate *_priv;	// 4 = 0x4
}
+ (id)avExternalAudio:(id)audio;	// 0x323e1b49
- (id)initWithDelegate:(id)delegate;	// 0x323e1b85
- (BOOL)activate:(id *)activate;	// 0x323e2951
- (id)attributeForKey:(id)key;	// 0x323e220d
- (void)dealloc;	// 0x323e205d
- (void)fmpChangeConnectionActive:(BOOL)active;	// 0x323e2bfd
- (void)fmpServerConnectionDied;	// 0x323e28c1
- (void)fmpUserVolumeDidChange;	// 0x323e2b4d
- (BOOL)isActive;	// 0x323e2a61
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x323e2791
- (BOOL)okToNotifyFromThisThread;	// 0x323e292d
- (void)postServerConnectionDiedNotification:(id)notification;	// 0x323e2831
- (void)postUserVolumeChangedNotification:(id)notification;	// 0x323e2a75
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x323e2275
- (float)volume;	// 0x323e29f1
@end

