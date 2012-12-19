/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableCellProperties, WDText, WDTableRow;

@interface WDTableCell : NSObject {
	int mIndex;	// 4 = 0x4
	WDTableRow *mRow;	// 8 = 0x8
	WDTableCellProperties *mProperties;	// 12 = 0xc
	WDText *mText;	// 16 = 0x10
	BOOL mUseTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL useTrackedProperties;	// G=0x34c93a49; S=0x34c93a59; converted property
- (id)initWithRow:(id)row at:(int)at;	// 0x34acbd65
- (double)cellWidth;	// 0x34addb21
- (void)clearProperties;	// 0x34c93a9d
- (int)compareIndex:(id)index;	// 0x34c93a79
- (void)dealloc;	// 0x34ae2e25
- (int)index;	// 0x34c93a69
- (id)properties;	// 0x34acc129
- (id)row;	// 0x34accd49
// converted property setter: - (void)setUseTrackedProperties:(BOOL)properties;	// 0x34c93a59
- (id)text;	// 0x34accde9
// converted property getter: - (BOOL)useTrackedProperties;	// 0x34c93a49
@end
