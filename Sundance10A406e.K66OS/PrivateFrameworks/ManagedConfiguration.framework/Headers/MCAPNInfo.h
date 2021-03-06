/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x357a407d; S=0x357a408d; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x357a40ed; S=0x357a40fd; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x357a4125; S=0x357a4135; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x357a415d; S=0x357a416d; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x357a40b5; S=0x357a40c5; @synthesize=_username
- (void).cxx_destruct;	// 0x357a4195
// declared property getter: - (id)apnName;	// 0x357a407d
- (id)defaultsRepresentation;	// 0x357a3e59
- (id)description;	// 0x357a3cd1
// declared property getter: - (id)password;	// 0x357a40ed
// declared property getter: - (id)proxy;	// 0x357a4125
// declared property getter: - (id)proxyPort;	// 0x357a415d
// declared property setter: - (void)setApnName:(id)name;	// 0x357a408d
// declared property setter: - (void)setPassword:(id)password;	// 0x357a40fd
// declared property setter: - (void)setProxy:(id)proxy;	// 0x357a4135
// declared property setter: - (void)setProxyPort:(id)port;	// 0x357a416d
// declared property setter: - (void)setUsername:(id)username;	// 0x357a40c5
- (id)strippedDefaultsRepresentation;	// 0x357a3de1
// declared property getter: - (id)username;	// 0x357a40b5
@end

