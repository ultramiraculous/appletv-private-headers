/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class EDWorkbook, CHDPlotArea, CHDLegend, EDSheet, OADGraphicProperties, NSMutableArray, CHDTitle, CHDDefaultTextProperties, CHDView3D;

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
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x318aff85; S=0x317fa2e5; converted property
@property(retain) id backWallGraphicProperties;	// G=0x318affc5; S=0x317f4aa5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x31800439; S=0x317ec8d9; converted property
@property(retain) id defaultTextProperties;	// G=0x317efae9; S=0x318b0001; converted property
@property(assign) int direction;	// G=0x317f9e2d; S=0x317fba45; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x31885a79; S=0x31858af1; converted property
@property(assign) int displayBlankAs;	// G=0x318affa5; S=0x317ec955; converted property
@property(retain) id externalData;	// G=0x318affb5; S=0x31872cd5; converted property
@property(retain) id floorGraphicProperties;	// G=0x318affed; S=0x317f5425; converted property
@property(retain) id legend;	// G=0x317f91a9; S=0x3184cb21; converted property
@property(assign) CGRect logicalBounds;	// G=0x318b0045; S=0x317eadb5; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x317fb219; S=0x318b05d1; converted property
@property(retain) id plotArea;	// G=0x317f14ad; S=0x317fa1cd; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x318aff95; S=0x317ec92d; converted property
@property(retain) id sheet;	// G=0x318aff75; S=0x317ea5fd; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x318affd9; S=0x317f4a61; converted property
@property(assign) int styleId;	// G=0x3186cd85; S=0x317ea60d; converted property
@property(retain) id title;	// G=0x317ffeb5; S=0x317fa29d; converted property
@property(retain) id view3D;	// G=0x31884d11; S=0x317f6b79; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x317ebec9
- (id)init;	// 0x317e7f99
- (id).cxx_construct;	// 0x317e7f95
- (void)addChild:(id)child;	// 0x31804d11
- (void)addChildren:(id)children;	// 0x318b0081
// converted property getter: - (id)backWallGraphicProperties;	// 0x318affc5
- (unsigned)categoryCount;	// 0x31885a89
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x31800439
- (id)childAtIndex:(unsigned)index;	// 0x318b0105
- (unsigned)childCount;	// 0x318b0061
- (id)children;	// 0x318b0125
- (void)dealloc;	// 0x3180556d
- (id)defaultContentFormat;	// 0x318b0501
- (id)defaultDataLabelFont;	// 0x318b03bd
- (unsigned)defaultFontIndex;	// 0x3185f0c5
- (id)defaultFontWithResources:(id)resources;	// 0x318b0541
- (int)defaultLabelPosition;	// 0x318b0591
- (id)defaultSeriesTitleFont;	// 0x318b045d
- (id)defaultTextFont;	// 0x318b0339
// converted property getter: - (id)defaultTextProperties;	// 0x317efae9
- (id)defaultThemeFont;	// 0x318b0181
// converted property getter: - (int)direction;	// 0x317f9e2d
// converted property getter: - (int)displayBlankAs;	// 0x318affa5
// converted property getter: - (id)externalData;	// 0x318affb5
// converted property getter: - (id)floorGraphicProperties;	// 0x318affed
- (bool)is3D;	// 0x3186d9e5
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x318aff85
- (bool)isBinary;	// 0x317ea84d
// converted property getter: - (bool)isDirectionChanged;	// 0x31885a79
// converted property getter: - (bool)isMSGraph;	// 0x317fb219
- (bool)isPie;	// 0x318723d5
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x318aff95
// converted property getter: - (id)legend;	// 0x317f91a9
// converted property getter: - (CGRect)logicalBounds;	// 0x318b0045
- (id)mainType;	// 0x317ffc29
// converted property getter: - (id)plotArea;	// 0x317f14ad
- (id)processors;	// 0x317f8455
- (void)replaceChild:(id)child with:(id)with;	// 0x318b0135
- (unsigned)seriesCount;	// 0x31872425
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x317fa2e5
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x317f4aa5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x317ec8d9
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x318b0001
// converted property setter: - (void)setDirection:(int)direction;	// 0x317fba45
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x31858af1
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x317ec955
// converted property setter: - (void)setExternalData:(id)data;	// 0x31872cd5
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x317f5425
// converted property setter: - (void)setLegend:(id)legend;	// 0x3184cb21
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x317eadb5
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x318b05d1
- (void)setParentTextListStyle:(id)style;	// 0x31805419
// converted property setter: - (void)setPlotArea:(id)area;	// 0x317fa1cd
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x317ec92d
// converted property setter: - (void)setSheet:(id)sheet;	// 0x317ea5fd
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x317f4a61
// converted property setter: - (void)setStyleId:(int)anId;	// 0x317ea60d
// converted property setter: - (void)setTitle:(id)title;	// 0x317fa29d
// converted property setter: - (void)setView3D:(id)d;	// 0x317f6b79
// converted property getter: - (id)sheet;	// 0x318aff75
// converted property getter: - (id)sideWallGraphicProperties;	// 0x318affd9
// converted property getter: - (int)styleId;	// 0x3186cd85
- (id)styleMatrix;	// 0x3186cfe9
// converted property getter: - (id)title;	// 0x317ffeb5
// converted property getter: - (id)view3D;	// 0x31884d11
- (id)workbook;	// 0x3186d035
@end

