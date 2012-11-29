/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVJunction : PBCodable {
	NSMutableArray *_connectingRoads;	// 4 = 0x4
	NSMutableArray *_laneConnections;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *connectingRoads;	// G=0x3399a7a5; S=0x3399a7b5; @synthesize=_connectingRoads
@property(retain, nonatomic) NSMutableArray *laneConnections;	// G=0x3399a7c5; S=0x3399a7d5; @synthesize=_laneConnections
- (void)addConnectingRoad:(id)road;	// 0x33999ca1
- (void)addLaneConnections:(id)connections;	// 0x33999d6d
- (void)clearConnectingRoads;	// 0x33999c81
- (void)clearLaneConnections;	// 0x33999d4d
- (id)connectingRoadAtIndex:(unsigned)index;	// 0x33999d2d
// declared property getter: - (id)connectingRoads;	// 0x3399a7a5
- (unsigned)connectingRoadsCount;	// 0x33999d0d
- (void)copyTo:(id)to;	// 0x3399a5d9
- (void)dealloc;	// 0x33999c29
- (id)description;	// 0x33999e19
- (id)dictionaryRepresentation;	// 0x33999e89
- (unsigned)hash;	// 0x3399a765
- (BOOL)isEqual:(id)equal;	// 0x3399a6c5
// declared property getter: - (id)laneConnections;	// 0x3399a7c5
- (id)laneConnectionsAtIndex:(unsigned)index;	// 0x33999df9
- (unsigned)laneConnectionsCount;	// 0x33999dd9
- (BOOL)readFrom:(id)from;	// 0x3399a369
// declared property setter: - (void)setConnectingRoads:(id)roads;	// 0x3399a7b5
// declared property setter: - (void)setLaneConnections:(id)connections;	// 0x3399a7d5
- (void)writeTo:(id)to;	// 0x3399a375
@end
