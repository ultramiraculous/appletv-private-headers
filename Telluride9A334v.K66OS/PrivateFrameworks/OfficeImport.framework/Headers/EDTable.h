/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReference, EDResources, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mStyleIndex;	// 8 = 0x8
	unsigned mHeaderRowDxfIndex;	// 12 = 0xc
	unsigned mTotalsRowDxfIndex;	// 16 = 0x10
	unsigned mDataAreaDxfIndex;	// 20 = 0x14
	unsigned mHeaderRowBorderDxfIndex;	// 24 = 0x18
	unsigned mTotalsRowBorderDxfIndex;	// 28 = 0x1c
	unsigned mDataAreaBorderDxfIndex;	// 32 = 0x20
	unsigned mTableBorderDxfIndex;	// 36 = 0x24
	NSString *mName;	// 40 = 0x28
	NSString *mDisplayName;	// 44 = 0x2c
	EDReference *mTableRange;	// 48 = 0x30
	NSString *mStyleName;	// 52 = 0x34
	unsigned mHeaderRowCount;	// 56 = 0x38
	unsigned mTotalsRowCount;	// 60 = 0x3c
	bool mShowFirstColumn;	// 64 = 0x40
	bool mShowLastColumn;	// 65 = 0x41
	bool mShowRowStripes;	// 66 = 0x42
	bool mShowColumnStripes;	// 67 = 0x43
	EDCollection *mTableColumns;	// 68 = 0x44
}
@property(retain) id dataAreaBorderDxf;	// G=0x357338a1; S=0x35733859; converted property
@property(assign) unsigned dataAreaBorderDxfIndex;	// G=0x35733795; S=0x357337a5; converted property
@property(retain) id dataAreaDxf;	// G=0x35733a51; S=0x35733a09; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x35733765; S=0x356f07f5; converted property
@property(retain) id displayName;	// G=0x357336d5; S=0x356c079d; converted property
@property(retain) id headerRowBorderDxf;	// G=0x357339c1; S=0x35733979; converted property
@property(assign) unsigned headerRowBorderDxfIndex;	// G=0x35733775; S=0x356f07d5; converted property
@property(assign) unsigned headerRowCount;	// G=0x356d9ae9; S=0x357336f5; converted property
@property(retain) id headerRowDxf;	// G=0x35733b71; S=0x35733b29; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x35733735; S=0x356f07b9; converted property
@property(retain) id name;	// G=0x357336c5; S=0x356c0755; converted property
@property(assign) bool showColumnStripes;	// G=0x356da5b9; S=0x356c0ba9; converted property
@property(assign) bool showFirstColumn;	// G=0x356da599; S=0x356c0b79; converted property
@property(assign) bool showLastColumn;	// G=0x356da5a9; S=0x356c0b89; converted property
@property(assign) bool showRowStripes;	// G=0x356dbb55; S=0x356c0b99; converted property
@property(retain) id style;	// G=0x356d97fd; S=0x35733bb9; converted property
@property(assign) unsigned styleIndex;	// G=0x35733715; S=0x35733725; converted property
@property(retain) id styleName;	// G=0x357336e5; S=0x356d9325; converted property
@property(retain) id tableBorderDxf;	// G=0x356d98d5; S=0x35733811; converted property
@property(assign) unsigned tableBorderDxfIndex;	// G=0x357337b5; S=0x356c082d; converted property
@property(retain) id tableRange;	// G=0x356d99fd; S=0x356c07e5; converted property
@property(retain) id totalsRowBorderDxf;	// G=0x35733931; S=0x357338e9; converted property
@property(assign) unsigned totalsRowBorderDxfIndex;	// G=0x35733785; S=0x356f07e5; converted property
@property(assign) unsigned totalsRowCount;	// G=0x356d9af9; S=0x35733705; converted property
@property(retain) id totalsRowDxf;	// G=0x35733ae1; S=0x35733a99; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x35733745; S=0x35733755; converted property
+ (id)tableWithResources:(id)resources;	// 0x357337c5
- (id)initWithResources:(id)resources;	// 0x356c05e9
// converted property getter: - (id)dataAreaBorderDxf;	// 0x357338a1
// converted property getter: - (unsigned)dataAreaBorderDxfIndex;	// 0x35733795
// converted property getter: - (id)dataAreaDxf;	// 0x35733a51
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x35733765
- (void)dealloc;	// 0x356c8c79
// converted property getter: - (id)displayName;	// 0x357336d5
// converted property getter: - (id)headerRowBorderDxf;	// 0x357339c1
// converted property getter: - (unsigned)headerRowBorderDxfIndex;	// 0x35733775
// converted property getter: - (unsigned)headerRowCount;	// 0x356d9ae9
// converted property getter: - (id)headerRowDxf;	// 0x35733b71
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x35733735
// converted property getter: - (id)name;	// 0x357336c5
// converted property setter: - (void)setDataAreaBorderDxf:(id)dxf;	// 0x35733859
// converted property setter: - (void)setDataAreaBorderDxfIndex:(unsigned)index;	// 0x357337a5
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x35733a09
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x356f07f5
// converted property setter: - (void)setDisplayName:(id)name;	// 0x356c079d
// converted property setter: - (void)setHeaderRowBorderDxf:(id)dxf;	// 0x35733979
// converted property setter: - (void)setHeaderRowBorderDxfIndex:(unsigned)index;	// 0x356f07d5
// converted property setter: - (void)setHeaderRowCount:(unsigned)count;	// 0x357336f5
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x35733b29
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x356f07b9
// converted property setter: - (void)setName:(id)name;	// 0x356c0755
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x356c0ba9
// converted property setter: - (void)setShowFirstColumn:(bool)column;	// 0x356c0b79
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x356c0b89
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x356c0b99
// converted property setter: - (void)setStyle:(id)style;	// 0x35733bb9
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x35733725
// converted property setter: - (void)setStyleName:(id)name;	// 0x356d9325
// converted property setter: - (void)setTableBorderDxf:(id)dxf;	// 0x35733811
// converted property setter: - (void)setTableBorderDxfIndex:(unsigned)index;	// 0x356c082d
// converted property setter: - (void)setTableRange:(id)range;	// 0x356c07e5
// converted property setter: - (void)setTotalsRowBorderDxf:(id)dxf;	// 0x357338e9
// converted property setter: - (void)setTotalsRowBorderDxfIndex:(unsigned)index;	// 0x356f07e5
// converted property setter: - (void)setTotalsRowCount:(unsigned)count;	// 0x35733705
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x35733a99
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x35733755
// converted property getter: - (bool)showColumnStripes;	// 0x356da5b9
// converted property getter: - (bool)showFirstColumn;	// 0x356da599
// converted property getter: - (bool)showLastColumn;	// 0x356da5a9
// converted property getter: - (bool)showRowStripes;	// 0x356dbb55
// converted property getter: - (id)style;	// 0x356d97fd
// converted property getter: - (unsigned)styleIndex;	// 0x35733715
// converted property getter: - (id)styleName;	// 0x357336e5
// converted property getter: - (id)tableBorderDxf;	// 0x356d98d5
// converted property getter: - (unsigned)tableBorderDxfIndex;	// 0x357337b5
- (id)tableColumns;	// 0x356c083d
// converted property getter: - (id)tableRange;	// 0x356d99fd
// converted property getter: - (id)totalsRowBorderDxf;	// 0x35733931
// converted property getter: - (unsigned)totalsRowBorderDxfIndex;	// 0x35733785
// converted property getter: - (unsigned)totalsRowCount;	// 0x356d9af9
// converted property getter: - (id)totalsRowDxf;	// 0x35733ae1
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x35733745
@end

