/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"

@class NSString, NSCountedSet, NSMutableSet, NSMutableDictionary;

@interface DAPowerAssertionManager : NSObject {
	NSString *_uuid;	// 4 = 0x4
	NSCountedSet *_contexts;	// 8 = 0x8
	NSMutableDictionary *_groupIdentifierToContexts;	// 12 = 0xc
	CFDictionaryRef _contextToGroupIdentifier;	// 16 = 0x10
	NSMutableSet *_heldAsideGroupIdentifiers;	// 20 = 0x14
	NSCountedSet *_heldAsideContexts;	// 24 = 0x18
	void *_timedAssertionRef;	// 28 = 0x1c
}
+ (id)sharedPowerAssertionManager;	// 0x3259a715
+ (void)vendDaemons:(Class)daemons;	// 0x3259a705
- (id)init;	// 0x3259a4b1
- (void)_releaseAssertions;	// 0x3259b6c5
- (void)_retainAssertions;	// 0x3259b60d
- (void)dealloc;	// 0x3259a635
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3259b0c9
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x3259a825
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3259b36d
- (void)releasePowerAssertion:(id)assertion;	// 0x3259acbd
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x3259a97d
- (id)stateString;	// 0x3259afd9
@end

