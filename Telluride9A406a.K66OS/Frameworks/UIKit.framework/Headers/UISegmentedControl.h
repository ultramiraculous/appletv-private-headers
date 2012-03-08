/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UISegment, UIColor, NSMutableArray;

@interface UISegmentedControl : UIControl <NSCoding> {
@private
	NSMutableArray *_segments;	// 72 = 0x48
	int _selectedSegment;	// 76 = 0x4c
	int _highlightedSegment;	// 80 = 0x50
	UIView *_removedSegment;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	UIColor *_tintColor;	// 92 = 0x5c
	int _barStyle;	// 96 = 0x60
	id _appearanceStorage;	// 100 = 0x64
	UIView *_backgroundBarView;	// 104 = 0x68
	float _enabledAlpha;	// 108 = 0x6c
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned showsDisclosure : 1;
		unsigned delegateSelectedSegmentChanged : 1;
		unsigned delegateDisclosureButtonClicked : 1;
		unsigned delegateAlwaysNotifiesDelegateOfSegmentClicks : 1;
		unsigned momentaryClick : 1;
		unsigned dontAlwaysToggleForTwoSegments : 1;
		unsigned tracking : 1;
		unsigned mouseInside : 1;
		unsigned autosizeToFitSegments : 1;
		unsigned isSizingToFit : 1;
		unsigned autosizeText : 1;
		unsigned transparentBackground : 1;
		unsigned useProportionalWidthSegments : 1;
		unsigned translucentBackground : 1;
	} _segmentedControlFlags;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL apportionsSegmentWidthsByContent;	// G=0x358657c5; S=0x358657dd; 
