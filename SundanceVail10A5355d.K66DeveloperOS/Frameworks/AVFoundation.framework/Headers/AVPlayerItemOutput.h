/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
	AVPlayerItemOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL suppressesPlayerRendering;	// G=0x326f532d; S=0x326f5329; 
- (id)init;	// 0x326f5151
- (void)_attachToPlayerItem:(id)playerItem;	// 0x326f5351
- (void)_detachFromPlayerItem;	// 0x326f5355
- (void)_setTimebase:(OpaqueCMTimebase *)timebase;	// 0x326f5359
- (id)_weakReference;	// 0x326f5331
- (void)dealloc;	// 0x326f5255
- (XXStruct_pwHToB)itemTimeForHostTime:(double)hostTime;	// 0x326f52b9
- (XXStruct_pwHToB)itemTimeForMachAbsoluteTime:(long long)machAbsoluteTime;	// 0x326f52f1
// declared property setter: - (void)setSuppressesPlayerRendering:(BOOL)rendering;	// 0x326f5329
// declared property getter: - (BOOL)suppressesPlayerRendering;	// 0x326f532d
@end

