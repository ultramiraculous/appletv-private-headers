/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

@interface DOMWebKitAnimation : DOMObject {
}
@property(readonly, assign) double delay;	// G=0x36204b05; 
@property(readonly, assign) unsigned short direction;	// G=0x36204f09; 
@property(readonly, assign) double duration;	// G=0x362047f9; 
@property(assign) double elapsedTime;	// G=0x362048fd; S=0x36204a01; 
@property(readonly, assign) BOOL ended;	// G=0x36204e09; 
@property(readonly, assign) unsigned short fillMode;	// G=0x36205009; 
@property(readonly, assign) int iterationCount;	// G=0x36204c09; 
@property(readonly, assign) NSString *name;	// G=0x3620463d; 
@property(readonly, assign) BOOL paused;	// G=0x36204d09; 
- (void)dealloc;	// 0x36204571
// declared property getter: - (double)delay;	// 0x36204b05
// declared property getter: - (unsigned short)direction;	// 0x36204f09
// declared property getter: - (double)duration;	// 0x362047f9
// declared property getter: - (double)elapsedTime;	// 0x362048fd
// declared property getter: - (BOOL)ended;	// 0x36204e09
// declared property getter: - (unsigned short)fillMode;	// 0x36205009
- (void)finalize;	// 0x362045e9
// declared property getter: - (int)iterationCount;	// 0x36204c09
// declared property getter: - (id)name;	// 0x3620463d
- (void)pause;	// 0x36205205
// declared property getter: - (BOOL)paused;	// 0x36204d09
- (void)play;	// 0x36205109
// declared property setter: - (void)setElapsedTime:(double)time;	// 0x36204a01
@end

