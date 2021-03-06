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
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x2c2bc8c1; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x2c2bc8f1; 
- (id)initWithConnection:(id)connection;	// 0x2c2bc7c5
// declared property getter: - (float)averagePowerLevel;	// 0x2c2bc8c1
- (void)dealloc;	// 0x2c2bc855
- (void)invalidate;	// 0x2c2bc8a1
// declared property getter: - (float)peakHoldLevel;	// 0x2c2bc8f1
@end

