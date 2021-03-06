/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {
	NSMutableData *_trafficColors;	// 4 = 0x4
	NSMutableData *_trafficOffsets;	// 8 = 0x8
	unsigned _trafficDistance;	// 12 = 0xc
}
- (id)init;	// 0x339b5945
- (void)_removeDuplicateTraffic;	// 0x339b5d45
- (void)addTrafficFromETARoute:(id)etaroute;	// 0x339b5c61
- (void)addTrafficFromRoute:(id)route from:(unsigned)from to:(unsigned)to;	// 0x339b5a91
- (void)addTrafficFromRoute:(id)route withStepRange:(NSRange)stepRange;	// 0x339b5a39
- (void)copyTrafficToRoute:(id)route;	// 0x339b5e11
- (void)dealloc;	// 0x339b59d5
@end

