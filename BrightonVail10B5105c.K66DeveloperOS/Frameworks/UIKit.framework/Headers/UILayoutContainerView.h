/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
	id _delegate;	// 84 = 0x54
	BOOL _usesRoundedCorners;	// 88 = 0x58
	float _cornerRadius;	// 92 = 0x5c
	BOOL _usesInnerShadow;	// 96 = 0x60
	BOOL _shadowViewsInstalled;	// 97 = 0x61
	UIView *_shadowView;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x34580859; S=0x3459e251; 
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x347ba0e1; S=0x347ba07d; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x347ba0d1; S=0x347b9bfd; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x347b9b41
- (void)_installShadowViews;	// 0x347b9d0d
- (void)_tearDownShadowViews;	// 0x34608041
- (void)addSubview:(id)subview;	// 0x345a0d35
- (void)dealloc;	// 0x34608001
// declared property getter: - (id)delegate;	// 0x34580859
- (void)encodeWithCoder:(id)coder;	// 0x347b9ba1
- (void)layoutSubviews;	// 0x3458077d
- (void)setBounds:(CGRect)bounds;	// 0x3462a291
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3459e251
- (void)setFrame:(CGRect)frame;	// 0x34581175
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x347ba07d
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x347b9bfd
// declared property getter: - (BOOL)usesInnerShadow;	// 0x347ba0e1
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x347ba0d1
@end

