/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVRunLoopConditionRunLoopState : NSObject {
	CFRunLoopRef _runLoop;	// 4 = 0x4
	CFRunLoopSourceRef _signalSource;	// 8 = 0x8
	BOOL _signaled;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x36902349; @synthesize=_runLoop
@property(assign, nonatomic) CFRunLoopSourceRef signalSource;	// G=0x36902359; S=0x36902369; @synthesize=_signalSource
@property(assign, nonatomic) BOOL signaled;	// G=0x36902379; S=0x36902389; @synthesize=_signaled
+ (id)runLoopStateWithRunLoop:(CFRunLoopRef)runLoop;	// 0x36902229
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x36902275
- (void)dealloc;	// 0x369022ed
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x36902349
// declared property setter: - (void)setSignalSource:(CFRunLoopSourceRef)source;	// 0x36902369
// declared property setter: - (void)setSignaled:(BOOL)signaled;	// 0x36902389
// declared property getter: - (CFRunLoopSourceRef)signalSource;	// 0x36902359
// declared property getter: - (BOOL)signaled;	// 0x36902379
@end

