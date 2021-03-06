/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVRoundProgressView, NSString, ATVProgressBarView, BRAsyncImageControl, NSMutableSet, BRWaitSpinnerControl, BRMarqueeTextControl, NSAttributedString, NSNumber;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	NSAttributedString *_detailedText;	// 92 = 0x5c
	NSAttributedString *_rightJustifiedText;	// 96 = 0x60
	BRMarqueeTextControl *_scrollingTextControl;	// 100 = 0x64
	BRAsyncImageControl *_imageControl;	// 104 = 0x68
	BRWaitSpinnerControl *_spinner;	// 108 = 0x6c
	ATVRoundProgressView *_progressAccessory;	// 112 = 0x70
	ATVProgressBarView *_progressBar;	// 116 = 0x74
	BRControl *_flipContainer;	// 120 = 0x78
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 124 = 0x7c
	NSMutableSet *_accessories;	// 128 = 0x80
	BOOL _dimmed;	// 132 = 0x84
	BOOL _disableAccessoryHighlighting;	// 133 = 0x85
	BOOL _forceOrdinalLayout;	// 134 = 0x86
	BOOL _dotsTrailImage;	// 135 = 0x87
	BOOL _forceBlueDotLayout;	// 136 = 0x88
	BOOL _forceCenteredIconLayout;	// 137 = 0x89
	BOOL _forceMenuArrowLayout;	// 138 = 0x8a
	BOOL _usingDefaultTextAttributes;	// 139 = 0x8b
	BOOL _iconsTrailText;	// 140 = 0x8c
	float _forcedHeight;	// 144 = 0x90
	float _forcedContentHeight;	// 148 = 0x94
	NSNumber *_ordinal;	// 152 = 0x98
	int _largestOrdinal;	// 156 = 0x9c
	float _imageInset;	// 160 = 0xa0
	float _imageHeight;	// 164 = 0xa4
	float _textPadding;	// 168 = 0xa8
	float _leftMargin;	// 172 = 0xac
	float _rightMargin;	// 176 = 0xb0
	float _imageAspectRatio;	// 180 = 0xb4
	BOOL _colorSet;	// 184 = 0xb8
	BOOL _preferTextScroller;	// 185 = 0xb9
	NSString *_accessibilityText;	// 188 = 0xbc
	float _progress;	// 192 = 0xc0
}
@property(copy, nonatomic) NSString *accessibilityText;	// G=0x3afac9; S=0x3b2505; @synthesize=_accessibilityText
@property(retain) NSAttributedString *detailedText;	// G=0x3af9dd; S=0x3af8a5; converted property
@property(assign) BOOL dimmed;	// G=0x3b095d; S=0x3b0831; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x3b098d; S=0x3b096d; converted property
@property(retain) id displayInfoLoader;	// G=0x3b0035; S=0x3aff25; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x3b0c2d; S=0x3b0c01; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x3b0bb5; S=0x3b0b89; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3b0bf1; S=0x3b0bc5; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3b0ac5; S=0x3b0aa5; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x3b0b79; converted property
@property(assign) float forcedContentHeight;	// G=0x3b0a95; S=0x3b0a75; converted property
@property(assign) float forcedHeight;	// G=0x3b0a65; S=0x3b099d; converted property
@property(assign) BOOL iconsTrailText;	// G=0x3b0c69; S=0x3b0c3d; converted property
@property(retain) id image;	// G=0x3afd5d; S=0x3afaf1; converted property
@property(assign) float imageAspectRatio;	// G=0x3aff15; S=0x3afedd; converted property
@property(assign) float imageHeight;	// G=0x3b0d89; S=0x3b0d51; converted property
@property(assign) float imageInset;	// G=0x3b0cf9; S=0x3b0cc1; converted property
@property(retain) id imageProxy;	// G=0x3afebd; S=0x3afea9; converted property
@property(assign) float leftMargin;	// G=0x3b0cb1; S=0x3b0c79; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x3af72d; S=0x3af709; converted property
@property(assign, nonatomic) BOOL preferTextScroller;	// G=0x3b2525; S=0x3b2535; @synthesize=_preferTextScroller
@property(assign, nonatomic) float progress;	// G=0x3b2515; S=0x3b0429; @synthesize=_progress
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x3afaa9; S=0x3af9fd; converted property
@property(assign) float rightMargin;	// G=0x3b0dd1; S=0x3b0d99; converted property
@property(retain) NSAttributedString *text;	// G=0x3af885; S=0x3af755; converted property
@property(assign) float textPadding;	// G=0x3b0d41; S=0x3b0d09; converted property
- (id)init;	// 0x3af071
- (id)_accessoryOfType:(int)type;	// 0x3b26d5
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x3b26e9
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x3b39a5
- (id)_detailedTextAttributes;	// 0x3b30ed
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x3b2b89
- (CGRect)_imageFrame;	// 0x3b34d5
- (id)_imageWithName:(id)name;	// 0x3b3195
- (id)_largeLeftImage;	// 0x3b2d69
- (float)_largestOrdinalWidth;	// 0x3b32c5
- (void)_layoutProgressAccessoryInFlipContainer:(id)flipContainer;	// 0x3b22e9
- (id)_ordinalImage;	// 0x3b2f15
- (id)_ordinalString;	// 0x3b339d
- (id)_ordinalTypes;	// 0x3b2e81
- (CGRect)_progressFrame;	// 0x3b3721
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x3b2c01
- (id)_rightTextAttributes;	// 0x3b3121
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x3b3215
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x3b2545
- (id)_textAttributes;	// 0x3b3155
- (void)_updateColorAndContentHeight;	// 0x3b25b5
- (id)_upperRightImageTypes;	// 0x3b2f49
- (id)_upperRightImages;	// 0x3b302d
- (id)accessibilityLabel;	// 0x3b3a39
- (id)accessibilitySecondaryLabel;	// 0x3b3b29
// declared property getter: - (id)accessibilityText;	// 0x3afac9
- (id)accessibilityTraitsList;	// 0x3b3bed
- (id)accessibilityValue;	// 0x3b3bdd
- (void)addAccessoryOfType:(int)type;	// 0x3b0045
- (void)cancelLoadDisplayInfo;	// 0x3af605
- (id)centeredDetailedTextAttributes;	// 0x3af6e5
- (id)centeredTextAttributes;	// 0x3af64d
- (void)controlWasActivated;	// 0x3af405
- (void)controlWasDeactivated;	// 0x3af4f1
- (void)controlWasFocused;	// 0x3af345
- (void)controlWasUnfocused;	// 0x3af3a5
- (void)dealloc;	// 0x3af159
- (id)description;	// 0x3af295
// converted property getter: - (id)detailedText;	// 0x3af9dd
// converted property getter: - (BOOL)dimmed;	// 0x3b095d
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x3b098d
// converted property getter: - (id)displayInfoLoader;	// 0x3b0035
// converted property getter: - (BOOL)dotsTrailImage;	// 0x3b0c2d
- (void)drawRect:(CGRect)rect;	// 0x3b0e8d
- (CGRect)focusCursorFrame;	// 0x3b0de1
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x3b0bb5
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3b0bf1
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3b0ac5
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x3b0b79
// converted property getter: - (float)forcedContentHeight;	// 0x3b0a95
// converted property getter: - (float)forcedHeight;	// 0x3b0a65
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3b03b1
// converted property getter: - (BOOL)iconsTrailText;	// 0x3b0c69
// converted property getter: - (id)image;	// 0x3afd5d
// converted property getter: - (float)imageAspectRatio;	// 0x3aff15
// converted property getter: - (float)imageHeight;	// 0x3b0d89
// converted property getter: - (float)imageInset;	// 0x3b0cf9
// converted property getter: - (id)imageProxy;	// 0x3afebd
- (BOOL)isAccessibilityElement;	// 0x3b3a35
- (void)layoutSubcontrols;	// 0x3b2425
// converted property getter: - (float)leftMargin;	// 0x3b0cb1
- (void)loadDisplayInfo;	// 0x3af5bd
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x3af72d
// declared property getter: - (BOOL)preferTextScroller;	// 0x3b2525
// declared property getter: - (float)progress;	// 0x3b2515
- (void)removeAccessoryOfType:(int)type;	// 0x3b0291
- (void)removeAllAccessories;	// 0x3b03cd
// converted property getter: - (id)rightJustifiedText;	// 0x3afaa9
// converted property getter: - (float)rightMargin;	// 0x3b0dd1
- (void)scrollingCompleted;	// 0x3af55d
// declared property setter: - (void)setAccessibilityText:(id)text;	// 0x3b2505
- (void)setDefaultImage:(id)image;	// 0x3afc49
// converted property setter: - (void)setDetailedText:(id)text;	// 0x3af8a5
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x3af8b9
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3b0831
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x3b096d
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x3aff25
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3b0c01
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x3b0b89
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3b0bc5
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x3b0aa5
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3b0ad5
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x3b0a75
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x3b099d
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x3b0c3d
// converted property setter: - (void)setImage:(id)image;	// 0x3afaf1
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x3afedd
// converted property setter: - (void)setImageHeight:(float)height;	// 0x3b0d51
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3b0cc1
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3afea9
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x3afd7d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3b0c79
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x3af709
// declared property setter: - (void)setPreferTextScroller:(BOOL)scroller;	// 0x3b2535
// declared property setter: - (void)setProgress:(float)progress;	// 0x3b0429
- (void)setProgress:(float)progress removeOnCompletion:(BOOL)completion;	// 0x3b043d
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x3af9fd
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x3afa11
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3b0d99
// converted property setter: - (void)setText:(id)text;	// 0x3af755
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3af769
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x3b0d09
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3af2fd
// converted property getter: - (id)text;	// 0x3af885
// converted property getter: - (float)textPadding;	// 0x3b0d41
@end

