/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSData, NSMutableArray;

@interface GEOVectorTile : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	XXStruct_IJc5WD *_lines;	// 20 = 0x14
	unsigned _linesCount;	// 24 = 0x18
	unsigned _linesVertexCount;	// 28 = 0x1c
	GEOTileKey **_namedRoads;	// 32 = 0x20
	unsigned _namedRoadsCount;	// 36 = 0x24
	unsigned _namedRoadsVertexCount;	// 40 = 0x28
	GEOTileKey **_namedPoints;	// 44 = 0x2c
	unsigned _namedPointsCount;	// 48 = 0x30
	GEOTileKey **_namedPolygons;	// 52 = 0x34
	unsigned _namedPolygonsCount;	// 56 = 0x38
	XXStruct_IJc5WD *_coastlines;	// 60 = 0x3c
	unsigned _coastlinesCount;	// 64 = 0x40
	XXStruct_5hFgMD *_polygons;	// 68 = 0x44
	unsigned _polygonsCount;	// 72 = 0x48
	unsigned _polygonsVertexCount;	// 76 = 0x4c
	XXStruct_4WiXgC *_polygonLabelPositions;	// 80 = 0x50
	unsigned _polygonLabelPositionsCount;	// 84 = 0x54
	XXStruct_nzTP9A *_buildingFootprints;	// 88 = 0x58
	NSMutableData *_extrusionHeightsPool;	// 92 = 0x5c
	unsigned _buildingFootprintsCount;	// 96 = 0x60
	XXStruct_5JvWtA *_threeDBuildings;	// 100 = 0x64
	unsigned _threeDBuildingsCount;	// 104 = 0x68
	XXStruct_VZIFnD *_pois;	// 108 = 0x6c
	unsigned _poisCount;	// 112 = 0x70
	Angle *_overpasses;	// 116 = 0x74
	XXStruct_qFPbxC *_junctions;	// 120 = 0x78
	unsigned _junctionsCount;	// 124 = 0x7c
	BOOL _hasComputedJunctions;	// 128 = 0x80
	XXStruct_qFPbxC *_laneConnections;	// 132 = 0x84
	unsigned _laneConnectionsCount;	// 136 = 0x88
	XXStruct_qFPbxC *_pointsOnRoad;	// 140 = 0x8c
	unsigned _pointsOnRoadCount;	// 144 = 0x90
	GEOTileKey **_sortedPointsOnRoad;	// 148 = 0x94
	XXStruct_uYp3tB *_laneGeometry;	// 152 = 0x98
	XXStruct__qQs$B *_curveLineVertices;	// 156 = 0x9c
	unsigned *_curveToLineMapping;	// 160 = 0xa0
	XXStruct__qQs$B *_lineVertices;	// 164 = 0xa4
	XXStruct__qQs$B *_polygonVertices;	// 168 = 0xa8
	XXStruct__qQs$B *_coastlineVertices;	// 172 = 0xac
	XXStruct__qQs$B *_footprintVertices;	// 176 = 0xb0
	NSData *_labelPool;	// 180 = 0xb4
	XXStruct_xKvFHA *_labelPoolLanguages;	// 184 = 0xb8
	unsigned _labelPoolLanguagesLength;	// 188 = 0xbc
	NSMutableData *_localizedLabelPool;	// 192 = 0xc0
	char *_localizedLabelsLanguage;	// 196 = 0xc4
	XXStruct_BdOxqA *_labelIndex;	// 200 = 0xc8
	unsigned _labelIndexCount;	// 204 = 0xcc
	GEOFeatureShield *_shieldIndex;	// 208 = 0xd0
	unsigned _shieldIndexCount;	// 212 = 0xd4
	XXStruct_fJSKzC *_localizationTable;	// 216 = 0xd8
	unsigned _localizationTableCount;	// 220 = 0xdc
	NSMutableArray *_uniqueAttributes;	// 224 = 0xe0
	XXStruct_Jn2zBA *_lineCharacteristicPoints;	// 228 = 0xe4
	unsigned _lineCharacteristicPointCount;	// 232 = 0xe8
	XXStruct_Jn2zBA *_polygonCharacteristicPoints;	// 236 = 0xec
	unsigned _polygonCharacteristicPointCount;	// 240 = 0xf0
	XXStruct_Jn2zBA *_coastlineCharacteristicPoints;	// 244 = 0xf4
	unsigned _coastlineCharacteristicPointCount;	// 248 = 0xf8
}
@property(readonly, assign, nonatomic) XXStruct_nzTP9A *buildingFootprints;	// G=0x3458dd15; @synthesize=_buildingFootprints
@property(readonly, assign, nonatomic) unsigned buildingFootprintsCount;	// G=0x3458dd25; @synthesize=_buildingFootprintsCount
@property(readonly, assign, nonatomic) unsigned coastlineCharacteristicPointCount;	// G=0x3458de35; @synthesize=_coastlineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *coastlineCharacteristicPoints;	// G=0x3458de25; @synthesize=_coastlineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *coastlines;	// G=0x3458dcd5; @synthesize=_coastlines
@property(readonly, assign, nonatomic) unsigned coastlinesCount;	// G=0x3458dce5; @synthesize=_coastlinesCount
@property(readonly, assign, nonatomic) XXStruct__qQs$B *curveLineVertices;	// G=0x3458d625; 
@property(readonly, assign, nonatomic) BOOL dataIncludesConnectivity;	// G=0x3458dc35; 
@property(readonly, retain) NSMutableData *extrusionHeightsPool;	// G=0x3458d655; converted property
@property(readonly, assign, nonatomic) BOOL hasComputedJunctions;	// G=0x3458dda5; @synthesize=_hasComputedJunctions
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *junctions;	// G=0x3458dd85; @synthesize=_junctions
@property(readonly, assign, nonatomic) unsigned junctionsCount;	// G=0x3458dd95; @synthesize=_junctionsCount
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *laneConnections;	// G=0x3458ddc5; @synthesize=_laneConnections
@property(readonly, assign, nonatomic) unsigned laneConnectionsCount;	// G=0x3458ddd5; @synthesize=_laneConnectionsCount
@property(readonly, assign, nonatomic) unsigned lineCharacteristicPointCount;	// G=0x3458ddf5; @synthesize=_lineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *lineCharacteristicPoints;	// G=0x3458dde5; @synthesize=_lineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct__qQs$B *lineVertices;	// G=0x3458d615; 
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *lines;	// G=0x3458dc55; @synthesize=_lines
@property(readonly, assign, nonatomic) unsigned linesCount;	// G=0x3458dc65; @synthesize=_linesCount
@property(readonly, assign, nonatomic) unsigned linesVertexCount;	// G=0x3458da3d; @synthesize=_linesVertexCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPoints;	// G=0x3458dc95; @synthesize=_namedPoints
@property(readonly, assign, nonatomic) unsigned namedPointsCount;	// G=0x3458dca5; @synthesize=_namedPointsCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPolygons;	// G=0x3458dcb5; @synthesize=_namedPolygons
@property(readonly, assign, nonatomic) unsigned namedPolygonsCount;	// G=0x3458dcc5; @synthesize=_namedPolygonsCount
@property(readonly, assign, nonatomic) GEOTileKey **namedRoads;	// G=0x3458dc75; @synthesize=_namedRoads
@property(readonly, assign, nonatomic) unsigned namedRoadsCount;	// G=0x3458dc85; @synthesize=_namedRoadsCount
@property(readonly, assign, nonatomic) unsigned namedRoadsVertexCount;	// G=0x3458dae9; 
@property(readonly, assign, nonatomic) Angle *overpasses;	// G=0x3458dd75; @synthesize=_overpasses
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *pointsOnRoad;	// G=0x3458d635; @synthesize=_pointsOnRoad
@property(readonly, assign, nonatomic) unsigned pointsOnRoadCount;	// G=0x3458ddb5; @synthesize=_pointsOnRoadCount
@property(readonly, assign, nonatomic) XXStruct_VZIFnD *pois;	// G=0x3458dd55; @synthesize=_pois
@property(readonly, assign, nonatomic) unsigned poisCount;	// G=0x3458dd65; @synthesize=_poisCount
@property(readonly, assign, nonatomic) unsigned polygonCharacteristicPointCount;	// G=0x3458de15; @synthesize=_polygonCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *polygonCharacteristicPoints;	// G=0x3458de05; @synthesize=_polygonCharacteristicPoints
@property(readonly, assign) XXStruct_4WiXgC *polygonLabelPositions;	// G=0x3458d665; converted property
@property(readonly, assign, nonatomic) XXStruct_5hFgMD *polygons;	// G=0x3458dcf5; @synthesize=_polygons
@property(readonly, assign, nonatomic) unsigned polygonsCount;	// G=0x3458dd05; @synthesize=_polygonsCount
@property(readonly, assign, nonatomic) unsigned polygonsVertexCount;	// G=0x3458db89; @synthesize=_polygonsVertexCount
@property(readonly, assign) GEOTileKey **sortedPointsOnRoad;	// G=0x3458d645; converted property
@property(readonly, assign, nonatomic) XXStruct_5JvWtA *threeDBuildings;	// G=0x3458dd35; @synthesize=_threeDBuildings
@property(readonly, assign, nonatomic) unsigned threeDBuildingsCount;	// G=0x3458dd45; @synthesize=_threeDBuildingsCount
@property(readonly, assign, nonatomic) GEOTileKey tileKey;	// G=0x3458de45; @synthesize=_key
- (id)initWithTileData:(id)tileData localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x3458ce21
- (void)_attachRoadPoints;	// 0x345aa0a5
- (void)_buildSortedFeatureLists;	// 0x345aa159
- (void)_findJunctions;	// 0x345aa489
- (void)_findOverpasses;	// 0x345aa8d9
- (id)_initWithVMP3:(id)vmp3 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x345aab95
- (id)_initWithVMP4:(id)vmp4 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x345b574d
- (unsigned)_makeSpaceForLabels:(unsigned)labels;	// 0x345adfc1
- (unsigned)_makeSpaceForShields:(unsigned)shields;	// 0x345ae035
- (BOOL)_read3DBuildings:(XXStruct_tf976D *)buildings;	// 0x345b52d9
- (BOOL)_readCoastlines:(XXStruct_tf976D *)coastlines;	// 0x345b51f9
- (BOOL)_readInfoChapter:(XXStruct_tf976D *)chapter;	// 0x345ad935
- (BOOL)_readLabels:(XXStruct_tf976D *)labels;	// 0x345adba1
- (BOOL)_readLines:(XXStruct_tf976D *)lines;	// 0x345ae0a9
- (BOOL)_readPois:(XXStruct_tf976D *)pois;	// 0x345b3015
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons;	// 0x345b2fd5
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons ofType:(unsigned short)type;	// 0x345b1ec5
- (BOOL)_readSimpleCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x345b403d
- (BOOL)_readWrappingCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x345b48c9
- (void)_sortStyleAttributes;	// 0x345aaad1
// declared property getter: - (XXStruct_nzTP9A *)buildingFootprints;	// 0x3458dd15
// declared property getter: - (unsigned)buildingFootprintsCount;	// 0x3458dd25
// declared property getter: - (unsigned)coastlineCharacteristicPointCount;	// 0x3458de35
// declared property getter: - (XXStruct_Jn2zBA *)coastlineCharacteristicPoints;	// 0x3458de25
// declared property getter: - (XXStruct_IJc5WD *)coastlines;	// 0x3458dcd5
// declared property getter: - (unsigned)coastlinesCount;	// 0x3458dce5
// declared property getter: - (XXStruct__qQs$B *)curveLineVertices;	// 0x3458d625
// declared property getter: - (BOOL)dataIncludesConnectivity;	// 0x3458dc35
- (void)dealloc;	// 0x3458d151
- (id)description;	// 0x3458d525
// converted property getter: - (id)extrusionHeightsPool;	// 0x3458d655
- (void)forEachEdgeInRoad:(XXStruct_IJc5WD *)road visitTwice:(BOOL)twice visitor:(id)visitor;	// 0x3458d865
- (void)forEachEdgeOnJunction:(XXStruct_qFPbxC *)eachEdgeOnJunction visitor:(id)visitor;	// 0x3458d6c5
- (void)forEachJunction:(id)eachJunction;	// 0x3458d7a5
- (void)forEachJunctionInRoad:(XXStruct_IJc5WD *)road visitor:(id)visitor;	// 0x3458d9b5
- (void)forEachRoad:(id)eachRoad;	// 0x3458d675
// declared property getter: - (BOOL)hasComputedJunctions;	// 0x3458dda5
// declared property getter: - (XXStruct_qFPbxC *)junctions;	// 0x3458dd85
// declared property getter: - (unsigned)junctionsCount;	// 0x3458dd95
// declared property getter: - (XXStruct_qFPbxC *)laneConnections;	// 0x3458ddc5
// declared property getter: - (unsigned)laneConnectionsCount;	// 0x3458ddd5
// declared property getter: - (unsigned)lineCharacteristicPointCount;	// 0x3458ddf5
// declared property getter: - (XXStruct_Jn2zBA *)lineCharacteristicPoints;	// 0x3458dde5
// declared property getter: - (XXStruct__qQs$B *)lineVertices;	// 0x3458d615
// declared property getter: - (XXStruct_IJc5WD *)lines;	// 0x3458dc55
// declared property getter: - (unsigned)linesCount;	// 0x3458dc65
// declared property getter: - (unsigned)linesVertexCount;	// 0x3458da3d
// declared property getter: - (GEOTileKey **)namedPoints;	// 0x3458dc95
// declared property getter: - (unsigned)namedPointsCount;	// 0x3458dca5
// declared property getter: - (GEOTileKey **)namedPolygons;	// 0x3458dcb5
// declared property getter: - (unsigned)namedPolygonsCount;	// 0x3458dcc5
// declared property getter: - (GEOTileKey **)namedRoads;	// 0x3458dc75
// declared property getter: - (unsigned)namedRoadsCount;	// 0x3458dc85
// declared property getter: - (unsigned)namedRoadsVertexCount;	// 0x3458dae9
// declared property getter: - (Angle *)overpasses;	// 0x3458dd75
// declared property getter: - (XXStruct_qFPbxC *)pointsOnRoad;	// 0x3458d635
// declared property getter: - (unsigned)pointsOnRoadCount;	// 0x3458ddb5
// declared property getter: - (XXStruct_VZIFnD *)pois;	// 0x3458dd55
// declared property getter: - (unsigned)poisCount;	// 0x3458dd65
// declared property getter: - (unsigned)polygonCharacteristicPointCount;	// 0x3458de15
// declared property getter: - (XXStruct_Jn2zBA *)polygonCharacteristicPoints;	// 0x3458de05
// converted property getter: - (XXStruct_4WiXgC *)polygonLabelPositions;	// 0x3458d665
// declared property getter: - (XXStruct_5hFgMD *)polygons;	// 0x3458dcf5
// declared property getter: - (unsigned)polygonsCount;	// 0x3458dd05
// declared property getter: - (unsigned)polygonsVertexCount;	// 0x3458db89
// converted property getter: - (GEOTileKey **)sortedPointsOnRoad;	// 0x3458d645
// declared property getter: - (XXStruct_5JvWtA *)threeDBuildings;	// 0x3458dd35
// declared property getter: - (unsigned)threeDBuildingsCount;	// 0x3458dd45
// declared property getter: - (GEOTileKey)tileKey;	// 0x3458de45
@end

