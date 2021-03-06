/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
@private
	AVCaptureAudioChannelInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x325a27c9; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x325a2799; 
- (id)initWithConnection:(id)connection;	// 0x325a2841
// declared property getter: - (float)averagePowerLevel;	// 0x325a27c9
- (void)dealloc;	// 0x325a27f9
- (void)invalidate;	// 0x325a2295
// declared property getter: - (float)peakHoldLevel;	// 0x325a2799
@end

