/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDPivotField : NSObject {
	int mAxis;	// 4 = 0x4
	bool mCompact;	// 8 = 0x8
	bool mDataField;	// 9 = 0x9
	bool mShowDefaultSubTotal;	// 10 = 0xa
	bool mInsertBlankRow;	// 11 = 0xb
	bool mOutlineItems;	// 12 = 0xc
	bool mShowAllItems;	// 13 = 0xd
	bool mSubtotalTop;	// 14 = 0xe
	unsigned mNumFmtId;	// 16 = 0x10
	EDCollection *mPivotFieldItems;	// 20 = 0x14
}
@property(assign) int axis;	// G=0x34a2ddf5; S=0x349bcb55; converted property
@property(assign) bool compact;	// G=0x34a2dd59; S=0x349bcb65; converted property
@property(assign) bool dataField;	// G=0x34a2dd6d; S=0x349bcb75; converted property
@property(assign) bool insertBlankRow;	// G=0x34a2dd95; S=0x349bcb95; converted property
@property(assign) unsigned numFmtId;	// G=0x34a2dde5; S=0x349bcad1; converted property
@property(assign) bool outlineItems;	// G=0x34a2dda9; S=0x349bcba5; converted property
@property(assign) bool showAllItems;	// G=0x34a2ddbd; S=0x349bcbb5; converted property
@property(assign) bool showDefaultSubTotal;	// G=0x34a2dd81; S=0x349bcb85; converted property
@property(assign) bool subtotalTop;	// G=0x34a2ddd1; S=0x349bcbc5; converted property
+ (id)pivotField;	// 0x349bc9ad
- (id)init;	// 0x349bc9f5
// converted property getter: - (int)axis;	// 0x34a2ddf5
// converted property getter: - (bool)compact;	// 0x34a2dd59
// converted property getter: - (bool)dataField;	// 0x34a2dd6d
- (void)dealloc;	// 0x349bf3a5
// converted property getter: - (bool)insertBlankRow;	// 0x34a2dd95
// converted property getter: - (unsigned)numFmtId;	// 0x34a2dde5
// converted property getter: - (bool)outlineItems;	// 0x34a2dda9
- (id)pivotFieldItems;	// 0x349bcbd5
// converted property setter: - (void)setAxis:(int)axis;	// 0x349bcb55
// converted property setter: - (void)setCompact:(bool)compact;	// 0x349bcb65
// converted property setter: - (void)setDataField:(bool)field;	// 0x349bcb75
// converted property setter: - (void)setInsertBlankRow:(bool)row;	// 0x349bcb95
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x349bcad1
// converted property setter: - (void)setOutlineItems:(bool)items;	// 0x349bcba5
// converted property setter: - (void)setShowAllItems:(bool)items;	// 0x349bcbb5
// converted property setter: - (void)setShowDefaultSubTotal:(bool)total;	// 0x349bcb85
// converted property setter: - (void)setSubtotalTop:(bool)top;	// 0x349bcbc5
// converted property getter: - (bool)showAllItems;	// 0x34a2ddbd
// converted property getter: - (bool)showDefaultSubTotal;	// 0x34a2dd81
// converted property getter: - (bool)subtotalTop;	// 0x34a2ddd1
@end

