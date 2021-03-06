/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class GEORouteAttributes, NSData, NSMutableArray, GEOMapRegion, GEOLocation;

@interface GEODirectionsRequest : PBRequest {
	GEOMapRegion *_currentMapRegion;	// 4 = 0x4
	GEOLocation *_currentUserLocation;	// 8 = 0x8
	int _departureTime;	// 12 = 0xc
	unsigned _maxRouteCount;	// 16 = 0x10
	NSData *_originalRouteID;	// 20 = 0x14
	NSData *_originalRouteZilchPoints;	// 24 = 0x18
	GEORouteAttributes *_routeAttributes;	// 28 = 0x1c
	NSMutableArray *_serviceTags;	// 32 = 0x20
	unsigned _timeSinceLastRerouteRequest;	// 36 = 0x24
	NSMutableArray *_waypoints;	// 40 = 0x28
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 44 = 0x2c
}
@property(retain, nonatomic) GEOMapRegion *currentMapRegion;	// G=0x3796ed01; S=0x3796ed11; @synthesize=_currentMapRegion
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x3796ece1; S=0x3796ecf1; @synthesize=_currentUserLocation
@property(assign, nonatomic) int departureTime;	// G=0x3796ed61; S=0x3796d4dd; @synthesize=_departureTime
@property(readonly, assign, nonatomic) BOOL hasCurrentMapRegion;	// G=0x3796d411; 
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x3796d3f9; 
@property(assign, nonatomic) BOOL hasDepartureTime;	// G=0x3796d521; S=0x3796d505; 
@property(assign, nonatomic) BOOL hasMaxRouteCount;	// G=0x3796d3e5; S=0x3796d3c5; 
@property(readonly, assign, nonatomic) BOOL hasOriginalRouteID;	// G=0x3796d429; 
@property(readonly, assign, nonatomic) BOOL hasOriginalRouteZilchPoints;	// G=0x3796d441; 
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;	// G=0x3796d291; 
@property(assign, nonatomic) BOOL hasTimeSinceLastRerouteRequest;	// G=0x3796d4c9; S=0x3796d4a9; 
@property(assign, nonatomic) unsigned maxRouteCount;	// G=0x3796d375; S=0x3796d39d; @synthesize=_maxRouteCount
@property(retain, nonatomic) NSData *originalRouteID;	// G=0x3796ed21; S=0x3796ed31; @synthesize=_originalRouteID
@property(retain, nonatomic) NSData *originalRouteZilchPoints;	// G=0x3796ed41; S=0x3796ed51; @synthesize=_originalRouteZilchPoints
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;	// G=0x3796eca1; S=0x3796ecb1; @synthesize=_routeAttributes
@property(retain, nonatomic) NSMutableArray *serviceTags;	// G=0x3796ed71; S=0x3796ed81; @synthesize=_serviceTags
@property(assign, nonatomic) unsigned timeSinceLastRerouteRequest;	// G=0x3796d459; S=0x3796d481; @synthesize=_timeSinceLastRerouteRequest
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x3796ecc1; S=0x3796ecd1; @synthesize=_waypoints
- (void)addServiceTag:(id)tag;	// 0x3796d555
- (void)addWaypoint:(id)waypoint;	// 0x3796d2c9
- (void)clearServiceTags;	// 0x3796d535
- (void)clearWaypoints;	// 0x3796d2a9
- (void)copyTo:(id)to;	// 0x3796e61d
// declared property getter: - (id)currentMapRegion;	// 0x3796ed01
// declared property getter: - (id)currentUserLocation;	// 0x3796ece1
- (void)dealloc;	// 0x3796d1d5
// declared property getter: - (int)departureTime;	// 0x3796ed61
- (id)description;	// 0x3796d601
- (id)dictionaryRepresentation;	// 0x3796d671
// declared property getter: - (BOOL)hasCurrentMapRegion;	// 0x3796d411
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x3796d3f9
// declared property getter: - (BOOL)hasDepartureTime;	// 0x3796d521
// declared property getter: - (BOOL)hasMaxRouteCount;	// 0x3796d3e5
// declared property getter: - (BOOL)hasOriginalRouteID;	// 0x3796d429
// declared property getter: - (BOOL)hasOriginalRouteZilchPoints;	// 0x3796d441
// declared property getter: - (BOOL)hasRouteAttributes;	// 0x3796d291
// declared property getter: - (BOOL)hasTimeSinceLastRerouteRequest;	// 0x3796d4c9
- (unsigned)hash;	// 0x3796eb35
- (BOOL)isEqual:(id)equal;	// 0x3796e8f9
// declared property getter: - (unsigned)maxRouteCount;	// 0x3796d375
// declared property getter: - (id)originalRouteID;	// 0x3796ed21
// declared property getter: - (id)originalRouteZilchPoints;	// 0x3796ed41
- (BOOL)readFrom:(id)from;	// 0x3796e0ed
- (unsigned)requestTypeCode;	// 0x3796e5fd
- (Class)responseClass;	// 0x3796e601
// declared property getter: - (id)routeAttributes;	// 0x3796eca1
- (id)serviceTagAtIndex:(unsigned)index;	// 0x3796d5e1
// declared property getter: - (id)serviceTags;	// 0x3796ed71
- (unsigned)serviceTagsCount;	// 0x3796d5c1
// declared property setter: - (void)setCurrentMapRegion:(id)region;	// 0x3796ed11
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x3796ecf1
// declared property setter: - (void)setDepartureTime:(int)time;	// 0x3796d4dd
// declared property setter: - (void)setHasDepartureTime:(BOOL)time;	// 0x3796d505
// declared property setter: - (void)setHasMaxRouteCount:(BOOL)count;	// 0x3796d3c5
// declared property setter: - (void)setHasTimeSinceLastRerouteRequest:(BOOL)request;	// 0x3796d4a9
// declared property setter: - (void)setMaxRouteCount:(unsigned)count;	// 0x3796d39d
// declared property setter: - (void)setOriginalRouteID:(id)anId;	// 0x3796ed31
// declared property setter: - (void)setOriginalRouteZilchPoints:(id)points;	// 0x3796ed51
// declared property setter: - (void)setRouteAttributes:(id)attributes;	// 0x3796ecb1
// declared property setter: - (void)setServiceTags:(id)tags;	// 0x3796ed81
// declared property setter: - (void)setTimeSinceLastRerouteRequest:(unsigned)request;	// 0x3796d481
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x3796ecd1
// declared property getter: - (unsigned)timeSinceLastRerouteRequest;	// 0x3796d459
- (id)waypointAtIndex:(unsigned)index;	// 0x3796d355
// declared property getter: - (id)waypoints;	// 0x3796ecc1
- (unsigned)waypointsCount;	// 0x3796d335
- (void)writeTo:(id)to;	// 0x3796e0f9
@end

