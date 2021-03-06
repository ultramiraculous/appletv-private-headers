/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
	BOOL _hasNumFeatureLimit;	// 4 = 0x4
	unsigned _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSGRectangle *_boundingBox;	// 16 = 0x10
	BOOL _hasAddressLinesLimit;	// 20 = 0x14
	int _addressLinesLimit;	// 24 = 0x18
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x30b77179; S=0x30b7719d; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x30b776f1; S=0x30b77701; @synthesize=_boundingBox
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x30b77725; S=0x30b77735; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x30b77161; 
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x30b776d1; S=0x30b776e1; @synthesize=_hasIncludeBoundingBoxes
@property(assign, nonatomic) BOOL hasNumFeatureLimit;	// G=0x30b776b1; S=0x30b776c1; @synthesize=_hasNumFeatureLimit
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x30b77119; S=0x30b7713d; @synthesize=_includeBoundingBoxes
@property(assign, nonatomic) unsigned numFeatureLimit;	// G=0x30b770d1; S=0x30b770f5; @synthesize=_numFeatureLimit
// declared property getter: - (int)addressLinesLimit;	// 0x30b77179
// declared property getter: - (id)boundingBox;	// 0x30b776f1
- (void)dealloc;	// 0x30b7708d
- (id)description;	// 0x30b771c1
- (id)dictionaryRepresentation;	// 0x30b77231
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x30b77725
// declared property getter: - (BOOL)hasBoundingBox;	// 0x30b77161
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x30b776d1
// declared property getter: - (BOOL)hasNumFeatureLimit;	// 0x30b776b1
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x30b77119
// declared property getter: - (unsigned)numFeatureLimit;	// 0x30b770d1
- (BOOL)readFrom:(id)from;	// 0x30b7738d
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x30b7719d
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x30b77701
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x30b77735
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x30b776e1
// declared property setter: - (void)setHasNumFeatureLimit:(BOOL)limit;	// 0x30b776c1
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x30b7713d
// declared property setter: - (void)setNumFeatureLimit:(unsigned)limit;	// 0x30b770f5
- (void)writeTo:(id)to;	// 0x30b77575
@end

