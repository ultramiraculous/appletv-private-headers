/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableData, NSData;

@interface GEOVectorTile : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	XXStruct_IJc5WD *_lines;	// 20 = 0x14
	unsigned _linesCount;	// 24 = 0x18
	unsigned _linesVertexCount;	// 28 = 0x1c
	GEOTileKey **_namedRoadsByFeatureID;	// 32 = 0x20
	unsigned _namedRoadsByFeatureIDCount;	// 36 = 0x24
	unsigned _namedRoadsVertexCount;	// 40 = 0x28
	GEOTileKey **_namedPointsByFeatureID;	// 44 = 0x2c
	unsigned _namedPointsByFeatureIDCount;	// 48 = 0x30
	GEOTileKey **_namedPolygonsByFeatureID;	// 52 = 0x34
	unsigned _namedPolygonsByFeatureIDCount;	// 56 = 0x38
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
	XXStruct__$DoiB *_pois;	// 108 = 0x6c
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
@property(readonly, assign, nonatomic) XXStruct_nzTP9A *buildingFootprints;	// G=0x324c7ffd; @synthesize=_buildingFootprints
@property(readonly, assign, nonatomic) unsigned buildingFootprintsCount;	// G=0x324c800d; @synthesize=_buildingFootprintsCount
@property(readonly, assign, nonatomic) unsigned coastlineCharacteristicPointCount;	// G=0x324c811d; @synthesize=_coastlineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *coastlineCharacteristicPoints;	// G=0x324c810d; @synthesize=_coastlineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *coastlines;	// G=0x324c7fbd; @synthesize=_coastlines
@property(readonly, assign, nonatomic) unsigned coastlinesCount;	// G=0x324c7fcd; @synthesize=_coastlinesCount
@property(readonly, assign, nonatomic) XXStruct__qQs$B *curveLineVertices;	// G=0x324c790d; 
@property(readonly, assign, nonatomic) BOOL dataIncludesConnectivity;	// G=0x324c7f1d; 
@property(readonly, retain) NSMutableData *extrusionHeightsPool;	// G=0x324c793d; converted property
@property(readonly, assign, nonatomic) BOOL hasComputedJunctions;	// G=0x324c808d; @synthesize=_hasComputedJunctions
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *junctions;	// G=0x324c806d; @synthesize=_junctions
@property(readonly, assign, nonatomic) unsigned junctionsCount;	// G=0x324c807d; @synthesize=_junctionsCount
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *laneConnections;	// G=0x324c80ad; @synthesize=_laneConnections
@property(readonly, assign, nonatomic) unsigned laneConnectionsCount;	// G=0x324c80bd; @synthesize=_laneConnectionsCount
@property(readonly, assign, nonatomic) unsigned lineCharacteristicPointCount;	// G=0x324c80dd; @synthesize=_lineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *lineCharacteristicPoints;	// G=0x324c80cd; @synthesize=_lineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct__qQs$B *lineVertices;	// G=0x324c78fd; 
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *lines;	// G=0x324c7f3d; @synthesize=_lines
@property(readonly, assign, nonatomic) unsigned linesCount;	// G=0x324c7f4d; @synthesize=_linesCount
@property(readonly, assign, nonatomic) unsigned linesVertexCount;	// G=0x324c7d25; @synthesize=_linesVertexCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPointsByFeatureID;	// G=0x324c7f7d; @synthesize=_namedPointsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedPointsByFeatureIDCount;	// G=0x324c7f8d; @synthesize=_namedPointsByFeatureIDCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPolygonsByFeatureID;	// G=0x324c7f9d; @synthesize=_namedPolygonsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedPolygonsByFeatureIDCount;	// G=0x324c7fad; @synthesize=_namedPolygonsByFeatureIDCount
@property(readonly, assign, nonatomic) GEOTileKey **namedRoadsByFeatureID;	// G=0x324c7f5d; @synthesize=_namedRoadsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedRoadsByFeatureIDCount;	// G=0x324c7f6d; @synthesize=_namedRoadsByFeatureIDCount
@property(readonly, assign, nonatomic) unsigned namedRoadsVertexCount;	// G=0x324c7dd1; 
@property(readonly, assign, nonatomic) Angle *overpasses;	// G=0x324c805d; @synthesize=_overpasses
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *pointsOnRoad;	// G=0x324c791d; @synthesize=_pointsOnRoad
@property(readonly, assign, nonatomic) unsigned pointsOnRoadCount;	// G=0x324c809d; @synthesize=_pointsOnRoadCount
@property(readonly, assign, nonatomic) XXStruct__$DoiB *pois;	// G=0x324c803d; @synthesize=_pois
@property(readonly, assign, nonatomic) unsigned poisCount;	// G=0x324c804d; @synthesize=_poisCount
@property(readonly, assign, nonatomic) unsigned polygonCharacteristicPointCount;	// G=0x324c80fd; @synthesize=_polygonCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *polygonCharacteristicPoints;	// G=0x324c80ed; @synthesize=_polygonCharacteristicPoints
@property(readonly, assign) XXStruct_4WiXgC *polygonLabelPositions;	// G=0x324c794d; converted property
@property(readonly, assign, nonatomic) XXStruct_5hFgMD *polygons;	// G=0x324c7fdd; @synthesize=_polygons
@property(readonly, assign, nonatomic) unsigned polygonsCount;	// G=0x324c7fed; @synthesize=_polygonsCount
@property(readonly, assign, nonatomic) unsigned polygonsVertexCount;	// G=0x324c7e71; @synthesize=_polygonsVertexCount
@property(readonly, assign) GEOTileKey **sortedPointsOnRoad;	// G=0x324c792d; converted property
@property(readonly, assign, nonatomic) XXStruct_5JvWtA *threeDBuildings;	// G=0x324c801d; @synthesize=_threeDBuildings
@property(readonly, assign, nonatomic) unsigned threeDBuildingsCount;	// G=0x324c802d; @synthesize=_threeDBuildingsCount
@property(readonly, assign, nonatomic) GEOTileKey tileKey;	// G=0x324c812d; @synthesize=_key
- (id)initWithTileData:(id)tileData localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x324c7109
- (void)_attachRoadPoints;	// 0x324e4005
- (void)_buildSortedFeatureLists;	// 0x324e40b9
- (void)_findJunctions;	// 0x324e4559
- (void)_findOverpasses;	// 0x324e498d
- (id)_initWithVMP3:(id)vmp3 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x324e4c49
- (id)_initWithVMP4:(id)vmp4 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x324ef7a1
- (unsigned)_makeSpaceForLabels:(unsigned)labels;	// 0x324e8075
- (unsigned)_makeSpaceForShields:(unsigned)shields;	// 0x324e80e9
- (BOOL)_read3DBuildings:(XXStruct_tf976D *)buildings;	// 0x324ef32d
- (BOOL)_readCoastlines:(XXStruct_tf976D *)coastlines;	// 0x324ef24d
- (BOOL)_readInfoChapter:(XXStruct_tf976D *)chapter;	// 0x324e79e9
- (BOOL)_readLabels:(XXStruct_tf976D *)labels;	// 0x324e7c55
- (BOOL)_readLines:(XXStruct_tf976D *)lines;	// 0x324e815d
- (BOOL)_readPois:(XXStruct_tf976D *)pois;	// 0x324ed0c1
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons;	// 0x324ed081
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons ofType:(unsigned short)type;	// 0x324ebf71
- (BOOL)_readSimpleCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x324ee091
- (BOOL)_readWrappingCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x324ee91d
- (void)_sortStyleAttributes;	// 0x324e4b85
// declared property getter: - (XXStruct_nzTP9A *)buildingFootprints;	// 0x324c7ffd
// declared property getter: - (unsigned)buildingFootprintsCount;	// 0x324c800d
// declared property getter: - (unsigned)coastlineCharacteristicPointCount;	// 0x324c811d
// declared property getter: - (XXStruct_Jn2zBA *)coastlineCharacteristicPoints;	// 0x324c810d
// declared property getter: - (XXStruct_IJc5WD *)coastlines;	// 0x324c7fbd
// declared property getter: - (unsigned)coastlinesCount;	// 0x324c7fcd
// declared property getter: - (XXStruct__qQs$B *)curveLineVertices;	// 0x324c790d
// declared property getter: - (BOOL)dataIncludesConnectivity;	// 0x324c7f1d
- (void)dealloc;	// 0x324c7439
- (id)description;	// 0x324c780d
// converted property getter: - (id)extrusionHeightsPool;	// 0x324c793d
- (void)forEachEdgeInRoad:(XXStruct_IJc5WD *)road visitTwice:(BOOL)twice visitor:(id)visitor;	// 0x324c7b4d
- (void)forEachEdgeOnJunction:(XXStruct_qFPbxC *)eachEdgeOnJunction visitor:(id)visitor;	// 0x324c79ad
- (void)forEachJunction:(id)eachJunction;	// 0x324c7a8d
- (void)forEachJunctionInRoad:(XXStruct_IJc5WD *)road visitor:(id)visitor;	// 0x324c7c9d
- (void)forEachRoad:(id)eachRoad;	// 0x324c795d
// declared property getter: - (BOOL)hasComputedJunctions;	// 0x324c808d
// declared property getter: - (XXStruct_qFPbxC *)junctions;	// 0x324c806d
// declared property getter: - (unsigned)junctionsCount;	// 0x324c807d
// declared property getter: - (XXStruct_qFPbxC *)laneConnections;	// 0x324c80ad
// declared property getter: - (unsigned)laneConnectionsCount;	// 0x324c80bd
// declared property getter: - (unsigned)lineCharacteristicPointCount;	// 0x324c80dd
// declared property getter: - (XXStruct_Jn2zBA *)lineCharacteristicPoints;	// 0x324c80cd
// declared property getter: - (XXStruct__qQs$B *)lineVertices;	// 0x324c78fd
// declared property getter: - (XXStruct_IJc5WD *)lines;	// 0x324c7f3d
// declared property getter: - (unsigned)linesCount;	// 0x324c7f4d
// declared property getter: - (unsigned)linesVertexCount;	// 0x324c7d25
// declared property getter: - (GEOTileKey **)namedPointsByFeatureID;	// 0x324c7f7d
// declared property getter: - (unsigned)namedPointsByFeatureIDCount;	// 0x324c7f8d
// declared property getter: - (GEOTileKey **)namedPolygonsByFeatureID;	// 0x324c7f9d
// declared property getter: - (unsigned)namedPolygonsByFeatureIDCount;	// 0x324c7fad
// declared property getter: - (GEOTileKey **)namedRoadsByFeatureID;	// 0x324c7f5d
// declared property getter: - (unsigned)namedRoadsByFeatureIDCount;	// 0x324c7f6d
// declared property getter: - (unsigned)namedRoadsVertexCount;	// 0x324c7dd1
// declared property getter: - (Angle *)overpasses;	// 0x324c805d
// declared property getter: - (XXStruct_qFPbxC *)pointsOnRoad;	// 0x324c791d
// declared property getter: - (unsigned)pointsOnRoadCount;	// 0x324c809d
// declared property getter: - (XXStruct__$DoiB *)pois;	// 0x324c803d
// declared property getter: - (unsigned)poisCount;	// 0x324c804d
// declared property getter: - (unsigned)polygonCharacteristicPointCount;	// 0x324c80fd
// declared property getter: - (XXStruct_Jn2zBA *)polygonCharacteristicPoints;	// 0x324c80ed
// converted property getter: - (XXStruct_4WiXgC *)polygonLabelPositions;	// 0x324c794d
// declared property getter: - (XXStruct_5hFgMD *)polygons;	// 0x324c7fdd
// declared property getter: - (unsigned)polygonsCount;	// 0x324c7fed
// declared property getter: - (unsigned)polygonsVertexCount;	// 0x324c7e71
// converted property getter: - (GEOTileKey **)sortedPointsOnRoad;	// 0x324c792d
// declared property getter: - (XXStruct_5JvWtA *)threeDBuildings;	// 0x324c801d
// declared property getter: - (unsigned)threeDBuildingsCount;	// 0x324c802d
// declared property getter: - (GEOTileKey)tileKey;	// 0x324c812d
@end
