/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapPoint, GMMPixelPoint, GMMPolygon, GMMPolyLine, GMMEfficientMapPoint;

__attribute__((visibility("hidden")))
@interface GMMGeometry : PBCodable {
	int _type;	// 4 = 0x4
	GMMMapPoint *_mapPoint;	// 8 = 0x8
	GMMPolyLine *_polyLine;	// 12 = 0xc
	GMMPolygon *_polygon;	// 16 = 0x10
	GMMPixelPoint *_pixelPoint;	// 20 = 0x14
	GMMEfficientMapPoint *_efficientMapPoint;	// 24 = 0x18
}
@property(retain, nonatomic) GMMEfficientMapPoint *efficientMapPoint;	// G=0x33cc1d29; S=0x33cc1d39; @synthesize=_efficientMapPoint
@property(readonly, assign, nonatomic) BOOL hasEfficientMapPoint;	// G=0x33cc1481; 
@property(readonly, assign, nonatomic) BOOL hasMapPoint;	// G=0x33cc1421; 
@property(readonly, assign, nonatomic) BOOL hasPixelPoint;	// G=0x33cc1469; 
@property(readonly, assign, nonatomic) BOOL hasPolyLine;	// G=0x33cc1439; 
@property(readonly, assign, nonatomic) BOOL hasPolygon;	// G=0x33cc1451; 
@property(retain, nonatomic) GMMMapPoint *mapPoint;	// G=0x33cc1c59; S=0x33cc1c69; @synthesize=_mapPoint
@property(retain, nonatomic) GMMPixelPoint *pixelPoint;	// G=0x33cc1cf5; S=0x33cc1d05; @synthesize=_pixelPoint
@property(retain, nonatomic) GMMPolyLine *polyLine;	// G=0x33cc1c8d; S=0x33cc1c9d; @synthesize=_polyLine
@property(retain, nonatomic) GMMPolygon *polygon;	// G=0x33cc1cc1; S=0x33cc1cd1; @synthesize=_polygon
@property(assign, nonatomic) int type;	// G=0x33cc1c39; S=0x33cc1c49; @synthesize=_type
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x33ceb9f1
- (void)dealloc;	// 0x33cc138d
- (id)description;	// 0x33cc1499
- (id)description;	// 0x33cb9181
- (id)dictionaryRepresentation;	// 0x33cc1509
// declared property getter: - (id)efficientMapPoint;	// 0x33cc1d29
// declared property getter: - (BOOL)hasEfficientMapPoint;	// 0x33cc1481
// declared property getter: - (BOOL)hasMapPoint;	// 0x33cc1421
// declared property getter: - (BOOL)hasPixelPoint;	// 0x33cc1469
// declared property getter: - (BOOL)hasPolyLine;	// 0x33cc1439
// declared property getter: - (BOOL)hasPolygon;	// 0x33cc1451
// declared property getter: - (id)mapPoint;	// 0x33cc1c59
// declared property getter: - (id)pixelPoint;	// 0x33cc1cf5
- (id)pixelPointGeometry;	// 0x33cb9311
// declared property getter: - (id)polyLine;	// 0x33cc1c8d
// declared property getter: - (id)polygon;	// 0x33cc1cc1
- (BOOL)readFrom:(id)from;	// 0x33cc1625
// declared property setter: - (void)setEfficientMapPoint:(id)point;	// 0x33cc1d39
// declared property setter: - (void)setMapPoint:(id)point;	// 0x33cc1c69
// declared property setter: - (void)setPixelPoint:(id)point;	// 0x33cc1d05
// declared property setter: - (void)setPolyLine:(id)line;	// 0x33cc1c9d
// declared property setter: - (void)setPolygon:(id)polygon;	// 0x33cc1cd1
// declared property setter: - (void)setType:(int)type;	// 0x33cc1c49
// declared property getter: - (int)type;	// 0x33cc1c39
- (void)writeTo:(id)to;	// 0x33cc19b1
@end

