/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransitionController.h"


@interface MPCrossfadeTransitionController : MPTransitionController {
	int _statusBarHidden;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL statusBarHidden;	// G=0x3373fef9; S=0x3373fee9; 
- (id)init;	// 0x3373ff55
- (void)_animationDidFinish:(id)_animation;	// 0x3373ff11
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x3373fee9
// declared property getter: - (BOOL)statusBarHidden;	// 0x3373fef9
- (void)transition:(unsigned)transition;	// 0x3373ffad
@end

