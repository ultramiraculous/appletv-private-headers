/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray, NSMutableArray, NSMutableDictionary, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRSegmentedSortControl : BRControl {
	BRImageControl *_leftEndCapLayer;	// 80 = 0x50
	NSMutableArray *_dividerLayers;	// 84 = 0x54
	NSMutableArray *_contentLayers;	// 88 = 0x58
	NSMutableArray *_textLayers;	// 92 = 0x5c
	BRImageControl *_rightEndCapLayer;	// 96 = 0x60
	NSArray *_segmentNames;	// 100 = 0x64
	NSMutableDictionary *_images;	// 104 = 0x68
	int _selectedSegment;	// 108 = 0x6c
	float _widthRatio;	// 112 = 0x70
}
@property(assign) int selectedSegment;	// G=0x2f32a1; S=0x2f31c1; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x2f2d59
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x2f2d7d
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x2f3a75
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x2f3a45
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x2f3a29
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x2f39c9
- (id)_loadImageFromFile:(id)file;	// 0x2f3b41
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x2f39f9
- (void)_updateSegmentState;	// 0x2f3c49
- (id)accessibilityLabel;	// 0x2f3965
- (BOOL)brEventAction:(id)action;	// 0x2f3375
- (void)dealloc;	// 0x2f30d9
- (void)layoutSubcontrols;	// 0x2f3441
- (int)segmentCount;	// 0x2f31a1
// converted property getter: - (int)selectedSegment;	// 0x2f32a1
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x2f31c1
- (float)visualHorizontalCenter;	// 0x2f32b1
@end

