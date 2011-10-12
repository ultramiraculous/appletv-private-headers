/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSArray, NSMutableDictionary, BRImageControl;

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
@property(assign) int selectedSegment;	// G=0x3325538d; S=0x332552ad; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x33254ddd
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x33254e01
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x33255b65
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x33255b31
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x33255b15
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x33255aad
- (id)_loadImageFromFile:(id)file;	// 0x33255c31
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x33255ae1
- (void)_updateSegmentState;	// 0x33255d51
- (id)accessibilityLabel;	// 0x33255a45
- (BOOL)brEventAction:(id)action;	// 0x33255461
- (void)dealloc;	// 0x332551c9
- (void)layoutSubcontrols;	// 0x33255531
- (int)segmentCount;	// 0x3325528d
// converted property getter: - (int)selectedSegment;	// 0x3325538d
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x332552ad
- (float)visualHorizontalCenter;	// 0x3325539d
@end

