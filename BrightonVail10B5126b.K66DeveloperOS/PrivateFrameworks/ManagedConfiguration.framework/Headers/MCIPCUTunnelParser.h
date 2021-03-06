/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCTunnelParser.h"

@class NSString, NSMutableDictionary;

@interface MCIPCUTunnelParser : MCTunnelParser {
	NSMutableDictionary *_CSR;	// 4 = 0x4
	NSString *_hostIdentifier;	// 8 = 0x8
}
- (void).cxx_destruct;	// 0x344d4e05
- (id)_commandGetEncryptionKey:(id)key;	// 0x344d391d
- (id)_commandGetProfileList:(id)list;	// 0x344d3c21
- (id)_commandHello:(id)hello;	// 0x344d38fd
- (id)_commandInstallProfile:(id)profile;	// 0x344d4831
- (id)_commandRemoveProfile:(id)profile;	// 0x344d417d
- (id)_commandSetCertificate:(id)certificate;	// 0x344d45cd
- (id)processRequest:(id)request;	// 0x344d4ad1
@end

