/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPInitFailPacket : NSObject {
	unsigned long _reason;	// 4 = 0x4
}
@property(assign) unsigned long reason;	// G=0x33e5d4d5; S=0x33e5d4e5; converted property
- (id)initWithReason:(unsigned long)reason;	// 0x33e5d371
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x33e5d3b1
- (id)contentForTCP;	// 0x33e5d409
- (id)description;	// 0x33e5d489
// converted property getter: - (unsigned long)reason;	// 0x33e5d4d5
// converted property setter: - (void)setReason:(unsigned long)reason;	// 0x33e5d4e5
@end

