/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDReference, EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	bool mHidden;	// 16 = 0x10
	EDReference *mRange;	// 20 = 0x14
	unsigned mStyleIndex;	// 24 = 0x18
	unsigned char mOutlineLevel;	// 28 = 0x1c
}
@property(assign, getter=isHidden) bool hidden;	// G=0x34c75a01; S=0x34c6b329; converted property
@property(assign) unsigned char outlineLevel;	// G=0x34dcb1d9; S=0x34c6b49d; converted property
@property(retain) id range;	// G=0x34c759f1; S=0x34c6b445; converted property
@property(retain) id style;	// G=0x34c78e5d; S=0x34dcb239; converted property
@property(assign) unsigned styleIndex;	// G=0x34d78bfd; S=0x34c6b48d; converted property
@property(assign) double width;	// G=0x34c770dd; S=0x34d56e8d; converted property
@property(assign) int widthInXlUnits;	// G=0x34c7716d; S=0x34c6b319; converted property
+ (id)columnInfoWithResources:(id)resources worksheet:(id)worksheet;	// 0x34dcb1e9
- (id)initWithResources:(id)resources worksheet:(id)worksheet;	// 0x34c6b275
- (id)copyWithZone:(NSZone *)zone;	// 0x34dcb281
- (void)dealloc;	// 0x34c8f541
// converted property getter: - (bool)isHidden;	// 0x34c75a01
- (unsigned)key;	// 0x34c6b4dd
// converted property getter: - (unsigned char)outlineLevel;	// 0x34dcb1d9
// converted property getter: - (id)range;	// 0x34c759f1
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x34c6b329
// converted property setter: - (void)setOutlineLevel:(unsigned char)level;	// 0x34c6b49d
// converted property setter: - (void)setRange:(id)range;	// 0x34c6b445
- (void)setRangeWithFirstColumn:(int)firstColumn lastColumn:(int)column;	// 0x34c6b339
// converted property setter: - (void)setStyle:(id)style;	// 0x34dcb239
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x34c6b48d
// converted property setter: - (void)setWidth:(double)width;	// 0x34d56e8d
// converted property setter: - (void)setWidthInXlUnits:(int)xlUnits;	// 0x34c6b319
// converted property getter: - (id)style;	// 0x34c78e5d
// converted property getter: - (unsigned)styleIndex;	// 0x34d78bfd
// converted property getter: - (double)width;	// 0x34c770dd
// converted property getter: - (int)widthInXlUnits;	// 0x34c7716d
@end

