/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSCopying.h"
#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
	struct {
		unsigned key;
		int value;
	} v[16];	// 4 = 0x4
}
- (id)init;	// 0x338ff525
- (id)copyWithZone:(NSZone *)zone;	// 0x3390c385
- (id)description;	// 0x33995469
- (unsigned)hash;	// 0x33995435
- (BOOL)isEqual:(id)equal;	// 0x3399541d
- (BOOL)isFreeway;	// 0x33995581
- (BOOL)isRamp;	// 0x3399554d
- (BOOL)isTunnel;	// 0x33995519
- (void)sort;	// 0x3390cfa1
@end

