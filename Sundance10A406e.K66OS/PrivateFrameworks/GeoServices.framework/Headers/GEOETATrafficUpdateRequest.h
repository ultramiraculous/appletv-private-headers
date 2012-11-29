/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEORouteAttributes, NSMutableArray, GEOLocation;

@interface GEOETATrafficUpdateRequest : PBRequest {
	GEOLocation *_currentUserLocation;	// 4 = 0x4
	NSMutableArray *_destinationWaypoints;	// 8 = 0x8
	GEORouteAttributes *_routeAttributes;	// 12 = 0xc
	NSMutableArray *_routes;	// 16 = 0x10
	NSMutableArray *_serviceTags;	// 20 = 0x14
	BOOL _includeBetterRouteSuggestion;	// 24 = 0x18
	XXStruct_ec15KC _has;	// 25 = 0x19
}
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x379eb57d; S=0x379eb58d; @synthesize=_currentUserLocation
@property(retain, nonatomic) NSMutableArray *destinationWaypoints;	// G=0x379eb5bd; S=0x379eb5cd; @synthesize=_destinationWaypoints
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x379ea009; 
@property(assign, nonatomic) BOOL hasIncludeBetterRouteSuggestion;	// G=0x379ea0a5; S=0x379ea089; 
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;	// G=0x379ea021; 
@property(assign, nonatomic) BOOL includeBetterRouteSuggestion;	// G=0x379ea039; S=0x379ea061; @synthesize=_includeBetterRouteSuggestion
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;	// G=0x379eb59d; S=0x379eb5ad; @synthesize=_routeAttributes
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x379eb5dd; S=0x379eb5ed; @synthesize=_routes
@property(retain, nonatomic) NSMutableArray *serviceTags;	// G=0x379eb5fd; S=0x379eb60d; @synthesize=_serviceTags
- (void)addDestinationWaypoint:(id)waypoint;	// 0x379ea0d9
- (void)addRoute:(id)route;	// 0x379ea1a5
- (void)addServiceTag:(id)tag;	// 0x379ea271
- (void)clearDestinationWaypoints;	// 0x379ea0b9
- (void)clearRoutes;	// 0x379ea185
- (void)clearServiceTags;	// 0x379ea251
- (void)copyTo:(id)to;	// 0x379eb121
// declared property getter: - (id)currentUserLocation;	// 0x379eb57d
- (void)dealloc;	// 0x379e9f75
- (id)description;	// 0x379ea31d
- (id)destinationWaypointAtIndex:(unsigned)index;	// 0x379ea165
// declared property getter: - (id)destinationWaypoints;	// 0x379eb5bd
- (unsigned)destinationWaypointsCount;	// 0x379ea145
- (id)dictionaryRepresentation;	// 0x379ea38d
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x379ea009
// declared property getter: - (BOOL)hasIncludeBetterRouteSuggestion;	// 0x379ea0a5
// declared property getter: - (BOOL)hasRouteAttributes;	// 0x379ea021
- (unsigned)hash;	// 0x379eb4a5
// declared property getter: - (BOOL)includeBetterRouteSuggestion;	// 0x379ea039
- (BOOL)isEqual:(id)equal;	// 0x379eb331
- (BOOL)readFrom:(id)from;	// 0x379eac41
- (unsigned)requestTypeCode;	// 0x379eb101
- (Class)responseClass;	// 0x379eb105
- (id)routeAtIndex:(unsigned)index;	// 0x379ea231
// declared property getter: - (id)routeAttributes;	// 0x379eb59d
// declared property getter: - (id)routes;	// 0x379eb5dd
- (unsigned)routesCount;	// 0x379ea211
- (id)serviceTagAtIndex:(unsigned)index;	// 0x379ea2fd
// declared property getter: - (id)serviceTags;	// 0x379eb5fd
- (unsigned)serviceTagsCount;	// 0x379ea2dd
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x379eb58d
// declared property setter: - (void)setDestinationWaypoints:(id)waypoints;	// 0x379eb5cd
// declared property setter: - (void)setHasIncludeBetterRouteSuggestion:(BOOL)suggestion;	// 0x379ea089
// declared property setter: - (void)setIncludeBetterRouteSuggestion:(BOOL)suggestion;	// 0x379ea061
// declared property setter: - (void)setRouteAttributes:(id)attributes;	// 0x379eb5ad
// declared property setter: - (void)setRoutes:(id)routes;	// 0x379eb5ed
// declared property setter: - (void)setServiceTags:(id)tags;	// 0x379eb60d
- (void)writeTo:(id)to;	// 0x379eac4d
@end
