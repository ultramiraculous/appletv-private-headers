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
@property(assign) CFFileDescriptorRef fdref;	// G=0x3400ec91; S=0x3400eca5; @synthesize=_fdref
@property(assign) int pid;	// G=0x3400ec35; S=0x3400ec49; @synthesize=_pid
@property(assign, getter=didRegister) BOOL registered;	// G=0x3400ec61; S=0x3400ec79; @synthesize=_registered
@property(assign) int remoteAddress;	// G=0x3400ece9; S=0x3400ecfd; @synthesize=_remoteAddress
@property(assign) CFMessagePortRef remotePort;	// G=0x3400ecbd; S=0x3400ecd1; @synthesize=_remotePort
@property(assign) int serverFD;	// G=0x3400ed15; S=0x3400ed29; @synthesize=_serverFD
- (void)dealloc;	// 0x3400eb85
// declared property getter: - (BOOL)didRegister;	// 0x3400ec61
// declared property getter: - (CFFileDescriptorRef)fdref;	// 0x3400ec91
- (void)finalize;	// 0x3400ebdd
// declared property getter: - (int)pid;	// 0x3400ec35
// declared property getter: - (int)remoteAddress;	// 0x3400ece9
// declared property getter: - (CFMessagePortRef)remotePort;	// 0x3400ecbd
// declared property getter: - (int)serverFD;	// 0x3400ed15
// declared property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x3400eca5
// declared property setter: - (void)setPid:(int)pid;	// 0x3400ec49
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x3400ec79
// declared property setter: - (void)setRemoteAddress:(int)address;	// 0x3400ecfd
// declared property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x3400ecd1
// declared property setter: - (void)setServerFD:(int)fd;	// 0x3400ed29
@end

