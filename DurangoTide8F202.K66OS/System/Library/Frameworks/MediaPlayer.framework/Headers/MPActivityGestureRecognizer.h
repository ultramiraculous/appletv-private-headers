/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library


@interface MPActivityGestureRecognizer : UIGestureRecognizer {
}
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31dac82d
- (void)_reportOngoingActivity;	// 0x31dac77d
- (void)_stopReportingOngoingActivity;	// 0x31dac745
- (void)_touchesTerminated:(id)terminated withEvent:(id)event;	// 0x31dad875
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31dac805
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31dac7c5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31dac7d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31dac7ed
@end

