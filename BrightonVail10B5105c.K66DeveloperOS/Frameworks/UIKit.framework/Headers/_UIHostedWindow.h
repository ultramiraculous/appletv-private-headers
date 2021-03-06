/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface _UIHostedWindow : UIWindow {
}
@property(readonly, assign) unsigned contextID;	// G=0x3493f159; 
- (id)initWithFrame:(CGRect)frame;	// 0x3493f0d9
- (BOOL)_canPromoteFromKeyWindowStack;	// 0x3493f155
- (BOOL)_isWindowServerHostingManaged;	// 0x3493f151
- (BOOL)_needsShakesWhenInactive;	// 0x3493f379
- (void)_registerScrollToTopView:(id)topView;	// 0x3493f16d
- (void)_unregisterScrollToTopView:(id)topView;	// 0x3493f20d
- (void)_updateAppTintView;	// 0x3493f2ad
- (void)_updateTransformLayerForClassicPresentation;	// 0x3493f315
- (BOOL)_usesWindowServerHitTesting;	// 0x3493f169
// declared property getter: - (unsigned)contextID;	// 0x3493f159
@end

