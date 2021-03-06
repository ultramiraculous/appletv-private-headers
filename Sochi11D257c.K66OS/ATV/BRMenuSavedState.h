/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMenuSavedState : BRSingleton {
	NSMutableDictionary *_cachedMenuState;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
}
@property(assign) BOOL enabled;	// G=0x4755c1; S=0x4755d1; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x475321
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x4750e5
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x475109
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x475215
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x475361
+ (void)setSingleton:(id)singleton;	// 0x4750d5
+ (id)singleton;	// 0x4750c5
- (id)init;	// 0x475399
- (void)dealloc;	// 0x475415
// converted property getter: - (BOOL)enabled;	// 0x4755c1
- (id)objectForKey:(id)key;	// 0x4754dd
- (void)purge;	// 0x47556d
- (void)removeObjectForKey:(id)key;	// 0x475525
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x4755d1
- (void)setObject:(id)object forKey:(id)key;	// 0x475491
@end

