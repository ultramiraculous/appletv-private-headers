/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMLocationShiftResponse : PBCodable {
	int _status;	// 4 = 0x4
	XXStruct_19EQxD _coefficients;	// 8 = 0x8
	GMMMapPoint *_originalPoint;	// 20 = 0x14
	BOOL _hasValidSquareLength;	// 24 = 0x18
	int _validSquareLength;	// 28 = 0x1c
	BOOL _hasCacheSquareLength;	// 32 = 0x20
	int _cacheSquareLength;	// 36 = 0x24
}
@property(assign, nonatomic) int cacheSquareLength;	// G=0x33aaba09; S=0x33aab399; @synthesize=_cacheSquareLength
@property(readonly, assign, nonatomic) long long *coefficients;	// G=0x33aab261; 
@property(readonly, assign, nonatomic) unsigned coefficientsCount;	// G=0x33aab24d; 
@property(assign, nonatomic) BOOL hasCacheSquareLength;	// G=0x33aab9e9; S=0x33aab9f9; @synthesize=_hasCacheSquareLength
@property(readonly, assign, nonatomic) BOOL hasOriginalPoint;	// G=0x33aab35d; 
@property(assign, nonatomic) BOOL hasValidSquareLength;	// G=0x33aab9b9; S=0x33aab9c9; @synthesize=_hasValidSquareLength
@property(retain, nonatomic) GMMMapPoint *originalPoint;	// G=0x33aab985; S=0x33aab995; @synthesize=_originalPoint
@property(assign, nonatomic) int status;	// G=0x33aab965; S=0x33aab975; @synthesize=_status
@property(assign, nonatomic) int validSquareLength;	// G=0x33aab9d9; S=0x33aab375; @synthesize=_validSquareLength
- (void)addCoefficient:(long long)coefficient;	// 0x33aab285
// declared property getter: - (int)cacheSquareLength;	// 0x33aaba09
- (void)clearCoefficients;	// 0x33aab271
- (long long)coefficientAtIndex:(unsigned)index;	// 0x33aab29d
// declared property getter: - (long long *)coefficients;	// 0x33aab261
// declared property getter: - (unsigned)coefficientsCount;	// 0x33aab24d
- (void)dealloc;	// 0x33aab1f9
- (id)description;	// 0x33aab3bd
- (id)dictionaryRepresentation;	// 0x33aab42d
// declared property getter: - (BOOL)hasCacheSquareLength;	// 0x33aab9e9
// declared property getter: - (BOOL)hasOriginalPoint;	// 0x33aab35d
// declared property getter: - (BOOL)hasValidSquareLength;	// 0x33aab9b9
// declared property getter: - (id)originalPoint;	// 0x33aab985
- (BOOL)readFrom:(id)from;	// 0x33aab56d
// declared property setter: - (void)setCacheSquareLength:(int)length;	// 0x33aab399
- (void)setCoefficients:(long long *)coefficients count:(unsigned)count;	// 0x33aab345
// declared property setter: - (void)setHasCacheSquareLength:(BOOL)length;	// 0x33aab9f9
// declared property setter: - (void)setHasValidSquareLength:(BOOL)length;	// 0x33aab9c9
// declared property setter: - (void)setOriginalPoint:(id)point;	// 0x33aab995
// declared property setter: - (void)setStatus:(int)status;	// 0x33aab975
// declared property setter: - (void)setValidSquareLength:(int)length;	// 0x33aab375
// declared property getter: - (int)status;	// 0x33aab965
// declared property getter: - (int)validSquareLength;	// 0x33aab9d9
- (void)writeTo:(id)to;	// 0x33aab7f5
@end

