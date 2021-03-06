/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "NSObject.h"


@protocol UIViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransition:(id)transition;
@optional
- (void)animationEnded:(BOOL)ended;
@required
- (double)transitionDuration:(id)duration;
@end

