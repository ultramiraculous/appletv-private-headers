/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SYDJournal : NSObject {
	NSMutableDictionary *store;	// 4 = 0x4
	NSMutableDictionary *journal;	// 8 = 0x8
	BOOL readonly;	// 12 = 0xc
}
- (id)init;	// 0x3306b5d1
- (id)initWithMutableStore:(id)mutableStore;	// 0x3306b6f9
- (id)initWithStore:(id)store;	// 0x3306b661
- (void)addChange:(int)change forKey:(id)key changeCount:(long long)count;	// 0x3306bc39
- (int)changeSinceChangeCount:(long long)count forKey:(id)key;	// 0x3306b7ad
- (id)changesSinceChangeCount:(long long)count;	// 0x3306b851
- (void)dealloc;	// 0x3306b5fd
- (id)description;	// 0x3306c0e9
- (long long)maximumChangeCount;	// 0x3306ba9d
- (BOOL)removeChangesUntilChangeCount:(long long)count;	// 0x3306bdfd
@end
