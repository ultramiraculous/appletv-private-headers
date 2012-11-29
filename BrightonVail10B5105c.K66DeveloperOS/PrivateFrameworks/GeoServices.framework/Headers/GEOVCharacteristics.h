/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVCharacteristics : PBCodable {
	NSMutableArray *_pointCharacteristics;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *pointCharacteristics;	// G=0x33995d45; S=0x33995d55; @synthesize=_pointCharacteristics
- (void)addPointCharacteristic:(id)characteristic;	// 0x33995681
- (void)clearPointCharacteristics;	// 0x33995661
- (void)copyTo:(id)to;	// 0x33995c35
- (void)dealloc;	// 0x3399561d
- (id)description;	// 0x3399572d
- (id)dictionaryRepresentation;	// 0x3399579d
- (unsigned)hash;	// 0x33995d25
- (BOOL)isEqual:(id)equal;	// 0x33995cb5
- (id)pointCharacteristicAtIndex:(unsigned)index;	// 0x3399570d
// declared property getter: - (id)pointCharacteristics;	// 0x33995d45
- (unsigned)pointCharacteristicsCount;	// 0x339956ed
- (BOOL)readFrom:(id)from;	// 0x33995ae5
// declared property setter: - (void)setPointCharacteristics:(id)characteristics;	// 0x33995d55
- (void)writeTo:(id)to;	// 0x33995af1
@end
