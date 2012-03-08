/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOAddress, GEOPlace, NSString;

@interface GEOPlaceResult : PBCodable {
	GEOPlace *_place;	// 4 = 0x4
	BOOL _hasConfidence;	// 8 = 0x8
	double _confidence;	// 12 = 0xc
	NSMutableArray *_additionalPlaces;	// 20 = 0x14
	GEOAddress *_tokenEntity;	// 24 = 0x18
	NSString *_quad;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *additionalPlaces;	// G=0x32c73d91; S=0x32c73da1; @synthesize=_additionalPlaces
@property(assign, nonatomic) double confidence;	// G=0x32c73d79; S=0x32c733b1; @synthesize=_confidence
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x32c73d59; S=0x32c73d69; @synthesize=_hasConfidence
@property(readonly, assign, nonatomic) BOOL hasQuad;	// G=0x32c73499; 
@property(readonly, assign, nonatomic) BOOL hasTokenEntity;	// G=0x32c73481; 
@property(retain, nonatomic) GEOPlace *place;	// G=0x32c73d25; S=0x32c73d35; @synthesize=_place
@property(retain, nonatomic) NSString *quad;	// G=0x32c73df9; S=0x32c73e09; @synthesize=_quad
@property(retain, nonatomic) GEOAddress *tokenEntity;	// G=0x32c73dc5; S=0x32c73dd5; @synthesize=_tokenEntity
- (void)addAdditionalPlace:(id)place;	// 0x32c733dd
- (id)additionalPlaceAtIndex:(unsigned)index;	// 0x32c73461
// declared property getter: - (id)additionalPlaces;	// 0x32c73d91
- (unsigned)additionalPlacesCount;	// 0x32c73441
// declared property getter: - (double)confidence;	// 0x32c73d79
- (void)dealloc;	// 0x32c73331
- (id)description;	// 0x32c734b1
- (id)dictionaryRepresentation;	// 0x32c73521
// declared property getter: - (BOOL)hasConfidence;	// 0x32c73d59
// declared property getter: - (BOOL)hasQuad;	// 0x32c73499
// declared property getter: - (BOOL)hasTokenEntity;	// 0x32c73481
// declared property getter: - (id)place;	// 0x32c73d25
// declared property getter: - (id)quad;	// 0x32c73df9
- (BOOL)readFrom:(id)from;	// 0x32c73799
// declared property setter: - (void)setAdditionalPlaces:(id)places;	// 0x32c73da1
// declared property setter: - (void)setConfidence:(double)confidence;	// 0x32c733b1
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x32c73d69
// declared property setter: - (void)setPlace:(id)place;	// 0x32c73d35
// declared property setter: - (void)setQuad:(id)quad;	// 0x32c73e09
// declared property setter: - (void)setTokenEntity:(id)entity;	// 0x32c73dd5
// declared property getter: - (id)tokenEntity;	// 0x32c73dc5
- (void)writeTo:(id)to;	// 0x32c73a99
@end
