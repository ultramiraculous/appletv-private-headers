/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClientProperties : NSObject {
	int _pid;	// 4 = 0x4
	BOOL _registered;	// 8 = 0x8
	CFFileDescriptorRef _fdref;	// 12 = 0xc
	CFMessagePortRef _remotePort;	// 16 = 0x10
	int _remoteAddress;	// 20 = 0x14
	int _serverFD;	// 24 = 0x18
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x30d9bd75; S=0x30d9bd89; @synthesize=_fdref
@property(assign) int pid;	// G=0x30d9bd19; S=0x30d9bd2d; @synthesize=_pid
@property(assign, getter=didRegister) BOOL registered;	// G=0x30d9bd45; S=0x30d9bd5d; @synthesize=_registered
@property(assign) int remoteAddress;	// G=0x30d9bdcd; S=0x30d9bde1; @synthesize=_remoteAddress
@property(assign) CFMessagePortRef remotePort;	// G=0x30d9bda1; S=0x30d9bdb5; @synthesize=_remotePort
@property(assign) int serverFD;	// G=0x30d9bdf9; S=0x30d9be0d; @synthesize=_serverFD
- (void)dealloc;	// 0x30d9bc69
// declared property getter: - (BOOL)didRegister;	// 0x30d9bd45
// declared property getter: - (CFFileDescriptorRef)fdref;	// 0x30d9bd75
- (void)finalize;	// 0x30d9bcc1
// declared property getter: - (int)pid;	// 0x30d9bd19
// declared property getter: - (int)remoteAddress;	// 0x30d9bdcd
// declared property getter: - (CFMessagePortRef)remotePort;	// 0x30d9bda1
// declared property getter: - (int)serverFD;	// 0x30d9bdf9
// declared property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x30d9bd89
// declared property setter: - (void)setPid:(int)pid;	// 0x30d9bd2d
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x30d9bd5d
// declared property setter: - (void)setRemoteAddress:(int)address;	// 0x30d9bde1
// declared property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x30d9bdb5
// declared property setter: - (void)setServerFD:(int)fd;	// 0x30d9be0d
@end

