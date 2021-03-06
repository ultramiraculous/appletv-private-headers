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
@private
	NSMutableArray *_trafficIncidents;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	NSData *_vertices;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x34b1a0c1; 
@property(retain, nonatomic) NSMutableArray *trafficIncidents;	// G=0x34b1ac79; S=0x34b1ac89; @synthesize=_trafficIncidents
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x34b1ac59; S=0x34b1ac69; @synthesize=_trafficSegments
@property(retain, nonatomic) NSData *vertices;	// G=0x34b1ac39; S=0x34b1ac49; @synthesize=_vertices
- (void)addTrafficIncident:(id)incident;	// 0x34b1a1c5
- (void)addTrafficSegment:(id)segment;	// 0x34b1a0f9
- (void)clearTrafficIncidents;	// 0x34b1a1a5
- (void)clearTrafficSegments;	// 0x34b1a0d9
- (void)copyTo:(id)to;	// 0x34b1a9e5
- (XXStruct_K5nmsA *)createUnpackedVerticesWithGutterSize:(int)gutterSize;	// 0x34b1adb9
- (void)dealloc;	// 0x34b1a055
- (id)description;	// 0x34b1a271
- (id)dictionaryRepresentation;	// 0x34b1a2e1
// declared property getter: - (BOOL)hasVertices;	// 0x34b1a0c1
- (unsigned)hash;	// 0x34b1abdd
- (BOOL)isEqual:(id)equal;	// 0x34b1ab0d
- (BOOL)readFrom:(id)from;	// 0x34b1a7f9
// declared property setter: - (void)setTrafficIncidents:(id)incidents;	// 0x34b1ac89
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x34b1ac69
// declared property setter: - (void)setVertices:(id)vertices;	// 0x34b1ac49
- (id)trafficIncidentAtIndex:(unsigned)index;	// 0x34b1a251
// declared property getter: - (id)trafficIncidents;	// 0x34b1ac79
- (unsigned)trafficIncidentsCount;	// 0x34b1a231
- (id)trafficSegmentAtIndex:(unsigned)index;	// 0x34b1a185
// declared property getter: - (id)trafficSegments;	// 0x34b1ac59
- (unsigned)trafficSegmentsCount;	// 0x34b1a165
// declared property getter: - (id)vertices;	// 0x34b1ac39
- (void)writeTo:(id)to;	// 0x34b1a805
@end

