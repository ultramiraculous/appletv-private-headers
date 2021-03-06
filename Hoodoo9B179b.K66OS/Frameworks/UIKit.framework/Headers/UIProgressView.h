/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
@private
	int _progressViewStyle;	// 48 = 0x30
	float _progress;	// 52 = 0x34
	int _barStyle;	// 56 = 0x38
	UIColor *_progressTintColor;	// 60 = 0x3c
	UIColor *_trackTintColor;	// 64 = 0x40
	UIImageView *_trackView;	// 68 = 0x44
	UIImageView *_progressViews[3];	// 72 = 0x48
	BOOL _isAnimating;	// 84 = 0x54
	UIImage *_trackImage;	// 88 = 0x58
	UIImage *_progressImage;	// 92 = 0x5c
}
@property(assign) int barStyle;	// G=0x33143d15; S=0x33143d25; converted property
@property(assign, nonatomic) float progress;	// G=0x33143cc5; S=0x3314348d; @synthesize=_progress
@property(retain, nonatomic) UIImage *progressImage;	// G=0x33143ce5; S=0x33143a79; @synthesize=_progressImage
@property(retain, nonatomic) UIColor *progressTintColor;	// G=0x33143cf5; S=0x331439a1; @synthesize=_progressTintColor
@property(assign, nonatomic) int progressViewStyle;	// G=0x33143cb5; S=0x33142791; @synthesize=_progressViewStyle
@property(retain, nonatomic) UIImage *trackImage;	// G=0x33143cd5; S=0x33143bfd; @synthesize=_trackImage
@property(retain, nonatomic) UIColor *trackTintColor;	// G=0x33143d05; S=0x33143b51; @synthesize=_trackTintColor
+ (int)_indexForStyle:(int)style barStyle:(int)style2;	// 0x33141ea1
+ (XXStruct_Xx1ZfA)_sliceImage:(id)image;	// 0x33141b61
+ (XXStruct_Xx1ZfA)_standardImagesForStyle:(int)style barStyle:(int)style2;	// 0x33141ef9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33141b31
+ (CGSize)defaultSize;	// 0x33143d69
- (id)initWithCoder:(id)coder;	// 0x331423f1
- (id)initWithFrame:(CGRect)frame;	// 0x3314231d
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x331423a5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33142645
- (id)_progressColor;	// 0x33143981
- (void)_setProgress:(float)progress;	// 0x33143441
- (void)_setProgressAnimated:(float)animated duration:(double)duration delay:(double)delay options:(unsigned)options;	// 0x3314374d
- (void)_setProgressColor:(id)color;	// 0x33143991
- (BOOL)_shouldTintProgress;	// 0x33142a69
- (BOOL)_shouldTintTrack;	// 0x33142a99
- (void)_updateCapsAtEndOfAnimation;	// 0x331435e5
- (void)_updateCapsAtStartOfAnimation;	// 0x33143575
- (void)_updateImages;	// 0x33142ac9
// converted property getter: - (int)barStyle;	// 0x33143d15
- (void)dealloc;	// 0x331426f1
- (void)encodeWithCoder:(id)coder;	// 0x3314254d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149629
- (void)layoutSubviews;	// 0x33143211
// declared property getter: - (float)progress;	// 0x33143cc5
// declared property getter: - (id)progressImage;	// 0x33143ce5
// declared property getter: - (id)progressTintColor;	// 0x33143cf5
// declared property getter: - (int)progressViewStyle;	// 0x33143cb5
// converted property setter: - (void)setBarStyle:(int)style;	// 0x33143d25
- (void)setFrame:(CGRect)frame;	// 0x33142839
// declared property setter: - (void)setProgress:(float)progress;	// 0x3314348d
- (void)setProgress:(float)progress animated:(BOOL)animated;	// 0x331436dd
// declared property setter: - (void)setProgressImage:(id)image;	// 0x33143a79
// declared property setter: - (void)setProgressTintColor:(id)color;	// 0x331439a1
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x33142791
// declared property setter: - (void)setTrackImage:(id)image;	// 0x33143bfd
// declared property setter: - (void)setTrackTintColor:(id)color;	// 0x33143b51
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33142929
// declared property getter: - (id)trackImage;	// 0x33143cd5
// declared property getter: - (id)trackTintColor;	// 0x33143d05
@end

