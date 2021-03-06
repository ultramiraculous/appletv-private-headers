/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol ATVRouteDelegate;

__attribute__((visibility("hidden")))
@interface ATVRoute : XXUnknownSuperclass {
	NStatSource *_statSource;	// 4 = 0x4
	NStatCounts _statCounts;	// 8 = 0x8
	NStatCounts _previouStatCounts;	// 116 = 0x74
	unsigned long long _routeID;	// 224 = 0xe0
	unsigned long long _parentRouteID;	// 232 = 0xe8
	unsigned long long _gatewayID;	// 240 = 0xf0
	sockaddr _hostAddress;	// 248 = 0xf8
	union {
		sockaddr sa;
		sockaddr_in sin;
		sockaddr_in6 sin6;
	} _gatewayAddress;	// 264 = 0x108
	NSString *_interfaceName;	// 292 = 0x124
	unsigned _flags;	// 296 = 0x128
	id<ATVRouteDelegate> _delegate;	// 300 = 0x12c
	NSString *_destinationIPAddress;	// 304 = 0x130
	NSString *_gatewayIPAddress;	// 308 = 0x134
}
@property(assign) id<ATVRouteDelegate> delegate;	// G=0x218cc1; S=0x218cd5; @synthesize=_delegate
@property(retain) NSString *destinationIPAddress;	// G=0x218d35; S=0x218d49; @synthesize=_destinationIPAddress
@property(retain) NSString *gatewayIPAddress;	// G=0x218d11; S=0x218d25; @synthesize=_gatewayIPAddress
@property(retain) NSString *interfaceName;	// G=0x218ced; S=0x218d01; @synthesize=_interfaceName
- (id)initWithStatSource:(NStatSource *)statSource;	// 0x217ddd
- (void)asyncUpdateCounts;	// 0x218ca9
- (void)configureRoute;	// 0x218175
- (id)cumulativeDescription;	// 0x218645
- (id)cumulativeStatsDictionary;	// 0x218725
- (void)dealloc;	// 0x217d55
// declared property getter: - (id)delegate;	// 0x218cc1
- (id)deltaDescription;	// 0x218511
- (id)deltaStatsDictionary;	// 0x2188e1
- (id)description;	// 0x218635
// declared property getter: - (id)destinationIPAddress;	// 0x218d35
// declared property getter: - (id)gatewayIPAddress;	// 0x218d11
// declared property getter: - (id)interfaceName;	// 0x218ced
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x218cd5
// declared property setter: - (void)setDestinationIPAddress:(id)address;	// 0x218d49
// declared property setter: - (void)setGatewayIPAddress:(id)address;	// 0x218d25
// declared property setter: - (void)setInterfaceName:(id)name;	// 0x218d01
- (id)statsDictionary;	// 0x218715
- (void)updateCounts;	// 0x218c49
@end

