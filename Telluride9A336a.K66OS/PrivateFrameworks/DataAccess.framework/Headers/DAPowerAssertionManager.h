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
+ (id)sharedPowerAssertionManager;	// 0x345ff97d
+ (void)vendDaemons:(Class)daemons;	// 0x345ff96d
- (id)init;	// 0x345ff719
- (void)_releaseAssertions;	// 0x3460092d
- (void)_retainAssertions;	// 0x34600875
- (void)dealloc;	// 0x345ff89d
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x34600331
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x345ffa8d
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x346005d5
- (void)releasePowerAssertion:(id)assertion;	// 0x345fff25
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x345ffbe5
- (id)stateString;	// 0x34600241
@end
