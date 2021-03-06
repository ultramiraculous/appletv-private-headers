/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "Endpointer.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface SpeexEndpointer : NSObject <Endpointer> {
	double mStartWaitTime;	// 4 = 0x4
	double mInterspeechWaitTime;	// 12 = 0xc
	double mEndWaitTime;	// 20 = 0x14
	int mEndpointMode;	// 28 = 0x1c
	unsigned mFrameRate;	// 32 = 0x20
	int mLastStatus;	// 36 = 0x24
@private
	void *_impl;	// 40 = 0x28
}
@property(assign) double endWaitTime;	// G=0x354bacc5; S=0x354baebd; 
@property(assign) int endpointMode;	// G=0x354bac85; S=0x354bb0cd; 
@property(assign) double interspeechWaitTime;	// G=0x354bacad; S=0x354baf6d; 
@property(assign) double startWaitTime;	// G=0x354bac95; S=0x354bb01d; 
- (id)init;	// 0x354bacdd
- (BOOL)configureWithSampleRate:(double)sampleRate andFrameRate:(unsigned long)rate;	// 0x354bb159
- (void)dealloc;	// 0x354bb285
// declared property getter: - (double)endWaitTime;	// 0x354bacc5
// declared property getter: - (int)endpointMode;	// 0x354bac85
- (int)getStatus:(AudioQueueBuffer *)status;	// 0x354bac75
- (int)getStatus:(float *)status count:(unsigned long)count;	// 0x354bb325
// declared property getter: - (double)interspeechWaitTime;	// 0x354bacad
- (void)reset;	// 0x354bb129
// declared property setter: - (void)setEndWaitTime:(double)time;	// 0x354baebd
// declared property setter: - (void)setEndpointMode:(int)mode;	// 0x354bb0cd
// declared property setter: - (void)setInterspeechWaitTime:(double)time;	// 0x354baf6d
// declared property setter: - (void)setStartWaitTime:(double)time;	// 0x354bb01d
// declared property getter: - (double)startWaitTime;	// 0x354bac95
@end

