/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitAnimation : DOMObject {
}
@property(readonly, assign) double delay;	// G=0x31c2af11; 
@property(readonly, assign) unsigned short direction;	// G=0x31c2ac21; 
@property(readonly, assign) double duration;	// G=0x31c2b159; 
@property(assign) double elapsedTime;	// G=0x31c2b099; S=0x31c2afd1; 
@property(readonly, assign) BOOL ended;	// G=0x31c2acdd; 
@property(readonly, assign) unsigned short fillMode;	// G=0x31c2ab65; 
@property(readonly, assign) int iterationCount;	// G=0x31c2ae55; 
@property(readonly, copy) NSString *name;	// G=0x31c2b219; 
@property(readonly, assign) BOOL paused;	// G=0x31c2ad99; 
- (void)dealloc;	// 0x31c2a975
// declared property getter: - (double)delay;	// 0x31c2af11
// declared property getter: - (unsigned short)direction;	// 0x31c2ac21
// declared property getter: - (double)duration;	// 0x31c2b159
// declared property getter: - (double)elapsedTime;	// 0x31c2b099
// declared property getter: - (BOOL)ended;	// 0x31c2acdd
// declared property getter: - (unsigned short)fillMode;	// 0x31c2ab65
- (void)finalize;	// 0x31c2b365
// declared property getter: - (int)iterationCount;	// 0x31c2ae55
// declared property getter: - (id)name;	// 0x31c2b219
- (void)pause;	// 0x31c2a9f5
// declared property getter: - (BOOL)paused;	// 0x31c2ad99
- (void)play;	// 0x31c2aaad
// declared property setter: - (void)setElapsedTime:(double)time;	// 0x31c2afd1
@end

