/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIColor;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
	UIColor *_statusBarTintColor;	// 84 = 0x54
	BOOL _actsAsTintView;	// 88 = 0x58
}
@property(assign, nonatomic, setter=_setActsAsTintView:) BOOL _actsAsTintView;	// G=0x32eeaedd; S=0x32eeae45; @synthesize
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x32eeaecd; S=0x32eeada9; @synthesize
+ (Class)layerClass;	// 0x32eeaae9
+ (id)viewWithRemoteContextID:(unsigned)remoteContextID;	// 0x32eeab05
// declared property getter: - (BOOL)_actsAsTintView;	// 0x32eeaedd
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32eeadd9
// declared property setter: - (void)_setActsAsTintView:(BOOL)view;	// 0x32eeae45
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x32eeada9
- (void)_setStatusBarTintColor:(id)color duration:(double)duration;	// 0x32eeaced
// declared property getter: - (id)_statusBarTintColor;	// 0x32eeaecd
- (void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)transform frame:(CGRect)frame;	// 0x32eeabe5
- (void)dealloc;	// 0x32eeab99
@end
