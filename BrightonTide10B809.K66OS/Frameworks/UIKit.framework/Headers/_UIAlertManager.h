/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject {
}
+ (CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;	// 0x32e4735d
+ (void)_applyAlertTransforms;	// 0x32c35381
+ (void)addToStack:(id)stack dontDimBackground:(BOOL)background;	// 0x32c33941
+ (void)alertPopoutCompleted;	// 0x32c3afd5
+ (void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void *)context;	// 0x32e471b9
+ (void)applyClientWindowTransform:(CGAffineTransform)transform;	// 0x32e47431
+ (void)applyInternalWindowTransform:(CGAffineTransform)transform;	// 0x32c35341
+ (CGAffineTransform)calculatedAlertTransform;	// 0x32c33cd9
+ (BOOL)cancelAlertsAnimated:(BOOL)animated;	// 0x32e471a1
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)animated;	// 0x32e47171
+ (void)createAlertWindowIfNeeded:(BOOL)needed;	// 0x32e474f1
+ (void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;	// 0x32c33b4d
+ (void)hideAlertsForTermination;	// 0x32b70e65
+ (void)hideDimmingViewAnimated:(BOOL)animated;	// 0x32c3a5e5
+ (BOOL)hideTopMostAlertAnimated:(BOOL)animated;	// 0x32c50de1
+ (void)hideTopmostMiniAlert;	// 0x32e47159
+ (void)initialize;	// 0x32b669e9
+ (void)noteOrientationChangingTo:(int)to;	// 0x32e471a5
+ (void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;	// 0x32b8f281
+ (void)removeFromStack:(id)stack;	// 0x32c39fed
+ (void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;	// 0x32c34e71
+ (void)showDimmingViewAnimated:(BOOL)animated;	// 0x32c38dbd
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x32b66a6d
+ (void)sizeAlertWindowForCurrentOrientation;	// 0x32c33d41
+ (BOOL)stackContainsAlert:(id)alert;	// 0x32c39fc5
+ (void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32c3a47d
+ (void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32c38d29
+ (id)topMostAlert;	// 0x32ca492d
+ (id)visibleAlert;	// 0x32c38da9
- (void)_didHideDimmingView:(id)view finished:(id)finished;	// 0x32e47471
@end

