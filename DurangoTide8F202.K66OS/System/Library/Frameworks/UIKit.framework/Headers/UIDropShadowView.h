/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView {
@private
	float _cornerRadius;	// 44 = 0x2c
	UIView *_contentView;	// 48 = 0x30
	UIView *_backgroundImage;	// 52 = 0x34
	NSDictionary *_preservedLayerValues;	// 56 = 0x38
}
@property(assign, nonatomic) UIView *contentView;	// G=0x308263c9; S=0x308264e9; @synthesize=_contentView
@property(assign) float cornerRadius;	// G=0x308263d9; S=0x308263e9; @synthesize=_cornerRadius
- (id)init;	// 0x308268d5
// declared property getter: - (id)contentView;	// 0x308263c9
// declared property getter: - (float)cornerRadius;	// 0x308263d9
- (void)dealloc;	// 0x3082648d
- (void)didFinishRotation;	// 0x308263f9
- (void)setBounds:(CGRect)bounds;	// 0x3082669d
// declared property setter: - (void)setContentView:(id)view;	// 0x308264e9
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x308263e9
- (void)setFrame:(CGRect)frame;	// 0x30826ac1
- (void)updateShadowPath;	// 0x30826745
- (void)willBeginRotationWithOriginalBounds:(CGRect)originalBounds newBounds:(CGRect)bounds;	// 0x30826b69
@end

