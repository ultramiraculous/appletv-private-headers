/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
	CGRect spacer;	// 4 = 0x4
	int type;	// 20 = 0x14
	unsigned ordinalPrefixLength;	// 24 = 0x18
	unsigned ordinalSuffixLength;	// 28 = 0x1c
	CPListItem *parentItem;	// 32 = 0x20
	CFArrayRef items;	// 36 = 0x24
}
@property(assign, nonatomic) unsigned ordinalPrefixLength;	// G=0x304c8f65; S=0x304c8f75; @synthesize
@property(assign, nonatomic) unsigned ordinalSuffixLength;	// G=0x304c8f45; S=0x304c8f55; @synthesize
@property(retain, nonatomic) CPListItem *parentItem;	// G=0x304c8f35; S=0x304c9045; @synthesize
@property(assign, nonatomic) CGRect spacer;	// G=0x304c8fa5; S=0x304c8fc9; @synthesize
@property(assign, nonatomic) int type;	// G=0x304c8f85; S=0x304c8f95; @synthesize
- (id)init;	// 0x304c8fed
- (void)addItem:(id)item;	// 0x304c90cd
- (BOOL)containsParagraph:(id)paragraph;	// 0x304c906d
- (void)dealloc;	// 0x304c9129
- (void)dispose;	// 0x304c91c5
- (void)finalize;	// 0x304c9185
- (BOOL)isMultilevel;	// 0x304c8f31
- (id)itemAtIndex:(unsigned)index;	// 0x304c9101
- (unsigned)itemCount;	// 0x304c9115
// declared property getter: - (unsigned)ordinalPrefixLength;	// 0x304c8f65
// declared property getter: - (unsigned)ordinalSuffixLength;	// 0x304c8f45
// declared property getter: - (id)parentItem;	// 0x304c8f35
// declared property setter: - (void)setOrdinalPrefixLength:(unsigned)length;	// 0x304c8f75
// declared property setter: - (void)setOrdinalSuffixLength:(unsigned)length;	// 0x304c8f55
// declared property setter: - (void)setParentItem:(id)item;	// 0x304c9045
// declared property setter: - (void)setSpacer:(CGRect)spacer;	// 0x304c8fc9
// declared property setter: - (void)setType:(int)type;	// 0x304c8f95
// declared property getter: - (CGRect)spacer;	// 0x304c8fa5
// declared property getter: - (int)type;	// 0x304c8f85
@end

