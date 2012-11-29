/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOMapRegion, GEOPlaceSearchRequest, NSString, GEOLocation;

@interface GEOMapQuery : PBCodable {
	XXStruct_t9EeIA _sessionID;	// 4 = 0x4
	int _clientImgFmt;	// 20 = 0x14
	int _clientImgMaxHeight;	// 24 = 0x18
	int _clientImgMaxWidth;	// 28 = 0x1c
	int _mapCenterX;	// 32 = 0x20
	int _mapCenterY;	// 36 = 0x24
	GEOMapRegion *_mapRegion;	// 40 = 0x28
	int _mapSpanX;	// 44 = 0x2c
	int _mapSpanY;	// 48 = 0x30
	GEOPlaceSearchRequest *_placeSearchRequest;	// 52 = 0x34
	NSString *_query;	// 56 = 0x38
	int _requestType;	// 60 = 0x3c
	int _tilesizeX;	// 64 = 0x40
	int _tilesizeY;	// 68 = 0x44
	GEOLocation *_userLocation;	// 72 = 0x48
	int _zoomlevel;	// 76 = 0x4c
	struct {
		unsigned sessionID : 1;
		unsigned clientImgFmt : 1;
		unsigned clientImgMaxHeight : 1;
		unsigned clientImgMaxWidth : 1;
		unsigned mapCenterX : 1;
		unsigned mapCenterY : 1;
		unsigned mapSpanX : 1;
		unsigned mapSpanY : 1;
		unsigned requestType : 1;
		unsigned tilesizeX : 1;
		unsigned tilesizeY : 1;
		unsigned zoomlevel : 1;
	} _has;	// 80 = 0x50
}
@property(assign, nonatomic) int clientImgFmt;	// G=0x32449351; S=0x3244716d; @synthesize=_clientImgFmt
@property(assign, nonatomic) int clientImgMaxHeight;	// G=0x32449391; S=0x324472ed; @synthesize=_clientImgMaxHeight
@property(assign, nonatomic) int clientImgMaxWidth;	// G=0x32449381; S=0x3244728d; @synthesize=_clientImgMaxWidth
@property(assign, nonatomic) BOOL hasClientImgFmt;	// G=0x324471b9; S=0x32447195; 
@property(assign, nonatomic) BOOL hasClientImgMaxHeight;	// G=0x32447339; S=0x32447315; 
@property(assign, nonatomic) BOOL hasClientImgMaxWidth;	// G=0x324472d9; S=0x324472b5; 
@property(assign, nonatomic) BOOL hasMapCenterX;	// G=0x32446fd9; S=0x32446fb5; 
@property(assign, nonatomic) BOOL hasMapCenterY;	// G=0x32447039; S=0x32447015; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x3244734d; 
@property(assign, nonatomic) BOOL hasMapSpanX;	// G=0x32447099; S=0x32447075; 
@property(assign, nonatomic) BOOL hasMapSpanY;	// G=0x324470f9; S=0x324470d5; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x324473f5; 
@property(readonly, assign, nonatomic) BOOL hasQuery;	// G=0x32446f11; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x32446f75; S=0x32446f51; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x324473e1; S=0x324473bd; 
@property(assign, nonatomic) BOOL hasTilesizeX;	// G=0x32447219; S=0x324471f5; 
@property(assign, nonatomic) BOOL hasTilesizeY;	// G=0x32447279; S=0x32447255; 
@property(readonly, assign, nonatomic) BOOL hasUserLocation;	// G=0x32447365; 
@property(assign, nonatomic) BOOL hasZoomlevel;	// G=0x32447159; S=0x32447135; 
@property(assign, nonatomic) int mapCenterX;	// G=0x32449301; S=0x32446f8d; @synthesize=_mapCenterX
@property(assign, nonatomic) int mapCenterY;	// G=0x32449311; S=0x32446fed; @synthesize=_mapCenterY
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x324493a1; S=0x324493b1; @synthesize=_mapRegion
@property(assign, nonatomic) int mapSpanX;	// G=0x32449321; S=0x3244704d; @synthesize=_mapSpanX
@property(assign, nonatomic) int mapSpanY;	// G=0x32449331; S=0x324470ad; @synthesize=_mapSpanY
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x32449405; S=0x32449415; @synthesize=_placeSearchRequest
@property(retain, nonatomic) NSString *query;	// G=0x324492d1; S=0x324492e1; @synthesize=_query
@property(assign, nonatomic) int requestType;	// G=0x324492f1; S=0x32446f29; @synthesize=_requestType
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x324493e1; S=0x3244737d; @synthesize=_sessionID
@property(assign, nonatomic) int tilesizeX;	// G=0x32449361; S=0x324471cd; @synthesize=_tilesizeX
@property(assign, nonatomic) int tilesizeY;	// G=0x32449371; S=0x3244722d; @synthesize=_tilesizeY
@property(retain, nonatomic) GEOLocation *userLocation;	// G=0x324493c1; S=0x324493d1; @synthesize=_userLocation
@property(assign, nonatomic) int zoomlevel;	// G=0x32449341; S=0x3244710d; @synthesize=_zoomlevel
// declared property getter: - (int)clientImgFmt;	// 0x32449351
// declared property getter: - (int)clientImgMaxHeight;	// 0x32449391
// declared property getter: - (int)clientImgMaxWidth;	// 0x32449381
- (void)copyTo:(id)to;	// 0x32448869
- (void)dealloc;	// 0x32446e91
- (id)description;	// 0x3244740d
- (id)dictionaryRepresentation;	// 0x3244747d
// declared property getter: - (BOOL)hasClientImgFmt;	// 0x324471b9
// declared property getter: - (BOOL)hasClientImgMaxHeight;	// 0x32447339
// declared property getter: - (BOOL)hasClientImgMaxWidth;	// 0x324472d9
// declared property getter: - (BOOL)hasMapCenterX;	// 0x32446fd9
// declared property getter: - (BOOL)hasMapCenterY;	// 0x32447039
// declared property getter: - (BOOL)hasMapRegion;	// 0x3244734d
// declared property getter: - (BOOL)hasMapSpanX;	// 0x32447099
// declared property getter: - (BOOL)hasMapSpanY;	// 0x324470f9
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x324473f5
// declared property getter: - (BOOL)hasQuery;	// 0x32446f11
// declared property getter: - (BOOL)hasRequestType;	// 0x32446f75
// declared property getter: - (BOOL)hasSessionID;	// 0x324473e1
// declared property getter: - (BOOL)hasTilesizeX;	// 0x32447219
// declared property getter: - (BOOL)hasTilesizeY;	// 0x32447279
// declared property getter: - (BOOL)hasUserLocation;	// 0x32447365
// declared property getter: - (BOOL)hasZoomlevel;	// 0x32447159
- (unsigned)hash;	// 0x3244901d
- (BOOL)isEqual:(id)equal;	// 0x32448c79
// declared property getter: - (int)mapCenterX;	// 0x32449301
// declared property getter: - (int)mapCenterY;	// 0x32449311
// declared property getter: - (id)mapRegion;	// 0x324493a1
// declared property getter: - (int)mapSpanX;	// 0x32449321
// declared property getter: - (int)mapSpanY;	// 0x32449331
// declared property getter: - (id)placeSearchRequest;	// 0x32449405
// declared property getter: - (id)query;	// 0x324492d1
- (BOOL)readFrom:(id)from;	// 0x32448401
// declared property getter: - (int)requestType;	// 0x324492f1
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x324493e1
// declared property setter: - (void)setClientImgFmt:(int)fmt;	// 0x3244716d
// declared property setter: - (void)setClientImgMaxHeight:(int)height;	// 0x324472ed
// declared property setter: - (void)setClientImgMaxWidth:(int)width;	// 0x3244728d
// declared property setter: - (void)setHasClientImgFmt:(BOOL)fmt;	// 0x32447195
// declared property setter: - (void)setHasClientImgMaxHeight:(BOOL)height;	// 0x32447315
// declared property setter: - (void)setHasClientImgMaxWidth:(BOOL)width;	// 0x324472b5
// declared property setter: - (void)setHasMapCenterX:(BOOL)x;	// 0x32446fb5
// declared property setter: - (void)setHasMapCenterY:(BOOL)y;	// 0x32447015
// declared property setter: - (void)setHasMapSpanX:(BOOL)x;	// 0x32447075
// declared property setter: - (void)setHasMapSpanY:(BOOL)y;	// 0x324470d5
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x32446f51
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x324473bd
// declared property setter: - (void)setHasTilesizeX:(BOOL)x;	// 0x324471f5
// declared property setter: - (void)setHasTilesizeY:(BOOL)y;	// 0x32447255
// declared property setter: - (void)setHasZoomlevel:(BOOL)zoomlevel;	// 0x32447135
// declared property setter: - (void)setMapCenterX:(int)x;	// 0x32446f8d
// declared property setter: - (void)setMapCenterY:(int)y;	// 0x32446fed
// declared property setter: - (void)setMapRegion:(id)region;	// 0x324493b1
// declared property setter: - (void)setMapSpanX:(int)x;	// 0x3244704d
// declared property setter: - (void)setMapSpanY:(int)y;	// 0x324470ad
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x32449415
// declared property setter: - (void)setQuery:(id)query;	// 0x324492e1
// declared property setter: - (void)setRequestType:(int)type;	// 0x32446f29
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x3244737d
// declared property setter: - (void)setTilesizeX:(int)x;	// 0x324471cd
// declared property setter: - (void)setTilesizeY:(int)y;	// 0x3244722d
// declared property setter: - (void)setUserLocation:(id)location;	// 0x324493d1
// declared property setter: - (void)setZoomlevel:(int)zoomlevel;	// 0x3244710d
// declared property getter: - (int)tilesizeX;	// 0x32449361
// declared property getter: - (int)tilesizeY;	// 0x32449371
// declared property getter: - (id)userLocation;	// 0x324493c1
- (void)writeTo:(id)to;	// 0x3244840d
// declared property getter: - (int)zoomlevel;	// 0x32449341
@end
