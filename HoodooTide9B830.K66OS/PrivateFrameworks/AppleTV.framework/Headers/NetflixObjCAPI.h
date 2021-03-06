/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "IOSBridgeAPI.h"


__attribute__((visibility("hidden")))
@interface NetflixObjCAPI : IOSBridgeAPI {
@private
	IOSObjCEventConnection *objCEventConnection_;	// 4 = 0x4
}
@property(assign) IOSObjCEventConnection *objCEventConnection;	// G=0x32c84495; S=0x32c844a5; @synthesize=objCEventConnection_
+ (id)sharedInstance;	// 0x32c841d1
- (void)cleanup;	// 0x32c84311
- (void)dealloc;	// 0x32c842b1
// declared property getter: - (IOSObjCEventConnection *)objCEventConnection;	// 0x32c84495
- (id)objectsync;	// 0x32c8434d
// declared property setter: - (void)setObjCEventConnection:(IOSObjCEventConnection *)connection;	// 0x32c844a5
- (void)writeResponse:(id)response;	// 0x32c8445d
@end

