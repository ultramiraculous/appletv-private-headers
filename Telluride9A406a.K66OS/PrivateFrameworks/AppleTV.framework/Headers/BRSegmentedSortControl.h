/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, NSMutableArray, NSArray, NSMutableDictionary;

@interface BRSegmentedSortControl : BRControl {
@private
	BRImageControl *_leftEndCapLayer;	// 48 = 0x30
	NSMutableArray *_dividerLayers;	// 52 = 0x34
	NSMutableArray *_contentLayers;	// 56 = 0x38
	NSMutableArray *_textLayers;	// 60 = 0x3c
	BRImageControl *_rightEndCapLayer;	// 64 = 0x40
	NSArray *_segmentNames;	// 68 = 0x44
	NSMutableDictionary *_images;	// 72 = 0x48
	int _selectedSegment;	// 76 = 0x4c
	float _widthRatio;	// 80 = 0x50
}
@property(assign) int selectedSegment;	// G=0x330c208d; S=0x330c1fad; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x330c1add
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x330c1b01
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x330c2865
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x330c2831
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x330c2815
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x330c27ad
- (id)_loadImageFromFile:(id)file;	// 0x330c2931
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x330c27e1
- (void)_updateSegmentState;	// 0x330c2a51
- (id)accessibilityLabel;	// 0x330c2745
- (BOOL)brEventAction:(id)action;	// 0x330c2161
- (void)dealloc;	// 0x330c1ec9
- (void)layoutSubcontrols;	// 0x330c2231
- (int)segmentCount;	// 0x330c1f8d
// converted property getter: - (int)selectedSegment;	// 0x330c208d
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x330c1fad
- (float)visualHorizontalCenter;	// 0x330c209d
@end
