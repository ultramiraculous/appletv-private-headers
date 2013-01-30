/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRDividerProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRHorizontalDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x2ea5f1; S=0x2ea5c5; converted property
+ (id)providerWithProvider:(id)provider;	// 0x2ea49d
- (id)initWithProvider:(id)provider;	// 0x2ea315
- (void)_providerDataSetChanged:(id)changed;	// 0x2ea969
- (void)_providerItemsModified:(id)modified;	// 0x2ea8f5
- (id)_shiftRangesDown:(id)down;	// 0x2ea81d
- (BOOL)_shouldShowDivider;	// 0x2ea7cd
- (void)_updateTopDividerControl;	// 0x2ea731
- (id)accessibilityLabel;	// 0x2ea9d1
- (void)addDividerWithLabel:(id)label;	// 0x2ea4f9
- (id)controlFactory;	// 0x2ea621
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2ea9f1
- (id)dataAtIndex:(long)index;	// 0x2ea661
- (long)dataCount;	// 0x2ea625
- (void)dealloc;	// 0x2ea40d
- (id)divider;	// 0x2ea611
// converted property getter: - (BOOL)dividerHidden;	// 0x2ea5f1
- (BOOL)dividerVisible;	// 0x2ea601
- (id)hashForDataAtIndex:(long)index;	// 0x2ea6ad
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2eaa45
- (id)identifier;	// 0x2ea6e9
- (id)provider;	// 0x2ea4e9
- (void)removeDivider;	// 0x2ea585
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x2ea5c5
@end
