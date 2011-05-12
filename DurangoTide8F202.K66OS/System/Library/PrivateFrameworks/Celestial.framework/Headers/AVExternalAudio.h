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
+ (id)avExternalAudio:(id)audio;	// 0x30f2d695
- (id)initWithDelegate:(id)delegate;	// 0x30f2dc51
- (BOOL)activate:(id *)activate;	// 0x30f2d819
- (id)attributeForKey:(id)key;	// 0x30f2db5d
- (void)dealloc;	// 0x30f2d9c5
- (void)fmpChangeConnectionActive:(BOOL)active;	// 0x30f2d381
- (void)fmpServerConnectionDied;	// 0x30f2d529
- (void)fmpUserVolumeDidChange;	// 0x30f2d3bd
- (BOOL)isActive;	// 0x30f2d365
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x30f2d605
- (BOOL)okToNotifyFromThisThread;	// 0x30f2dbb5
- (void)postServerConnectionDiedNotification:(id)notification;	// 0x30f2d585
- (void)postUserVolumeChangedNotification:(id)notification;	// 0x30f2d465
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x30f2de89
- (float)volume;	// 0x30f2dbd9
@end
