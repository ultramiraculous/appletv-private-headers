/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EXOfficeArtState, CHDChart, CHDSeries, OADParagraphProperties, CHDChartType, EDResources, OCPPackagePart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXState : NSObject {
@private
	EXOfficeArtState *mDrawingState;	// 4 = 0x4
	CHDChart *mChart;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
	OCPPackagePart *mChartPart;	// 16 = 0x10
	CHDChartType *mCurrentChartType;	// 20 = 0x14
	CHDSeries *mCurrentSeries;	// 24 = 0x18
	OADParagraphProperties *mDefaultTextProperties;	// 28 = 0x1c
	BOOL mDefaultTextPropertiesHaveExplicitFontSize;	// 32 = 0x20
	id<CHAutoStyling> mAutoStyling;	// 36 = 0x24
}
@property(retain) id chart;	// G=0x32ca2919; S=0x32ca0ed9; converted property
@property(retain) id chartPart;	// G=0x32ca0ec9; S=0x32ca0c75; converted property
@property(retain) id currentChartType;	// G=0x32ca3c85; S=0x32ca3271; converted property
@property(retain) id currentSeries;	// G=0x32d10755; S=0x32ca3ce9; converted property
@property(retain) id defaultTextProperties;	// G=0x32ca18d1; S=0x32ca1319; converted property
@property(retain) id resources;	// G=0x32ca12f9; S=0x32ca0cc1; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x32ca0c25
- (id)autoStyling;	// 0x32ca1ef5
// converted property getter: - (id)chart;	// 0x32ca2919
// converted property getter: - (id)chartPart;	// 0x32ca0ec9
// converted property getter: - (id)currentChartType;	// 0x32ca3c85
// converted property getter: - (id)currentSeries;	// 0x32d10755
- (void)dealloc;	// 0x32ca67fd
// converted property getter: - (id)defaultTextProperties;	// 0x32ca18d1
- (id)drawingState;	// 0x32ca0f4d
- (id)exState;	// 0x32ca4505
- (void)popTitleTextProperties;	// 0x32cb5955
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x32cb5521
// converted property getter: - (id)resources;	// 0x32ca12f9
// converted property setter: - (void)setChart:(id)chart;	// 0x32ca0ed9
// converted property setter: - (void)setChartPart:(id)part;	// 0x32ca0c75
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x32ca3271
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x32ca3ce9
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x32ca1319
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x32ca1309
// converted property setter: - (void)setResources:(id)resources;	// 0x32ca0cc1
@end

