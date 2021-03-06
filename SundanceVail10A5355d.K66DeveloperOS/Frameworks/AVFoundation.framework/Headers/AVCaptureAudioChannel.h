/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
	AVCaptureAudioChannelInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x3269b959; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x3269b989; 
- (id)initWithConnection:(id)connection;	// 0x3269b85d
// declared property getter: - (float)averagePowerLevel;	// 0x3269b959
- (void)dealloc;	// 0x3269b8ed
- (void)invalidate;	// 0x3269b939
// declared property getter: - (float)peakHoldLevel;	// 0x3269b989
@end

