/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRMenuItemLayerFactory : BRSingleton {
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x3bf52d
+ (id)singleton;	// 0x3bf51d
- (id)init;	// 0x3bf53d
- (id)_populatorForObject:(id)object;	// 0x3bf969
- (void)dealloc;	// 0x3bf5f9
- (id)menuItemForObject:(id)object;	// 0x3bf885
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3bf8c1
- (float)menuItemHeightForObject:(id)object;	// 0x3bf899
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3bf8f9
- (void)registerPopulator:(Class)populator;	// 0x3bf645
- (id)titleForObject:(id)object;	// 0x3bf8ad
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3bf931
@end

