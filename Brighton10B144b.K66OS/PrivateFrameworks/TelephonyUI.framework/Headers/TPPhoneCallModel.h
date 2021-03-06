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
+ (id)sharedInstance;	// 0x355e104d
- (id)init;	// 0x355e1095
- (BOOL)_booleanValueForKey:(CFStringRef)key;	// 0x355e1371
- (CFDictionaryRef)_callManagementDictionary;	// 0x355e11fd
- (int)_intValueForKey:(CFStringRef)key;	// 0x355e13a9
- (void)_invalidateCachedState;	// 0x355e15d9
- (BOOL)_isAmbiguousCallList;	// 0x355e14f1
- (BOOL)_isAmbiguousMultiPartyCall;	// 0x355e14cd
- (int)ambiguityState;	// 0x355e148d
- (int)cellTelephonyType;	// 0x355e159d
- (void)dealloc;	// 0x355e1195
- (id)description;	// 0x355e170d
- (BOOL)isAddCallAllowed;	// 0x355e144d
- (BOOL)isAmbiguous;	// 0x355e1471
- (BOOL)isEndAndAnswerAllowed;	// 0x355e1579
- (BOOL)isHardPauseAvailable;	// 0x355e1555
- (BOOL)isHoldAllowed;	// 0x355e1429
- (BOOL)isMergeable;	// 0x355e1405
- (BOOL)isSwappable;	// 0x355e13e1
- (int)maxMultiPartyCallCount;	// 0x355e1515
- (int)maxSupportedCallCount;	// 0x355e1535
@end

