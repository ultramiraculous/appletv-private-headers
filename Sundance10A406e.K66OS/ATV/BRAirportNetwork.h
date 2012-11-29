/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRAirportNetwork : XXUnknownSuperclass {
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x37e839; S=0x37e849; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x37e58d; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x37e509
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x37e52d
- (id)init;	// 0x37e59d
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x37e859
- (void)dealloc;	// 0x37e5e1
// converted property getter: - (BOOL)isDirected;	// 0x37e839
- (id)name;	// 0x37e625
- (int)securityType;	// 0x37e645
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x37e849
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x37e58d
@end
