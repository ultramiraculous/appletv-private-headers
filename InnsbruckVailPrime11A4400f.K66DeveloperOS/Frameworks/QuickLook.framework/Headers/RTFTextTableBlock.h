/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTFTextBlock.h"

@class RTFTextTable;

__attribute__((visibility("hidden")))
@interface RTFTextTableBlock : RTFTextBlock {
	RTFTextTable *_table;	// 32 = 0x20
	int _rowNum;	// 36 = 0x24
	int _colNum;	// 40 = 0x28
	int _rowSpan;	// 44 = 0x2c
	int _colSpan;	// 48 = 0x30
	void *_tableBlockPrimary;	// 52 = 0x34
	void *_tableBlockSecondary;	// 56 = 0x38
}
@property(readonly, assign) int rowSpan;	// G=0x2f304391; converted property
@property(readonly, retain) RTFTextTable *table;	// G=0x2f304371; converted property
- (id)initWithTable:(id)table startingRow:(int)row rowSpan:(int)span startingColumn:(int)column columnSpan:(int)span5;	// 0x2f3041b1
- (void)_setColumnSpan:(int)span;	// 0x2f3043d1
- (void)_setRowSpan:(int)span;	// 0x2f3043c1
- (int)columnSpan;	// 0x2f3043b1
- (id)copyWithZone:(NSZone *)zone;	// 0x2f3042c5
- (void)dealloc;	// 0x2f304279
// converted property getter: - (int)rowSpan;	// 0x2f304391
- (int)startingColumn;	// 0x2f3043a1
- (int)startingRow;	// 0x2f304381
// converted property getter: - (id)table;	// 0x2f304371
@end
