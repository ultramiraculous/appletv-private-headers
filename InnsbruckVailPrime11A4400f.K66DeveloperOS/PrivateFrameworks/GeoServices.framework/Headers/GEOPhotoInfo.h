/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOPhotoInfo : PBCodable {
	int _size;	// 4 = 0x4
	NSString *_url;	// 8 = 0x8
	XXStruct_ec15KC _has;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasSize;	// G=0x30f42081; S=0x30f42065; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x30f42095; 
@property(assign, nonatomic) int size;	// G=0x30f42629; S=0x30f4203d; @synthesize=_size
@property(retain, nonatomic) NSString *url;	// G=0x30f42639; S=0x30f42649; @synthesize=_url
- (void)copyTo:(id)to;	// 0x30f42495
- (void)dealloc;	// 0x30f41ff9
- (id)description;	// 0x30f420ad
- (id)dictionaryRepresentation;	// 0x30f4211d
// declared property getter: - (BOOL)hasSize;	// 0x30f42081
// declared property getter: - (BOOL)hasUrl;	// 0x30f42095
- (unsigned)hash;	// 0x30f425cd
- (BOOL)isEqual:(id)equal;	// 0x30f42521
- (BOOL)readFrom:(id)from;	// 0x30f4241d
// declared property setter: - (void)setHasSize:(BOOL)size;	// 0x30f42065
// declared property setter: - (void)setSize:(int)size;	// 0x30f4203d
// declared property setter: - (void)setUrl:(id)url;	// 0x30f42649
// declared property getter: - (int)size;	// 0x30f42629
// declared property getter: - (id)url;	// 0x30f42639
- (void)writeTo:(id)to;	// 0x30f42429
@end
