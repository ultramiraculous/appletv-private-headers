/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceSearchRequest, GEOLocation, NSMutableArray;

@interface GEOWaypoint : PBCodable {
	NSMutableArray *_entryPoints;	// 4 = 0x4
	GEOLocation *_location;	// 8 = 0x8
	GEOPlaceSearchRequest *_placeSearchRequest;	// 12 = 0xc
}
@property(retain, nonatomic) NSMutableArray *entryPoints;	// G=0x30f50885; S=0x30f50895; @synthesize=_entryPoints
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x30f4fd99; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x30f4fd81; 
@property(retain, nonatomic) GEOLocation *location;	// G=0x30f50865; S=0x30f50875; @synthesize=_location
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x30f50845; S=0x30f50855; @synthesize=_placeSearchRequest
- (id)initWithLocation:(id)location;	// 0x30ec6401
- (void)addEntryPoint:(id)point;	// 0x30f4fdd1
- (void)clearEntryPoints;	// 0x30f4fdb1
- (void)copyTo:(id)to;	// 0x30f5061d
- (void)dealloc;	// 0x30f4fd15
- (id)description;	// 0x30f4fe7d
- (id)dictionaryRepresentation;	// 0x30f4feed
- (id)entryPointAtIndex:(unsigned)index;	// 0x30f4fe5d
// declared property getter: - (id)entryPoints;	// 0x30f50885
- (unsigned)entryPointsCount;	// 0x30f4fe3d
// declared property getter: - (BOOL)hasLocation;	// 0x30f4fd99
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x30f4fd81
- (unsigned)hash;	// 0x30f507e9
- (BOOL)isEqual:(id)equal;	// 0x30f50719
// declared property getter: - (id)location;	// 0x30f50865
- (id)locationForWaypoint;	// 0x30ec644d
// declared property getter: - (id)placeSearchRequest;	// 0x30f50845
- (BOOL)readFrom:(id)from;	// 0x30f503a9
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x30f50895
// declared property setter: - (void)setLocation:(id)location;	// 0x30f50875
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x30f50855
- (void)writeTo:(id)to;	// 0x30f503b5
@end