@property(assign) int barStyle;	// G=0x35865ead; S=0x35726189; converted property
@property(assign) int controlSize;	// G=0x35865d79; S=0x3573c791; converted property
@property(assign, nonatomic, getter=isMomentary) BOOL momentary;	// G=0x35865dad; S=0x35865dc1; @dynamic
@property(readonly, assign, nonatomic) unsigned numberOfSegments;	// G=0x35866691; @dynamic
@property(retain, nonatomic) UISegment *removedSegment;	// G=0x35865735; S=0x358656f5; 
@property(assign) int segmentControlStyle;	// G=0x35865d8d; S=0x35865d9d; converted property
@property(assign, nonatomic) int segmentedControlStyle;	// G=0x35865d65; S=0x3573c259; @dynamic
@property(assign) int selectedSegment;	// G=0x357bbed1; S=0x35867c0d; converted property
@property(assign, nonatomic) int selectedSegmentIndex;	// G=0x357bbee1; S=0x35725bdd; @dynamic
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3573c8f5; S=0x35726281; @synthesize=_tintColor
@property(assign) BOOL transparentBackground;	// G=0x35865f21; S=0x35727d49; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3586576d
+ (float)defaultHeight;	// 0x3586785d
+ (float)defaultHeightForStyle:(int)style;	// 0x3574215d
+ (float)defaultHeightForStyle:(int)style size:(int)size;	// 0x356e0625
- (id)initWithCoder:(id)coder;	// 0x35865815
- (id)initWithFrame:(CGRect)frame;	// 0x35722bc5
- (id)initWithFrame:(CGRect)frame withStyle:(int)style withItems:(id)items;	// 0x35722add
- (id)initWithItems:(id)items;	// 0x3573bd8d
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3573df81
- (float)_barHeight;	// 0x3573c1b5
- (void)_clearSelectedSegment;	// 0x358677cd
- (void)_commonSegmentedControlInit;	// 0x35722d1d
- (void)_createSegmentAtIndex:(int)index position:(unsigned)position withInfo:(id)info;	// 0x35723031
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x35727769
- (void)_insertSegment:(int)segment withInfo:(id)info animated:(BOOL)animated;	// 0x35726ead
- (BOOL)_isInMiniBar;	// 0x35726991
- (id)_optionsBackgroundImage;	// 0x3586705d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35865c15
- (void)_removeSegmentAnimationFinished:(id)finished finished:(id)finished2 context:(void *)context;	// 0x35867815
- (void)_resetForAppearanceChange;	// 0x3573c2c5
- (void)_setAlpha:(float)alpha remember:(BOOL)remember;	// 0x35866ea1
- (void)_setAppearanceIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x35865cdd
- (void)_setAutosizeText:(BOOL)text;	// 0x35865e91
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3586707d
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x358673f9
- (void)_setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x3586719d
- (void)_setEnabled:(BOOL)enabled forced:(BOOL)forced;	// 0x35866cb9
- (void)_setOptionsBackgroundImage:(id)image;	// 0x35866f3d
- (void)_setSegmentedControlAppearance:(XXStruct_wXTbsB *)appearance;	// 0x35865c69
- (void)_setSelectedSegmentIndex:(int)index notify:(BOOL)notify;	// 0x35725bf1
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x358672dd
- (void)_setTranslucentOptionsBackground:(BOOL)background;	// 0x35865ebd
- (BOOL)_shouldSelectSegmentAtIndex:(int)index;	// 0x35725f45
- (void)_updateOptionsBackground;	// 0x35722d6d
- (void)addSegmentWithTitle:(id)title;	// 0x35867ac1
// declared property getter: - (BOOL)apportionsSegmentWidthsByContent;	// 0x358657c5
- (id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x35867171
// converted property getter: - (int)barStyle;	// 0x35865ead
- (CGSize)contentOffsetForSegment:(unsigned)segment;	// 0x35867bc5
- (CGSize)contentOffsetForSegmentAtIndex:(unsigned)index;	// 0x358665c9
- (UIOffset)contentPositionAdjustmentForSegmentType:(int)segmentType barMetrics:(int)metrics;	// 0x35867765
// converted property getter: - (int)controlSize;	// 0x35865d79
- (void)dealloc;	// 0x357dc0a5
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x3586729d
- (void)encodeWithCoder:(id)coder;	// 0x35865a69
- (void)highlightSegment:(int)segment;	// 0x357ef6f9
- (id)imageForSegment:(unsigned)segment;	// 0x35867b85
- (id)imageForSegmentAtIndex:(unsigned)index;	// 0x3586643d
- (id)infoViewForSegment:(int)segment;	// 0x35867829
- (void)insertSegment:(unsigned)segment withImage:(id)image animated:(BOOL)animated;	// 0x35867b21
- (void)insertSegment:(unsigned)segment withTitle:(id)title animated:(BOOL)animated;	// 0x35867afd
- (void)insertSegmentWithImage:(id)image atIndex:(unsigned)index animated:(BOOL)animated;	// 0x35865f39
- (void)insertSegmentWithTitle:(id)title atIndex:(unsigned)index animated:(BOOL)animated;	// 0x35726e89
- (BOOL)isEnabledForSegment:(unsigned)segment;	// 0x35867bf5
- (BOOL)isEnabledForSegmentAtIndex:(unsigned)index;	// 0x35866631
// declared property getter: - (BOOL)isMomentary;	// 0x35865dad
- (void)layoutSubviews;	// 0x357263b5
- (void)mouseDown:(GSEventRef)down;	// 0x358666cd
- (void)mouseDragged:(GSEventRef)dragged;	// 0x358669fd
- (void)mouseUp:(GSEventRef)up;	// 0x35866af1
// declared property getter: - (unsigned)numberOfSegments;	// 0x35866691
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x358669a1
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x357ef94d
- (void)removeAllSegments;	// 0x35726dad
- (void)removeSegment:(unsigned)segment animated:(BOOL)animated;	// 0x35867b45
- (void)removeSegmentAtIndex:(unsigned)index animated:(BOOL)animated;	// 0x35865f5d
// declared property getter: - (id)removedSegment;	// 0x35865735
- (id)scriptingInfoWithChildren;	// 0x35867c1d
// converted property getter: - (int)segmentControlStyle;	// 0x35865d8d
// declared property getter: - (int)segmentedControlStyle;	// 0x35865d65
- (void)selectSegment:(int)segment;	// 0x35867ab1
// converted property getter: - (int)selectedSegment;	// 0x357bbed1
// declared property getter: - (int)selectedSegmentIndex;	// 0x357bbee1
- (void)setAlpha:(float)alpha;	// 0x35727dd5
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)segmentClicks;	// 0x358679f9
- (void)setAlwaysToggleForTwoSegments:(BOOL)twoSegments;	// 0x35865e65
// declared property setter: - (void)setApportionsSegmentWidthsByContent:(BOOL)content;	// 0x358657dd
- (void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35867139
// converted property setter: - (void)setBarStyle:(int)style;	// 0x35726189
- (void)setContentOffset:(CGSize)offset forSegment:(unsigned)segment;	// 0x35867bb5
- (void)setContentOffset:(CGSize)offset forSegmentAtIndex:(unsigned)index;	// 0x35866535
- (void)setContentPositionAdjustment:(UIOffset)adjustment forSegmentType:(int)segmentType barMetrics:(int)metrics;	// 0x35867549
// converted property setter: - (void)setControlSize:(int)size;	// 0x3573c791
- (void)setDelegate:(id)delegate;	// 0x35867865
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;	// 0x35867265
- (void)setEnabled:(BOOL)enabled;	// 0x35866e8d
- (void)setEnabled:(BOOL)enabled forSegment:(unsigned)segment;	// 0x35867be5
- (void)setEnabled:(BOOL)enabled forSegmentAtIndex:(unsigned)index;	// 0x357eefa5
- (void)setFrame:(CGRect)frame;	// 0x35722c4d
- (void)setImage:(id)image forSegment:(unsigned)segment;	// 0x35867b75
- (void)setImage:(id)image forSegmentAtIndex:(unsigned)index;	// 0x358663ad
- (void)setImagePadding:(CGSize)padding forSegment:(unsigned)segment;	// 0x35867a1d
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x35865dc1
- (void)setMomentaryClick:(BOOL)click;	// 0x358679e9
// declared property setter: - (void)setRemovedSegment:(id)segment;	// 0x358656f5
// converted property setter: - (void)setSegmentControlStyle:(int)style;	// 0x35865d9d
// declared property setter: - (void)setSegmentedControlStyle:(int)style;	// 0x3573c259
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x35867c0d
// declared property setter: - (void)setSelectedSegmentIndex:(int)index;	// 0x35725bdd
- (void)setShowsDisclosure:(BOOL)disclosure;	// 0x358678ed
// declared property setter: - (void)setTintColor:(id)color;	// 0x35726281
- (void)setTitle:(id)title forSegment:(unsigned)segment;	// 0x35867b55
- (void)setTitle:(id)title forSegmentAtIndex:(unsigned)index;	// 0x35866281
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x358673a9
// converted property setter: - (void)setTransparentBackground:(BOOL)background;	// 0x35727d49
- (void)setWidth:(float)width forSegment:(unsigned)segment;	// 0x35867b95
- (void)setWidth:(float)width forSegmentAtIndex:(unsigned)index;	// 0x3573c699
- (BOOL)shouldTrack;	// 0x357bbe85
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3573beed
- (void)sizeToFit;	// 0x3573be9d
// declared property getter: - (id)tintColor;	// 0x3573c8f5
- (id)titleForSegment:(unsigned)segment;	// 0x35867b65
- (id)titleForSegmentAtIndex:(unsigned)index;	// 0x35866311
- (id)titleTextAttributesForState:(unsigned)state;	// 0x358673d9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x357bbaf5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x357bbefd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35866bb1
// converted property getter: - (BOOL)transparentBackground;	// 0x35865f21
- (void)updateForMiniBarState:(BOOL)miniBarState;	// 0x3573c775
- (BOOL)useBlockyMagnificationInClassic;	// 0x35866cb5
- (float)widthForSegment:(unsigned)segment;	// 0x35867ba5
- (float)widthForSegmentAtIndex:(unsigned)index;	// 0x358664d9
@end
