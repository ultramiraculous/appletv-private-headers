/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock;

@interface TPPhoneCallModel : NSObject {
	CFDictionaryRef _callManagementState;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)sharedInstance;	// 0x355e004d
- (id)init;	// 0x355e0095
- (BOOL)_booleanValueForKey:(CFStringRef)key;	// 0x355e0371
- (CFDictionaryRef)_callManagementDictionary;	// 0x355e01fd
- (int)_intValueForKey:(CFStringRef)key;	// 0x355e03a9
- (void)_invalidateCachedState;	// 0x355e05d9
- (BOOL)_isAmbiguousCallList;	// 0x355e04f1
- (BOOL)_isAmbiguousMultiPartyCall;	// 0x355e04cd
- (int)ambiguityState;	// 0x355e048d
- (int)cellTelephonyType;	// 0x355e059d
- (void)dealloc;	// 0x355e0195
- (id)description;	// 0x355e070d
- (BOOL)isAddCallAllowed;	// 0x355e044d
- (BOOL)isAmbiguous;	// 0x355e0471
- (BOOL)isEndAndAnswerAllowed;	// 0x355e0579
- (BOOL)isHardPauseAvailable;	// 0x355e0555
- (BOOL)isHoldAllowed;	// 0x355e0429
- (BOOL)isMergeable;	// 0x355e0405
- (BOOL)isSwappable;	// 0x355e03e1
- (int)maxMultiPartyCallCount;	// 0x355e0515
- (int)maxSupportedCallCount;	// 0x355e0535
@end

