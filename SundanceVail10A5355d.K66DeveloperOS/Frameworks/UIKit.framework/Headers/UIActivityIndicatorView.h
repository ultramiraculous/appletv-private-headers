/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, NSArray, NSString;

@interface UIActivityIndicatorView : UIView <NSCoding> {
	double _duration;	// 84 = 0x54
	BOOL _animating;	// 92 = 0x5c
	int _activityIndicatorViewStyle;	// 96 = 0x60
	int _actualActivityIndicatorViewStyle;	// 100 = 0x64
	BOOL _hidesWhenStopped;	// 104 = 0x68
	float _width;	// 108 = 0x6c
	BOOL _hasShadow;	// 112 = 0x70
	UIColor *_color;	// 116 = 0x74
	int _spokeCount;	// 120 = 0x78
	CGSize _shadowOffset;	// 124 = 0x7c
	UIColor *_shadowColor;	// 132 = 0x84
	float _innerRadius;	// 136 = 0x88
	int _spokeFrameRatio;	// 140 = 0x8c
	NSArray *_spokeImages;	// 144 = 0x90
	BOOL _clockWise;	// 148 = 0x94
	BOOL _spinning;	// 149 = 0x95
	float _spinningDuration;	// 152 = 0x98
	BOOL _useArtwork;	// 156 = 0x9c
	NSString *_artBackupKeyString;	// 160 = 0xa0
	UIImageView *_internalView;	// 164 = 0xa4
}
@property(assign, nonatomic) int activityIndicatorViewStyle;	// G=0x33c5df09; S=0x33aad115; @synthesize=_activityIndicatorViewStyle
@property(assign, getter=isAnimating) BOOL animating;	// G=0x33aaaef5; S=0x33c5dec1; converted property
@property(readonly, assign, nonatomic) NSString *artBackupKeyString;	// G=0x33c5e045; @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// G=0x33c5dfd5; S=0x33c5d38d; @synthesize=_clockWise
@property(retain, nonatomic) UIColor *color;	// G=0x33c5df59; S=0x33c5d151; @synthesize=_color
@property(assign) BOOL hasShadow;	// G=0x33c5df29; S=0x33c5df41; @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// G=0x33b28e99; S=0x33aaaead; @synthesize=_hidesWhenStopped
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x33c5d08d; S=0x33c5d0b1; converted property
@property(assign, nonatomic) float innerRadius;	// G=0x33c5dfa1; S=0x33c5d329; @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView *internalView;	// G=0x33c5e055; @synthesize=_internalView
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x33c5df91; S=0x33c5d1f1; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x33c5df79; S=0x33c5d28d; @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// G=0x33c5dfe5; S=0x33c5dffd; @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// G=0x33c5e015; S=0x33c5d3b9; @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// G=0x33c5df69; S=0x33c5d301; @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// G=0x33c5dfb1; S=0x33c5d361; @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray *spokeImages;	// G=0x33c5dfc1; @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// G=0x33c5e025; S=0x33c5e035; @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// G=0x33c5df19; S=0x33c5d119; @synthesize=_width
+ (id)_loadResourcesForStyle:(int)style;	// 0x33aabcd5
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x33aaab69
+ (CGSize)size;	// 0x33c5de8d
- (id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;	// 0x33aaaad1
- (id)initWithCoder:(id)coder;	// 0x33c5cc61
- (id)initWithFrame:(CGRect)frame;	// 0x33c5cc25
- (float)_alphaValueForStep:(int)step;	// 0x33c5d529
- (void)_applicationDidEnterBackground:(id)_application;	// 0x33aae289
- (void)_applicationWillEnterForeground:(id)_application;	// 0x33c5cbfd
- (id)_artBackupKey;	// 0x33aab9c1
- (BOOL)_canCustomize;	// 0x33c5de69
- (BOOL)_canCustomizeStyle:(int)style;	// 0x33c5de39
- (id)_commonInitWithFrame:(CGRect)frame;	// 0x33aaabb1
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x33c5cfb1
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x33c5cfad
- (int)_customStyleForStyle:(int)style;	// 0x33c5de0d
- (id)_defaulColorForStyle:(int)style;	// 0x33aab62d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33b28199
- (void)_feedTheGear;	// 0x33aaaf35
- (id)_generateImages;	// 0x33c5db61
- (id)_imageForStep:(int)step;	// 0x33c5d5d1
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x33c5cfb5
- (BOOL)_isArtWorkBased;	// 0x33aab995
- (id)_layoutInfosForStyle:(int)style;	// 0x33aab469
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33c5ce65
- (void)_setUpAnimation;	// 0x33b284d5
- (BOOL)_shouldGoBackToBaseStyle;	// 0x33aab8cd
- (BOOL)_shouldGoToCustomStyle;	// 0x33aab73d
- (float)_spokeLengthForGearWidth:(float)gearWidth;	// 0x33c5d4b1
- (float)_spokeWidthForGearWidth:(float)gearWidth;	// 0x33c5d3e1
- (id)_styleNameForStyle:(int)style;	// 0x33c5db05
- (void)_tearDownAnimation;	// 0x33b28f09
- (void)_updateInternalViewFrameWithBounds:(CGRect)bounds;	// 0x33aaad61
- (float)_widthForGearWidth:(float)gearWidth;	// 0x33c5d501
// declared property getter: - (int)activityIndicatorViewStyle;	// 0x33c5df09
- (id)artBackupKey;	// 0x33c5dac1
// declared property getter: - (id)artBackupKeyString;	// 0x33c5e045
// declared property getter: - (BOOL)clockWise;	// 0x33c5dfd5
// declared property getter: - (id)color;	// 0x33c5df59
- (void)dealloc;	// 0x33b2d0c5
- (void)encodeWithCoder:(id)coder;	// 0x33c5ceb5
- (void)generateImages;	// 0x33c5de59
// declared property getter: - (BOOL)hasShadow;	// 0x33c5df29
// declared property getter: - (BOOL)hidesWhenStopped;	// 0x33b28e99
// declared property getter: - (float)innerRadius;	// 0x33c5dfa1
// declared property getter: - (id)internalView;	// 0x33c5e055
// converted property getter: - (BOOL)isAnimating;	// 0x33aaaef5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c62e15
// converted property getter: - (BOOL)isHighlighted;	// 0x33c5d08d
// declared property setter: - (void)setActivityIndicatorViewStyle:(int)style;	// 0x33aad115
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x33c5dec1
- (void)setAnimationDuration:(double)duration;	// 0x33b28015
- (void)setBounds:(CGRect)bounds;	// 0x33c5dbf1
// declared property setter: - (void)setClockWise:(BOOL)wise;	// 0x33c5d38d
// declared property setter: - (void)setColor:(id)color;	// 0x33c5d151
- (void)setFrame:(CGRect)frame;	// 0x33aaace9
// declared property setter: - (void)setHasShadow:(BOOL)shadow;	// 0x33c5df41
// declared property setter: - (void)setHidesWhenStopped:(BOOL)stopped;	// 0x33aaaead
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33c5d0b1
// declared property setter: - (void)setInnerRadius:(float)radius;	// 0x33c5d329
// declared property setter: - (void)setShadowColor:(id)color;	// 0x33c5d1f1
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x33c5d28d
// declared property setter: - (void)setSpinning:(BOOL)spinning;	// 0x33c5dffd
// declared property setter: - (void)setSpinningDuration:(float)duration;	// 0x33c5d3b9
// declared property setter: - (void)setSpokeCount:(int)count;	// 0x33c5d301
// declared property setter: - (void)setSpokeFrameRatio:(int)ratio;	// 0x33c5d361
- (void)setStyle:(int)style;	// 0x33c5deb1
// declared property setter: - (void)setUseArtwork:(BOOL)artwork;	// 0x33c5e035
// declared property setter: - (void)setWidth:(float)width;	// 0x33c5d119
// declared property getter: - (id)shadowColor;	// 0x33c5df91
// declared property getter: - (CGSize)shadowOffset;	// 0x33c5df79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33aad279
// declared property getter: - (BOOL)spinning;	// 0x33c5dfe5
// declared property getter: - (float)spinningDuration;	// 0x33c5e015
// declared property getter: - (int)spokeCount;	// 0x33c5df69
// declared property getter: - (int)spokeFrameRatio;	// 0x33c5dfb1
// declared property getter: - (id)spokeImages;	// 0x33c5dfc1
- (void)startAnimating;	// 0x33b2845d
- (void)startAnimation;	// 0x33c5dee9
- (void)stopAnimating;	// 0x33b28ea9
- (void)stopAnimation;	// 0x33c5def9
// declared property getter: - (BOOL)useArtwork;	// 0x33c5e025
// declared property getter: - (float)width;	// 0x33c5df19
@end

