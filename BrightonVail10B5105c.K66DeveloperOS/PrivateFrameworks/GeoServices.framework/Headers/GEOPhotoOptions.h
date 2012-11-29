/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOPhotoOptions : PBCodable {
	XXStruct_WmZAAA _photoSizes;	// 4 = 0x4
	int _maxPhotos;	// 16 = 0x10
	int _photoType;	// 20 = 0x14
	XXStruct_ec15KC _has;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasPhotoType;	// G=0x3397f9e9; S=0x3397f9cd; 
@property(assign, nonatomic) int maxPhotos;	// G=0x3397fe55; S=0x3391d48d; @synthesize=_maxPhotos
@property(readonly, assign, nonatomic) int *photoSizes;	// G=0x3397fa11; 
@property(readonly, assign, nonatomic) unsigned photoSizesCount;	// G=0x3397f9fd; 
@property(assign, nonatomic) int photoType;	// G=0x3397fe65; S=0x3391d451; @synthesize=_photoType
- (void)addPhotoSize:(int)size;	// 0x3391d479
- (void)clearPhotoSizes;	// 0x3397fa21
- (void)copyTo:(id)to;	// 0x3397fc55
- (void)dealloc;	// 0x3391d729
- (id)description;	// 0x3397faf1
- (id)dictionaryRepresentation;	// 0x3397fb61
// declared property getter: - (BOOL)hasPhotoType;	// 0x3397f9e9
- (unsigned)hash;	// 0x3397fde5
- (BOOL)isEqual:(id)equal;	// 0x3397fd39
// declared property getter: - (int)maxPhotos;	// 0x3397fe55
- (int)photoSizeAtIndex:(unsigned)index;	// 0x3397fa35
// declared property getter: - (int *)photoSizes;	// 0x3397fa11
// declared property getter: - (unsigned)photoSizesCount;	// 0x3397f9fd
// declared property getter: - (int)photoType;	// 0x3397fe65
- (BOOL)readFrom:(id)from;	// 0x3397fc49
// declared property setter: - (void)setHasPhotoType:(BOOL)type;	// 0x3397f9cd
// declared property setter: - (void)setMaxPhotos:(int)photos;	// 0x3391d48d
- (void)setPhotoSizes:(int *)sizes count:(unsigned)count;	// 0x3397fad9
// declared property setter: - (void)setPhotoType:(int)type;	// 0x3391d451
- (void)writeTo:(id)to;	// 0x3391f099
@end
