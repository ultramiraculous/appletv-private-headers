/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOPixelPoint : PBCodable {
	double _x;	// 4 = 0x4
	double _y;	// 12 = 0xc
	BOOL _hasZ;	// 20 = 0x14
	int _z;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasZ;	// G=0x32c93ead; S=0x32c93ebd; @synthesize=_hasZ
@property(assign, nonatomic) double x;	// G=0x32c93e55; S=0x32c93e6d; @synthesize=_x
@property(assign, nonatomic) double y;	// G=0x32c93e81; S=0x32c93e99; @synthesize=_y
@property(assign, nonatomic) int z;	// G=0x32c93ae5; S=0x32c93b09; @synthesize=_z
- (void)dealloc;	// 0x32c93ab9
- (id)description;	// 0x32c93b2d
- (id)dictionaryRepresentation;	// 0x32c93b9d
// declared property getter: - (BOOL)hasZ;	// 0x32c93ead
- (BOOL)readFrom:(id)from;	// 0x32c93ca1
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x32c93ebd
// declared property setter: - (void)setX:(double)x;	// 0x32c93e6d
// declared property setter: - (void)setY:(double)y;	// 0x32c93e99
// declared property setter: - (void)setZ:(int)z;	// 0x32c93b09
- (void)writeTo:(id)to;	// 0x32c93dc5
// declared property getter: - (double)x;	// 0x32c93e55
// declared property getter: - (double)y;	// 0x32c93e81
// declared property getter: - (int)z;	// 0x32c93ae5
@end

