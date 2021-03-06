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
+ (void)setSingleton:(id)singleton;	// 0x338ee1
+ (id)singleton;	// 0x338ed1
- (id)init;	// 0x338ef1
- (id)_populatorForObject:(id)object;	// 0x33931d
- (void)dealloc;	// 0x338fad
- (id)menuItemForObject:(id)object;	// 0x339239
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x339275
- (float)menuItemHeightForObject:(id)object;	// 0x33924d
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3392ad
- (void)registerPopulator:(Class)populator;	// 0x338ff9
- (id)titleForObject:(id)object;	// 0x339261
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3392e5
@end

