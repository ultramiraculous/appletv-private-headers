/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import </libobjc.A.h>
#import "AirPlayReceiver-Structs.h"

@class CALayer;
@protocol AirPlayReceiverSimulatorDelegate;

@interface AirPlayReceiverSimulator : NSObject {
	AirPlayReceiverServerPrivate *_server;	// 4 = 0x4
	id<AirPlayReceiverSimulatorDelegate> _delegate;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
}
@property(assign, nonatomic) id<AirPlayReceiverSimulatorDelegate> delegate;	// G=0x2ff46749; S=0x2ff45935; @synthesize=_delegate
@property(assign, nonatomic) CALayer *layer;	// G=0x2ff46759; S=0x2ff45945; @synthesize=_layer
- (void)dealloc;	// 0x2ff458e9
// declared property getter: - (id)delegate;	// 0x2ff46749
- (id)getProperty:(id)property qualifier:(id)qualifier status:(int *)status;	// 0x2ff4666d
// declared property getter: - (id)layer;	// 0x2ff46759
- (long)performCommand:(id)command qualifier:(id)qualifier params:(id)params response:(id *)response;	// 0x2ff465fd
- (void)postButtonsUsagePage:(unsigned)page usageCode:(unsigned)code down:(BOOL)down timestamp:(unsigned long long)timestamp;	// 0x2ff4612d
- (void)postDPad:(BOOL)pad down:(BOOL)down left:(BOOL)left right:(BOOL)right select:(BOOL)select home:(BOOL)home menu:(BOOL)menu back:(BOOL)back siri:(BOOL)siri timestamp:(unsigned long long)timestamp;	// 0x2ff461d9
- (void)postEvent:(id)event qualifier:(id)qualifier params:(id)params;	// 0x2ff46669
- (void)postKnob:(BOOL)knob home:(BOOL)home back:(BOOL)back siri:(BOOL)siri x:(BOOL)x y:(BOOL)y wheel:(BOOL)wheel timestamp:(unsigned long long)timestamp;	// 0x2ff4638d
- (void)postKnob:(BOOL)knob home:(BOOL)home back:(BOOL)back x:(BOOL)x y:(BOOL)y wheel:(BOOL)wheel;	// 0x2ff462f9
- (void)postKnob:(BOOL)knob home:(BOOL)home back:(BOOL)back x:(BOOL)x y:(BOOL)y wheel:(BOOL)wheel timestamp:(unsigned long long)timestamp;	// 0x2ff46339
- (void)postKnob:(unsigned char)knob x:(BOOL)x y:(BOOL)y wheel:(BOOL)wheel;	// 0x2ff462bd
- (void)postMouseButtons:(unsigned char)buttons x:(float)x y:(float)y;	// 0x2ff46459
- (void)postMouseButtons:(unsigned char)buttons x:(float)x y:(float)y timestamp:(unsigned long long)timestamp;	// 0x2ff46495
- (void)postTelephonyUsagePage:(unsigned)page usageCode:(unsigned)code down:(BOOL)down timestamp:(unsigned long long)timestamp;	// 0x2ff46551
- (long)sendCommand:(id)command qualifier:(id)qualifier params:(id)params completion:(id)completion;	// 0x2ff46019
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2ff45935
// declared property setter: - (void)setLayer:(id)layer;	// 0x2ff45945
- (long)setProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x2ff466e1
- (void)start;	// 0x2ff459d9
- (void)stop;	// 0x2ff45fc5
@end

