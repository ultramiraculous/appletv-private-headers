/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable {
	NSMutableArray *_trafficIncidents;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	NSData *_vertices;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x37987b81; 
@property(retain, nonatomic) NSMutableArray *trafficIncidents;	// G=0x37988739; S=0x37988749; @synthesize=_trafficIncidents
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x37988719; S=0x37988729; @synthesize=_trafficSegments
@property(retain, nonatomic) NSData *vertices;	// G=0x379886f9; S=0x37988709; @synthesize=_vertices
- (void)addTrafficIncident:(id)incident;	// 0x37987c85
- (void)addTrafficSegment:(id)segment;	// 0x37987bb9
- (void)clearTrafficIncidents;	// 0x37987c65
- (void)clearTrafficSegments;	// 0x37987b99
- (void)copyTo:(id)to;	// 0x379884a5
- (XXStruct_K5nmsA *)createUnpackedVerticesWithGutterSize:(int)gutterSize;	// 0x37988871
- (void)dealloc;	// 0x37987b15
- (id)description;	// 0x37987d31
- (id)dictionaryRepresentation;	// 0x37987da1
// declared property getter: - (BOOL)hasVertices;	// 0x37987b81
- (unsigned)hash;	// 0x3798869d
- (BOOL)isEqual:(id)equal;	// 0x379885cd
- (BOOL)readFrom:(id)from;	// 0x379882b9
// declared property setter: - (void)setTrafficIncidents:(id)incidents;	// 0x37988749
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x37988729
// declared property setter: - (void)setVertices:(id)vertices;	// 0x37988709
- (id)trafficIncidentAtIndex:(unsigned)index;	// 0x37987d11
// declared property getter: - (id)trafficIncidents;	// 0x37988739
- (unsigned)trafficIncidentsCount;	// 0x37987cf1
- (id)trafficSegmentAtIndex:(unsigned)index;	// 0x37987c45
// declared property getter: - (id)trafficSegments;	// 0x37988719
- (unsigned)trafficSegmentsCount;	// 0x37987c25
// declared property getter: - (id)vertices;	// 0x379886f9
- (void)writeTo:(id)to;	// 0x379882c5
@end

