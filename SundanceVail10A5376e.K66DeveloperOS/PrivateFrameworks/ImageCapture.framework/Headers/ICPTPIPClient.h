/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x30d9c2ad; S=0x30d9c2cd; converted property
@property(assign) int pid;	// G=0x30d9c229; S=0x30d9c249; converted property
@property(assign) BOOL registered;	// G=0x30d9c269; S=0x30d9c28d; converted property
@property(assign) int remoteAddress;	// G=0x30d9c32d; S=0x30d9c34d; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x30d9c2ed; S=0x30d9c30d; converted property
@property(assign) int serverFD;	// G=0x30d9c36d; S=0x30d9c38d; converted property
- (id)init;	// 0x30d9c1c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x30d9c2ad
// converted property getter: - (int)pid;	// 0x30d9c229
// converted property getter: - (BOOL)registered;	// 0x30d9c269
// converted property getter: - (int)remoteAddress;	// 0x30d9c32d
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x30d9c2ed
// converted property getter: - (int)serverFD;	// 0x30d9c36d
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x30d9c2cd
// converted property setter: - (void)setPid:(int)pid;	// 0x30d9c249
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x30d9c28d
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x30d9c34d
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x30d9c30d
// converted property setter: - (void)setServerFD:(int)fd;	// 0x30d9c38d
@end

