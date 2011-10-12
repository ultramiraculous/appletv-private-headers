/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOPixelPoint;

@interface GEOLocationShiftResponse : PBCodable {
	GEOPixelPoint *_shiftedPixel;	// 4 = 0x4
}
@property(readonly, assign) XXStruct_zYrK5D shiftedCoordinate;	// G=0x32c94191; 
@property(retain, nonatomic) GEOPixelPoint *shiftedPixel;	// G=0x32c864d1; S=0x32c864e1; @synthesize=_shiftedPixel
- (void)dealloc;	// 0x32c861ad
- (id)description;	// 0x32c861f1
- (id)dictionaryRepresentation;	// 0x32c86261
- (BOOL)readFrom:(id)from;	// 0x32c862c9
// declared property setter: - (void)setShiftedPixel:(id)pixel;	// 0x32c864e1
// declared property getter: - (XXStruct_zYrK5D)shiftedCoordinate;	// 0x32c94191
// declared property getter: - (id)shiftedPixel;	// 0x32c864d1
- (void)writeTo:(id)to;	// 0x32c8643d
@end

