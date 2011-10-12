/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSString;

@interface AVFileValidator : NSObject {
@private
	AVFileValidatorPrivate *_priv;	// 4 = 0x4
	NSString *_validationRules;	// 8 = 0x8
}
@property(retain) NSString *validationRules;	// G=0x3504e8a5; S=0x3504e881; @synthesize=_validationRules
- (id)initWithURL:(id)url;	// 0x35044e35
- (id)initWithURL:(id)url options:(id)options;	// 0x3504e7a1
- (void)cancel;	// 0x3504e991
- (void)dealloc;	// 0x3504501d
- (BOOL)isCompleted;	// 0x3504e8f9
- (BOOL)isStreaming;	// 0x35045009
- (id)notificationForFileCheckResult:(id)fileCheckResult;	// 0x3504ec41
- (void)postNotificationForCallback:(id)callback;	// 0x3504e659
- (float)progress;	// 0x3504e8bd
// declared property setter: - (void)setValidationRules:(id)rules;	// 0x3504e881
- (id)url;	// 0x35044fb1
- (void)validate;	// 0x35044e49
- (id)validateBlocking:(BOOL)blocking;	// 0x3504ea49
- (void)validateForCameraRoll;	// 0x3504e6c1
- (BOOL)validateSyncWithError:(id *)error;	// 0x3504e6fd
// declared property getter: - (id)validationRules;	// 0x3504e8a5
@end

