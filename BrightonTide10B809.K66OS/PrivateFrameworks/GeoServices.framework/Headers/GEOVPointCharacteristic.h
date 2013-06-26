/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOVLaneCharacteristic;

__attribute__((visibility("hidden")))
@interface GEOVPointCharacteristic : PBCodable {
	GEOVLaneCharacteristic *_laneCharacteristic;	// 4 = 0x4
	int _roadLaneCount;	// 8 = 0x8
	int _roadOffset;	// 12 = 0xc
	int _sectionIndex;	// 16 = 0x10
	int _vertexIndex;	// 20 = 0x14
	int _zLevel;	// 24 = 0x18
	BOOL _brunnelEntry;	// 28 = 0x1c
	BOOL _castShadow;	// 29 = 0x1d
	BOOL _cropped;	// 30 = 0x1e
	BOOL _shouldDrawLanes;	// 31 = 0x1f
	struct {
		unsigned basicPointsToBeIncluded : 1;
		unsigned trafficType : 1;
		unsigned transportType : 1;
		unsigned includeContingencyRoutes : 1;
		unsigned includeLaneGuidance : 1;
		unsigned includeNavigationInfo : 1;
		unsigned includePhonetics : 1;
		unsigned includeTrafficAlongRoute : 1;
		unsigned includeZilchPoints : 1;
	} _has;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL brunnelEntry;	// G=0x33ff1469; S=0x33feffed; @synthesize=_brunnelEntry
@property(assign, nonatomic) BOOL castShadow;	// G=0x33ff1459; S=0x33feff8d; @synthesize=_castShadow
@property(assign, nonatomic) BOOL cropped;	// G=0x33ff1419; S=0x33fefeb1; @synthesize=_cropped
@property(assign, nonatomic) BOOL hasBrunnelEntry;	// G=0x33ff0039; S=0x33ff0015; 
@property(assign, nonatomic) BOOL hasCastShadow;	// G=0x33feffd9; S=0x33feffb5; 
@property(assign, nonatomic) BOOL hasCropped;	// G=0x33fefefd; S=0x33fefed9; 
@property(readonly, assign, nonatomic) BOOL hasLaneCharacteristic;	// G=0x33feff11; 
@property(assign, nonatomic) BOOL hasRoadLaneCount;	// G=0x33fefddd; S=0x33fefdb9; 
@property(assign, nonatomic) BOOL hasRoadOffset;	// G=0x33fefe3d; S=0x33fefe19; 
@property(assign, nonatomic) BOOL hasSectionIndex;	// G=0x33fefd1d; S=0x33fefcf9; 
@property(assign, nonatomic) BOOL hasShouldDrawLanes;	// G=0x33feff75; S=0x33feff51; 
@property(assign, nonatomic) BOOL hasVertexIndex;	// G=0x33fefd7d; S=0x33fefd59; 
@property(assign, nonatomic) BOOL hasZLevel;	// G=0x33fefe9d; S=0x33fefe79; 
@property(retain, nonatomic) GEOVLaneCharacteristic *laneCharacteristic;	// G=0x33ff1429; S=0x33ff1439; @synthesize=_laneCharacteristic
@property(assign, nonatomic) int roadLaneCount;	// G=0x33ff13e9; S=0x33fefd91; @synthesize=_roadLaneCount
@property(assign, nonatomic) int roadOffset;	// G=0x33ff13f9; S=0x33fefdf1; @synthesize=_roadOffset
@property(assign, nonatomic) int sectionIndex;	// G=0x33ff13c9; S=0x33fefcd1; @synthesize=_sectionIndex
@property(assign, nonatomic) BOOL shouldDrawLanes;	// G=0x33ff1449; S=0x33feff29; @synthesize=_shouldDrawLanes
@property(assign, nonatomic) int vertexIndex;	// G=0x33ff13d9; S=0x33fefd31; @synthesize=_vertexIndex
@property(assign, nonatomic) int zLevel;	// G=0x33ff1409; S=0x33fefe51; @synthesize=_zLevel
// declared property getter: - (BOOL)brunnelEntry;	// 0x33ff1469
// declared property getter: - (BOOL)castShadow;	// 0x33ff1459
- (void)copyTo:(id)to;	// 0x33ff0d05
// declared property getter: - (BOOL)cropped;	// 0x33ff1419
- (void)dealloc;	// 0x33fefc8d
- (id)description;	// 0x33ff004d
- (id)dictionaryRepresentation;	// 0x33ff00bd
// declared property getter: - (BOOL)hasBrunnelEntry;	// 0x33ff0039
// declared property getter: - (BOOL)hasCastShadow;	// 0x33feffd9
// declared property getter: - (BOOL)hasCropped;	// 0x33fefefd
// declared property getter: - (BOOL)hasLaneCharacteristic;	// 0x33feff11
// declared property getter: - (BOOL)hasRoadLaneCount;	// 0x33fefddd
// declared property getter: - (BOOL)hasRoadOffset;	// 0x33fefe3d
// declared property getter: - (BOOL)hasSectionIndex;	// 0x33fefd1d
// declared property getter: - (BOOL)hasShouldDrawLanes;	// 0x33feff75
// declared property getter: - (BOOL)hasVertexIndex;	// 0x33fefd7d
// declared property getter: - (BOOL)hasZLevel;	// 0x33fefe9d
- (unsigned)hash;	// 0x33ff11d9
- (BOOL)isEqual:(id)equal;	// 0x33ff0f81
// declared property getter: - (id)laneCharacteristic;	// 0x33ff1429
- (BOOL)readFrom:(id)from;	// 0x33ff0aa9
// declared property getter: - (int)roadLaneCount;	// 0x33ff13e9
// declared property getter: - (int)roadOffset;	// 0x33ff13f9
// declared property getter: - (int)sectionIndex;	// 0x33ff13c9
// declared property setter: - (void)setBrunnelEntry:(BOOL)entry;	// 0x33feffed
// declared property setter: - (void)setCastShadow:(BOOL)shadow;	// 0x33feff8d
// declared property setter: - (void)setCropped:(BOOL)cropped;	// 0x33fefeb1
// declared property setter: - (void)setHasBrunnelEntry:(BOOL)entry;	// 0x33ff0015
// declared property setter: - (void)setHasCastShadow:(BOOL)shadow;	// 0x33feffb5
// declared property setter: - (void)setHasCropped:(BOOL)cropped;	// 0x33fefed9
// declared property setter: - (void)setHasRoadLaneCount:(BOOL)count;	// 0x33fefdb9
// declared property setter: - (void)setHasRoadOffset:(BOOL)offset;	// 0x33fefe19
// declared property setter: - (void)setHasSectionIndex:(BOOL)index;	// 0x33fefcf9
// declared property setter: - (void)setHasShouldDrawLanes:(BOOL)drawLanes;	// 0x33feff51
// declared property setter: - (void)setHasVertexIndex:(BOOL)index;	// 0x33fefd59
// declared property setter: - (void)setHasZLevel:(BOOL)level;	// 0x33fefe79
// declared property setter: - (void)setLaneCharacteristic:(id)characteristic;	// 0x33ff1439
// declared property setter: - (void)setRoadLaneCount:(int)count;	// 0x33fefd91
// declared property setter: - (void)setRoadOffset:(int)offset;	// 0x33fefdf1
// declared property setter: - (void)setSectionIndex:(int)index;	// 0x33fefcd1
// declared property setter: - (void)setShouldDrawLanes:(BOOL)drawLanes;	// 0x33feff29
// declared property setter: - (void)setVertexIndex:(int)index;	// 0x33fefd31
// declared property setter: - (void)setZLevel:(int)level;	// 0x33fefe51
// declared property getter: - (BOOL)shouldDrawLanes;	// 0x33ff1449
// declared property getter: - (int)vertexIndex;	// 0x33ff13d9
- (void)writeTo:(id)to;	// 0x33ff0ab5
// declared property getter: - (int)zLevel;	// 0x33ff1409
@end
