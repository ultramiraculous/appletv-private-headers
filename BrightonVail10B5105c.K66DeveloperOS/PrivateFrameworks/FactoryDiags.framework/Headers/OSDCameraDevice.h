/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"


@interface OSDCameraDevice : NSObject {
	H4ISPDevice *_pH4ISPDevice;	// 4 = 0x4
	H4ISPDeviceController *_pH4ISPDeviceController;	// 8 = 0x8
	H4ISPFrameReceiver *_pFrameReceiver[2];	// 12 = 0xc
	unsigned _cameraPosition;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned cameraPosition;	// G=0x34ef2985; S=0x34ef2995; @synthesize=_cameraPosition
- (id)init;	// 0x34ef2569
- (id)initWithCameraPosition:(unsigned)cameraPosition;	// 0x34ef25a9
// declared property getter: - (unsigned)cameraPosition;	// 0x34ef2985
- (unsigned)getErrorCount;	// 0x34ef28b1
- (BOOL)off;	// 0x34ef2649
- (BOOL)on;	// 0x34ef25e9
- (BOOL)openISPDevice;	// 0x34ef28ed
// declared property setter: - (void)setCameraPosition:(unsigned)position;	// 0x34ef2995
- (BOOL)startStreaming;	// 0x34ef2691
- (BOOL)stopStreaming;	// 0x34ef286d
@end

