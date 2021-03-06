/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x339d9f85; S=0x339d8ab5; converted property
- (id)init;	// 0x339d87c1
- (id).cxx_construct;	// 0x339d87bd
- (void)addChild:(id)child;	// 0x33a19cd1
- (void)addChildren:(id)children;	// 0x339d9015
- (id)childAtIndex:(unsigned)index;	// 0x339da419
- (unsigned)childCount;	// 0x339d9f65
- (id)children;	// 0x33ba1b85
- (void)dealloc;	// 0x339dd355
- (id)groupProperties;	// 0x33a932fd
// converted property getter: - (CGRect)logicalBounds;	// 0x339d9f85
- (void)removeUnnecessaryOverrides;	// 0x339d9399
- (void)replaceChild:(id)child with:(id)with;	// 0x33ba1b95
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x339d8ab5
- (void)setParentTextListStyle:(id)style;	// 0x339d90e1
@end

