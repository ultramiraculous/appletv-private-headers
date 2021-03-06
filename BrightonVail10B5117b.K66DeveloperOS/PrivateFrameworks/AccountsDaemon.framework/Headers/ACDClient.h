/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject {
	xpc_connection_s *_connection;	// 4 = 0x4
	NSString *_bundleID;	// 8 = 0x8
	CFBundleRef _bundle;	// 12 = 0xc
	NSNumber *_pid;	// 16 = 0x10
	NSString *_localizedAppName;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
	NSMutableDictionary *_accessOptions;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *adamOrDisplayID;	// G=0x3357d701; 
@property(readonly, assign, nonatomic) CFBundleRef bundle;	// G=0x3357d72d; 
@property(retain, nonatomic) NSString *bundleID;	// G=0x3357d481; S=0x3357d44d; @synthesize=_bundleID
@property(readonly, assign, nonatomic) xpc_connection_s *connection;	// G=0x3357d971; @synthesize=_connection
@property(readonly, assign, nonatomic) NSString *localizedAppName;	// G=0x3357d4cd; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3357d519; 
@property(readonly, assign, nonatomic) NSNumber *pid;	// G=0x3357d3d5; 
+ (id)clientWithBundleID:(id)bundleID;	// 0x3357d2d9
- (id)initWithConnection:(xpc_connection_s *)connection;	// 0x3357d341
- (void).cxx_destruct;	// 0x3357d981
// declared property getter: - (id)adamOrDisplayID;	// 0x3357d701
// declared property getter: - (CFBundleRef)bundle;	// 0x3357d72d
// declared property getter: - (id)bundleID;	// 0x3357d481
// declared property getter: - (xpc_connection_s *)connection;	// 0x3357d971
- (void)dealloc;	// 0x3357d38d
- (id)debugDescription;	// 0x3357d8dd
- (BOOL)hasEntitlement:(id)entitlement;	// 0x3357d8b9
// declared property getter: - (id)localizedAppName;	// 0x3357d4cd
// declared property getter: - (id)name;	// 0x3357d519
// declared property getter: - (id)pid;	// 0x3357d3d5
// declared property setter: - (void)setBundleID:(id)anId;	// 0x3357d44d
@end

