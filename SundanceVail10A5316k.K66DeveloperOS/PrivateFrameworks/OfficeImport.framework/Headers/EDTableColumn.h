/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDResources;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mHeaderRowDxfIndex;	// 8 = 0x8
	unsigned mTotalsRowDxfIndex;	// 12 = 0xc
	unsigned mDataAreaDxfIndex;	// 16 = 0x10
	EDString *mName;	// 20 = 0x14
	EDString *mUniqueName;	// 24 = 0x18
	EDString *mTotalsRowLabel;	// 28 = 0x1c
}
@property(retain) id dataAreaDxf;	// G=0x31231a91; S=0x31231ad9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x31231c19; S=0x311ac211; converted property
@property(retain) id headerRowDxf;	// G=0x31231971; S=0x312319b9; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x31231bd9; S=0x31231be9; converted property
@property(retain) id name;	// G=0x31231b21; S=0x3119dd85; converted property
@property(retain) id totalsRowDxf;	// G=0x31231a01; S=0x31231a49; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x31231bf9; S=0x31231c09; converted property
@property(retain) id totalsRowLabel;	// G=0x31231b85; S=0x31231b95; converted property
@property(retain) id uniqueName;	// G=0x31231b31; S=0x31231b41; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x31231925
- (id)initWithResources:(id)resources;	// 0x3119dd01
// converted property getter: - (id)dataAreaDxf;	// 0x31231a91
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x31231c19
- (void)dealloc;	// 0x311a5a25
// converted property getter: - (id)headerRowDxf;	// 0x31231971
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x31231bd9
// converted property getter: - (id)name;	// 0x31231b21
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x31231ad9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x311ac211
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x312319b9
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x31231be9
// converted property setter: - (void)setName:(id)name;	// 0x3119dd85
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x31231a49
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x31231c09
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x31231b95
// converted property setter: - (void)setUniqueName:(id)name;	// 0x31231b41
// converted property getter: - (id)totalsRowDxf;	// 0x31231a01
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x31231bf9
// converted property getter: - (id)totalsRowLabel;	// 0x31231b85
// converted property getter: - (id)uniqueName;	// 0x31231b31
@end

