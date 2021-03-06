/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class ISUniqueOperationContext, NSLock, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x36942c35
+ (id)sharedInstance;	// 0x36942c89
- (id)init;	// 0x36942b1d
- (id)_activeContext;	// 0x36943111
- (id)_contextForOperation:(id)operation;	// 0x36943181
- (void)checkInOperation:(id)operation;	// 0x36942cfd
- (void)checkOutOperation:(id)operation;	// 0x36942d5d
- (void)dealloc;	// 0x36942ba9
- (id)lockWithIdentifier:(id)identifier;	// 0x36942e31
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x36942f5d
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x36942ff1
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x36943081
@end

