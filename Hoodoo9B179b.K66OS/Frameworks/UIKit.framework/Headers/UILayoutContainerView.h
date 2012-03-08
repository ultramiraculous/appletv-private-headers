/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "_UIViewFastModeSupport.h"
#import "UIView.h"

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding, _UIViewFastModeSupport> {
@private
	id _delegate;	// 48 = 0x30
	BOOL _usesRoundedCorners;	// 52 = 0x34
	float _cornerRadius;	// 56 = 0x38
	BOOL _fastMode;	// 60 = 0x3c
	UIRoundedCornerView *_roundedCornerView;	// 64 = 0x40
	BOOL _usesInnerShadow;	// 68 = 0x44
	BOOL _shadowViewsInstalled;	// 69 = 0x45
	UIView *_shadowView;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x32eff591; S=0x32ef41d5; 
@property(assign, nonatomic) BOOL useFastMode;	// G=0x33123445; S=0x33123235; @synthesize=_fastMode
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x33123455; S=0x331231e1; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x33123435; S=0x33122d65; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x33122ca5
- (void)_beginFastMode;	// 0x3312327d
- (void)_endFastMode;	// 0x331233a9
- (void)_installShadowViews;	// 0x33122e6d
- (void)_tearDownShadowViews;	// 0x32f859ad
- (void)addSubview:(id)subview;	// 0x32ef8a05
- (void)dealloc;	// 0x32f8594d
// declared property getter: - (id)delegate;	// 0x32eff591
- (void)encodeWithCoder:(id)coder;	// 0x33122d05
- (void)layoutSubviews;	// 0x32eff4b9
- (void)setBounds:(CGRect)bounds;	// 0x32f9f1b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32ef41d5
- (void)setFrame:(CGRect)frame;	// 0x32ef4141
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x33123235
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x331231e1
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x33122d65
// declared property getter: - (BOOL)useFastMode;	// 0x33123445
// declared property getter: - (BOOL)usesInnerShadow;	// 0x33123455
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x33123435
@end
