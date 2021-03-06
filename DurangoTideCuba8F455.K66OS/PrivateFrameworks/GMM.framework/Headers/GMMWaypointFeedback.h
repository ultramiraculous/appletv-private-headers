/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMWaypointFeedback : PBCodable {
@private
	int _status;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	NSString *_streetViewPanoId;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x3444f80d; 
@property(assign, nonatomic) int status;	// G=0x3444f841; S=0x3444f851; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x3444f821; S=0x3444ff45; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x3444f831; S=0x3444ff1d; @synthesize=_waypoints
@property(readonly, assign, nonatomic) int waypointsCount;	// G=0x3444fe9d; 
- (id)init;	// 0x3444f861
- (void)addWaypoint:(id)waypoint;	// 0x3444fda1
- (void)dealloc;	// 0x3444fec1
- (id)description;	// 0x34431321
- (id)description;	// 0x3444f92d
- (id)dictionaryRepresentation;	// 0x3444f88d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x3444f80d
- (BOOL)readFrom:(id)from;	// 0x3444fbcd
// declared property setter: - (void)setStatus:(int)status;	// 0x3444f851
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x3444ff45
- (void)setWaypoint:(id)waypoint atIndex:(unsigned)index;	// 0x3444fe35
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x3444ff1d
// declared property getter: - (int)status;	// 0x3444f841
// declared property getter: - (id)streetViewPanoId;	// 0x3444f821
- (id)waypointAtIndex:(unsigned)index;	// 0x3444fdd1
// declared property getter: - (id)waypoints;	// 0x3444f831
// declared property getter: - (int)waypointsCount;	// 0x3444fe9d
- (void)writeTo:(id)to;	// 0x3444fa45
@end

