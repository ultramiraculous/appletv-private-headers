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
@property(assign, nonatomic) BOOL hasPhotoType;	// G=0x341b1b59; S=0x341b1b3d; 
@property(assign, nonatomic) int maxPhotos;	// G=0x341b1fc5; S=0x3414f38d; @synthesize=_maxPhotos
@property(readonly, assign, nonatomic) int *photoSizes;	// G=0x341b1b81; 
@property(readonly, assign, nonatomic) unsigned photoSizesCount;	// G=0x341b1b6d; 
@property(assign, nonatomic) int photoType;	// G=0x341b1fd5; S=0x3414f351; @synthesize=_photoType
- (void)addPhotoSize:(int)size;	// 0x3414f379
- (void)clearPhotoSizes;	// 0x341b1b91
- (void)copyTo:(id)to;	// 0x341b1dc5
- (void)dealloc;	// 0x3414f629
- (id)description;	// 0x341b1c61
- (id)dictionaryRepresentation;	// 0x341b1cd1
// declared property getter: - (BOOL)hasPhotoType;	// 0x341b1b59
- (unsigned)hash;	// 0x341b1f55
- (BOOL)isEqual:(id)equal;	// 0x341b1ea9
// declared property getter: - (int)maxPhotos;	// 0x341b1fc5
- (int)photoSizeAtIndex:(unsigned)index;	// 0x341b1ba5
// declared property getter: - (int *)photoSizes;	// 0x341b1b81
// declared property getter: - (unsigned)photoSizesCount;	// 0x341b1b6d
// declared property getter: - (int)photoType;	// 0x341b1fd5
- (BOOL)readFrom:(id)from;	// 0x341b1db9
// declared property setter: - (void)setHasPhotoType:(BOOL)type;	// 0x341b1b3d
// declared property setter: - (void)setMaxPhotos:(int)photos;	// 0x3414f38d
- (void)setPhotoSizes:(int *)sizes count:(unsigned)count;	// 0x341b1c49
// declared property setter: - (void)setPhotoType:(int)type;	// 0x3414f351
- (void)writeTo:(id)to;	// 0x34150f99
@end

