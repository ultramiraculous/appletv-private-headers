/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRDependentProvider : XXUnknownSuperclass <BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x3dc141; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x3dbd95
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x3dbded
- (void)_groupDataCountChanged:(id)changed;	// 0x3dc151
- (void)_providerDataSetChanged:(id)changed;	// 0x3dc1fd
- (void)_providerItemsModified:(id)modified;	// 0x3dc259
- (id)controlFactory;	// 0x3dc065
- (id)dataAtIndex:(long)index;	// 0x3dc0b9
- (long)dataCount;	// 0x3dc085
- (void)dealloc;	// 0x3dbfd5
- (id)hashForDataAtIndex:(long)index;	// 0x3dc0ed
- (id)providers;	// 0x3dc121
// converted property getter: - (long)threshold;	// 0x3dc141
@end
