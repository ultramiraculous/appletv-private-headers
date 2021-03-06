/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSTimer, NSString, CalDAVAccount;

@interface CalDAVPrincipal : NSObject {
	NSString *_uid;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_server;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_scheme;	// 20 = 0x14
	NSString *_displayName;	// 24 = 0x18
	BOOL _useKerberos;	// 28 = 0x1c
	int _refreshInterval;	// 32 = 0x20
	NSTimer *_refreshTimer;	// 36 = 0x24
	CalDAVAccount *_account;	// 40 = 0x28
}
@property(readonly, assign) NSString *key;	// G=0x3145ab51; 
@property(retain) id mainAccount;	// G=0x3145adb1; S=0x3145ad79; converted property
@property(assign) int port;	// G=0x3145abe1; S=0x3145ab3d; 
@property(retain) NSString *scheme;	// G=0x3145ab65; S=0x3145aba5; 
@property(retain) NSString *server;	// G=0x3145ac21; S=0x3145ac61; 
@property(retain) NSString *uid;	// G=0x3145ab1d; S=0x3145acd9; 
@property(retain) NSString *username;	// G=0x3145ab2d; S=0x3145ac9d; 
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x3145b1ed
- (id)init;	// 0x3145afb9
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x3145afd1
- (id)configuration;	// 0x3145adf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3145ade1
- (void)dealloc;	// 0x3145af05
- (id)description;	// 0x3145ad55
// declared property getter: - (id)key;	// 0x3145ab51
// converted property getter: - (id)mainAccount;	// 0x3145adb1
// declared property getter: - (int)port;	// 0x3145abe1
// declared property getter: - (id)scheme;	// 0x3145ab65
// declared property getter: - (id)server;	// 0x3145ac21
// converted property setter: - (void)setMainAccount:(id)account;	// 0x3145ad79
// declared property setter: - (void)setPort:(int)port;	// 0x3145ab3d
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3145aba5
// declared property setter: - (void)setServer:(id)server;	// 0x3145ac61
// declared property setter: - (void)setUid:(id)uid;	// 0x3145acd9
// declared property setter: - (void)setUsername:(id)username;	// 0x3145ac9d
// declared property getter: - (id)uid;	// 0x3145ab1d
// declared property getter: - (id)username;	// 0x3145ab2d
@end

