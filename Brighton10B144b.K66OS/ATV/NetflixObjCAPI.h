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
@property(assign) IOSObjCEventConnection *objCEventConnection;	// G=0x4f9a15; S=0x4f9a29; @synthesize=objCEventConnection_
+ (id)sharedInstance;	// 0x4f974d
- (void)cleanup;	// 0x4f9895
- (void)dealloc;	// 0x4f9839
// declared property getter: - (IOSObjCEventConnection *)objCEventConnection;	// 0x4f9a15
- (id)objectsync;	// 0x4f98cd
// declared property setter: - (void)setObjCEventConnection:(IOSObjCEventConnection *)connection;	// 0x4f9a29
- (void)writeResponse:(id)response;	// 0x4f99dd
@end

