/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface AVFileValidator : NSObject {
	AVFileValidatorPrivate *_priv;	// 4 = 0x4
	NSString *_validationRules;	// 8 = 0x8
}
@property(retain) NSString *validationRules;	// G=0x30bc09dd; S=0x30bc09f1; @synthesize=_validationRules
- (id)initWithURL:(id)url;	// 0x30bb3329
- (id)initWithURL:(id)url options:(id)options;	// 0x30bbfd4d
- (void)cancel;	// 0x30bc074d
- (void)dealloc;	// 0x30bb3569
- (BOOL)isCompleted;	// 0x30bc0875
- (BOOL)isStreaming;	// 0x30bb3555
- (id)notificationForFileCheckResult:(id)fileCheckResult;	// 0x30bbfe99
- (void)postNotificationForCallback:(id)callback;	// 0x30bc0389
- (float)progress;	// 0x30bc0965
// declared property setter: - (void)setValidationRules:(id)rules;	// 0x30bc09f1
- (id)url;	// 0x30bb34fd
- (void)validate;	// 0x30bb333d
- (id)validateBlocking:(BOOL)blocking;	// 0x30bc0441
- (void)validateForCameraRoll;	// 0x30bc066d
- (BOOL)validateSyncWithError:(id *)error;	// 0x30bc06a9
// declared property getter: - (id)validationRules;	// 0x30bc09dd
@end
