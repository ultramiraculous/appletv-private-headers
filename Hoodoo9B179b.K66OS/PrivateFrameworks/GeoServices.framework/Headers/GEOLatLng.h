/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOLatLng : PBCodable {
	double _lat;	// 4 = 0x4
	double _lng;	// 12 = 0xc
}
@property(assign, nonatomic) double lat;	// G=0x32ce86ed; S=0x32ce8705; @synthesize=_lat
@property(assign, nonatomic) double lng;	// G=0x32ce8719; S=0x32ce8731; @synthesize=_lng
- (id)coordinateAsString;	// 0x32cdc9ad
- (void)dealloc;	// 0x32ce8441
- (id)description;	// 0x32ce846d
- (id)dictionaryRepresentation;	// 0x32ce84dd
- (unsigned)hash;	// 0x32cdc881
- (BOOL)isEqual:(id)equal;	// 0x32cdc7d5
- (BOOL)isValid;	// 0x32cdc8fd
// declared property getter: - (double)lat;	// 0x32ce86ed
- (int)latE7;	// 0x32cdc76d
// declared property getter: - (double)lng;	// 0x32ce8719
- (int)lngE7;	// 0x32cdc7a1
- (BOOL)readFrom:(id)from;	// 0x32ce8599
// declared property setter: - (void)setLat:(double)lat;	// 0x32ce8705
// declared property setter: - (void)setLng:(double)lng;	// 0x32ce8731
- (unsigned)unsignedLatE7;	// 0x32d03439
- (void)writeTo:(id)to;	// 0x32ce8691
@end

