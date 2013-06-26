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
	NStatCounts _previouStatCounts;	// 84 = 0x54
	unsigned long long _routeID;	// 160 = 0xa0
	unsigned long long _parentRouteID;	// 168 = 0xa8
	unsigned long long _gatewayID;	// 176 = 0xb0
	sockaddr _hostAddress;	// 184 = 0xb8
	union {
		sockaddr sa;
		sockaddr_in sin;
		sockaddr_in6 sin6;
	} _gatewayAddress;	// 200 = 0xc8
	NSString *_interfaceName;	// 228 = 0xe4
	unsigned _flags;	// 232 = 0xe8
	id<ATVRouteDelegate> _delegate;	// 236 = 0xec
	NSString *_destinationIPAddress;	// 240 = 0xf0
	NSString *_gatewayIPAddress;	// 244 = 0xf4
}
@property(assign) id<ATVRouteDelegate> delegate;	// G=0x221b49; S=0x221b5d; @synthesize=_delegate
@property(retain) NSString *destinationIPAddress;	// G=0x221bbd; S=0x221bd1; @synthesize=_destinationIPAddress
@property(retain) NSString *gatewayIPAddress;	// G=0x221b99; S=0x221bad; @synthesize=_gatewayIPAddress
@property(retain) NSString *interfaceName;	// G=0x221b75; S=0x221b89; @synthesize=_interfaceName
- (id)initWithStatSource:(NStatSource *)statSource;	// 0x220c7d
- (void)asyncUpdateCounts;	// 0x221b31
- (void)configureRoute;	// 0x221015
- (id)cumulativeDescription;	// 0x2214d9
- (id)cumulativeStatsDictionary;	// 0x2215ad
- (void)dealloc;	// 0x220bf5
// declared property getter: - (id)delegate;	// 0x221b49
- (id)deltaDescription;	// 0x2213b1
- (id)deltaStatsDictionary;	// 0x221769
- (id)description;	// 0x2214c9
// declared property getter: - (id)destinationIPAddress;	// 0x221bbd
// declared property getter: - (id)gatewayIPAddress;	// 0x221b99
// declared property getter: - (id)interfaceName;	// 0x221b75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x221b5d
// declared property setter: - (void)setDestinationIPAddress:(id)address;	// 0x221bd1
// declared property setter: - (void)setGatewayIPAddress:(id)address;	// 0x221bad
// declared property setter: - (void)setInterfaceName:(id)name;	// 0x221b89
- (id)statsDictionary;	// 0x22159d
- (void)updateCounts;	// 0x221ad1
@end
