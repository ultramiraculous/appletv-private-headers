/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "IOSBridgeAPI.h"


@interface NetflixObjCAPI : IOSBridgeAPI {
	IOSObjCEventConnection *objCEventConnection_;	// 4 = 0x4
}
@property(assign) IOSObjCEventConnection *objCEventConnection;	// G=0x55533d; S=0x555351; @synthesize=objCEventConnection_
+ (id)sharedInstance;	// 0x555075
- (void)cleanup;	// 0x5551bd
- (void)dealloc;	// 0x555161
// declared property getter: - (IOSObjCEventConnection *)objCEventConnection;	// 0x55533d
- (id)objectsync;	// 0x5551f5
// declared property setter: - (void)setObjCEventConnection:(IOSObjCEventConnection *)connection;	// 0x555351
- (void)writeResponse:(id)response;	// 0x555305
@end

