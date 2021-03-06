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
@property(readonly, assign) long threshold;	// G=0x323ecd; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x323b21
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x323b79
- (void)_groupDataCountChanged:(id)changed;	// 0x323edd
- (void)_providerDataSetChanged:(id)changed;	// 0x323f89
- (void)_providerItemsModified:(id)modified;	// 0x323fe5
- (id)controlFactory;	// 0x323df1
- (id)dataAtIndex:(long)index;	// 0x323e45
- (long)dataCount;	// 0x323e11
- (void)dealloc;	// 0x323d61
- (id)hashForDataAtIndex:(long)index;	// 0x323e79
- (id)providers;	// 0x323ead
// converted property getter: - (long)threshold;	// 0x323ecd
@end

