/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSLock, ISUniqueOperationContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISUniqueOperationManager : NSObject <ISSingleton> {
@private
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x3431e969
+ (id)sharedInstance;	// 0x3431e9bd
- (id)init;	// 0x3431e859
- (id)_activeContext;	// 0x3431ee51
- (id)_contextForOperation:(id)operation;	// 0x3431eec5
- (void)checkInOperation:(id)operation;	// 0x3431ea31
- (void)checkOutOperation:(id)operation;	// 0x3431ea95
- (void)dealloc;	// 0x3431e8e1
- (id)lockWithIdentifier:(id)identifier;	// 0x3431eb69
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x3431ec9d
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x3431ed31
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x3431edc1
@end
