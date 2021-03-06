/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class CHDPlotArea, CHDLegend, EDWorkbook, EDSheet, OADGraphicProperties, CHDTitle, NSMutableArray, CHDDefaultTextProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x36bbbc75; S=0x36b41131; converted property
@property(retain) id backWallGraphicProperties;	// G=0x36bbbcd5; S=0x36b3b5f5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x36b46b19; S=0x36b34a99; converted property
@property(retain) id defaultTextProperties;	// G=0x36b37de1; S=0x36bbbd11; converted property
@property(assign) int direction;	// G=0x36b40bad; S=0x36b426bd; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x36bbc2bd; S=0x36b4cdc9; converted property
@property(assign) int displayBlankAs;	// G=0x36bbbc9d; S=0x36b34b15; converted property
@property(retain) id externalData;	// G=0x36bbbcc5; S=0x36b6ae05; converted property
@property(retain) id floorGraphicProperties;	// G=0x36bbbcfd; S=0x36b3c365; converted property
@property(retain) id legend;	// G=0x36b40001; S=0x36b3d099; converted property
@property(assign) CGRect logicalBounds;	// G=0x36bbbd55; S=0x36b33401; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x36b4b011; S=0x36bbc2ad; converted property
@property(retain) id plotArea;	// G=0x36b38a15; S=0x36b40f35; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x36bbbc89; S=0x36b34aed; converted property
@property(retain) id sheet;	// G=0x36bbbc65; S=0x36b32c45; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x36bbbce9; S=0x36b3b5b1; converted property
@property(assign) int styleId;	// G=0x36b64eed; S=0x36b32c55; converted property
@property(retain) id title;	// G=0x36b466bd; S=0x36b410ed; converted property
@property(retain) id view3D;	// G=0x36bbbcb1; S=0x36b3d209; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x36b34379
- (id)init;	// 0x36b30501
- (id).cxx_construct;	// 0x36b304fd
- (void)addChild:(id)child;	// 0x36b4969d
- (void)addChildren:(id)children;	// 0x36bbbd9d
// converted property getter: - (id)backWallGraphicProperties;	// 0x36bbbcd5
- (unsigned)categoryCount;	// 0x36bbc221
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x36b46b19
- (id)childAtIndex:(unsigned)index;	// 0x36bbbe21
- (unsigned)childCount;	// 0x36bbbd7d
- (id)children;	// 0x36bbbe41
- (void)dealloc;	// 0x36b4d2dd
- (id)defaultContentFormat;	// 0x36bbc151
- (id)defaultDataLabelFont;	// 0x36bbc015
- (unsigned)defaultFontIndex;	// 0x36b77305
- (id)defaultFontWithResources:(id)resources;	// 0x36bbc191
- (int)defaultLabelPosition;	// 0x36bbc1e1
- (id)defaultSeriesTitleFont;	// 0x36bbc0b1
- (id)defaultTextFont;	// 0x36bbbf91
// converted property getter: - (id)defaultTextProperties;	// 0x36b37de1
- (id)defaultThemeFont;	// 0x36bbbea1
// converted property getter: - (int)direction;	// 0x36b40bad
// converted property getter: - (int)displayBlankAs;	// 0x36bbbc9d
// converted property getter: - (id)externalData;	// 0x36bbbcc5
// converted property getter: - (id)floorGraphicProperties;	// 0x36bbbcfd
- (bool)is3D;	// 0x36b65b25
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x36bbbc75
- (bool)isBinary;	// 0x36b32e8d
// converted property getter: - (bool)isDirectionChanged;	// 0x36bbc2bd
// converted property getter: - (bool)isMSGraph;	// 0x36b4b011
- (bool)isPie;	// 0x36b6a515
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x36bbbc89
// converted property getter: - (id)legend;	// 0x36b40001
// converted property getter: - (CGRect)logicalBounds;	// 0x36bbbd55
- (id)mainType;	// 0x36b46429
// converted property getter: - (id)plotArea;	// 0x36b38a15
- (id)processors;	// 0x36b3e8c5
- (void)replaceChild:(id)child with:(id)with;	// 0x36bbbe51
- (unsigned)seriesCount;	// 0x36b6a565
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x36b41131
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x36b3b5f5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x36b34a99
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x36bbbd11
// converted property setter: - (void)setDirection:(int)direction;	// 0x36b426bd
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x36b4cdc9
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x36b34b15
// converted property setter: - (void)setExternalData:(id)data;	// 0x36b6ae05
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x36b3c365
// converted property setter: - (void)setLegend:(id)legend;	// 0x36b3d099
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x36b33401
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x36bbc2ad
- (void)setParentTextListStyle:(id)style;	// 0x36b6af2d
// converted property setter: - (void)setPlotArea:(id)area;	// 0x36b40f35
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x36b34aed
// converted property setter: - (void)setSheet:(id)sheet;	// 0x36b32c45
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x36b3b5b1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x36b32c55
// converted property setter: - (void)setTitle:(id)title;	// 0x36b410ed
// converted property setter: - (void)setView3D:(id)d;	// 0x36b3d209
// converted property getter: - (id)sheet;	// 0x36bbbc65
// converted property getter: - (id)sideWallGraphicProperties;	// 0x36bbbce9
// converted property getter: - (int)styleId;	// 0x36b64eed
- (id)styleMatrix;	// 0x36b65139
// converted property getter: - (id)title;	// 0x36b466bd
// converted property getter: - (id)view3D;	// 0x36bbbcb1
- (id)workbook;	// 0x36b65185
@end

