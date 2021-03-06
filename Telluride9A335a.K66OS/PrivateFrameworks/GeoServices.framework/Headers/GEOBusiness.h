/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOBusiness : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
	NSString *_notice;	// 28 = 0x1c
	NSString *_phoneticName;	// 32 = 0x20
	NSString *_phoneticNotice;	// 36 = 0x24
	NSString *_telephone;	// 40 = 0x28
	NSString *_uRL;	// 44 = 0x2c
	BOOL _hasIsUnverified;	// 48 = 0x30
	BOOL _isUnverified;	// 49 = 0x31
	BOOL _hasIsClosed;	// 50 = 0x32
	BOOL _isClosed;	// 51 = 0x33
	NSString *_mapsURL;	// 52 = 0x34
	NSMutableArray *_ratings;	// 56 = 0x38
	NSMutableArray *_categorys;	// 60 = 0x3c
	NSMutableArray *_sources;	// 64 = 0x40
	NSMutableArray *_starRatings;	// 68 = 0x44
}
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x31cec451; S=0x31cec461; @synthesize=_categorys
@property(assign, nonatomic) BOOL hasIsClosed;	// G=0x31cec3b9; S=0x31cec3c9; @synthesize=_hasIsClosed
@property(assign, nonatomic) BOOL hasIsUnverified;	// G=0x31cec389; S=0x31cec399; @synthesize=_hasIsUnverified
@property(readonly, assign, nonatomic) BOOL hasMapsURL;	// G=0x31ceb019; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x31ceaf41; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x31ceaf59; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x31ceaf71; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticNotice;	// G=0x31ceaf89; 
@property(readonly, assign, nonatomic) BOOL hasTelephone;	// G=0x31ceafa1; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x31cec1e9; S=0x31cec1f9; @synthesize=_hasUID
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x31ceafb9; 
@property(assign, nonatomic) BOOL hasVersion;	// G=0x31cec221; S=0x31cec231; @synthesize=_hasVersion
@property(assign, nonatomic) BOOL isClosed;	// G=0x31cec3d9; S=0x31ceaff5; @synthesize=_isClosed
@property(assign, nonatomic) BOOL isUnverified;	// G=0x31cec3a9; S=0x31ceafd1; @synthesize=_isUnverified
@property(retain, nonatomic) NSString *mapsURL;	// G=0x31cec3e9; S=0x31cec3f9; @synthesize=_mapsURL
@property(retain, nonatomic) NSString *name;	// G=0x31cec251; S=0x31cec261; @synthesize=_name
@property(retain, nonatomic) NSString *notice;	// G=0x31cec285; S=0x31cec295; @synthesize=_notice
@property(retain, nonatomic) NSString *phoneticName;	// G=0x31cec2b9; S=0x31cec2c9; @synthesize=_phoneticName
@property(retain, nonatomic) NSString *phoneticNotice;	// G=0x31cec2ed; S=0x31cec2fd; @synthesize=_phoneticNotice
@property(retain, nonatomic) NSMutableArray *ratings;	// G=0x31cec41d; S=0x31cec42d; @synthesize=_ratings
@property(retain, nonatomic) NSMutableArray *sources;	// G=0x31cec485; S=0x31cec495; @synthesize=_sources
@property(retain, nonatomic) NSMutableArray *starRatings;	// G=0x31cec4b9; S=0x31cec4c9; @synthesize=_starRatings
@property(retain, nonatomic) NSString *telephone;	// G=0x31cec321; S=0x31cec331; @synthesize=_telephone
@property(assign, nonatomic) long long uID;	// G=0x31cec209; S=0x31ceaef1; @synthesize=_uID
@property(retain, nonatomic) NSString *uRL;	// G=0x31cec355; S=0x31cec365; @synthesize=_uRL
@property(assign, nonatomic) int version;	// G=0x31cec241; S=0x31ceaf1d; @synthesize=_version
- (void)addCategory:(id)category;	// 0x31ceb0d5
- (void)addRating:(id)rating;	// 0x31ceb031
- (void)addSource:(id)source;	// 0x31ceb179
- (void)addStarRating:(id)rating;	// 0x31ceb21d
- (id)categoryAtIndex:(unsigned)index;	// 0x31ceb159
// declared property getter: - (id)categorys;	// 0x31cec451
- (unsigned)categorysCount;	// 0x31ceb139
- (void)dealloc;	// 0x31ceade5
- (id)description;	// 0x31ceb2c1
- (id)dictionaryRepresentation;	// 0x31ceb331
// declared property getter: - (BOOL)hasIsClosed;	// 0x31cec3b9
// declared property getter: - (BOOL)hasIsUnverified;	// 0x31cec389
// declared property getter: - (BOOL)hasMapsURL;	// 0x31ceb019
// declared property getter: - (BOOL)hasName;	// 0x31ceaf41
// declared property getter: - (BOOL)hasNotice;	// 0x31ceaf59
// declared property getter: - (BOOL)hasPhoneticName;	// 0x31ceaf71
// declared property getter: - (BOOL)hasPhoneticNotice;	// 0x31ceaf89
// declared property getter: - (BOOL)hasTelephone;	// 0x31ceafa1
// declared property getter: - (BOOL)hasUID;	// 0x31cec1e9
// declared property getter: - (BOOL)hasURL;	// 0x31ceafb9
// declared property getter: - (BOOL)hasVersion;	// 0x31cec221
// declared property getter: - (BOOL)isClosed;	// 0x31cec3d9
// declared property getter: - (BOOL)isUnverified;	// 0x31cec3a9
// declared property getter: - (id)mapsURL;	// 0x31cec3e9
// declared property getter: - (id)name;	// 0x31cec251
// declared property getter: - (id)notice;	// 0x31cec285
// declared property getter: - (id)phoneticName;	// 0x31cec2b9
// declared property getter: - (id)phoneticNotice;	// 0x31cec2ed
- (id)ratingAtIndex:(unsigned)index;	// 0x31ceb0b5
// declared property getter: - (id)ratings;	// 0x31cec41d
- (unsigned)ratingsCount;	// 0x31ceb095
- (BOOL)readFrom:(id)from;	// 0x31ceb901
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x31cec461
// declared property setter: - (void)setHasIsClosed:(BOOL)closed;	// 0x31cec3c9
// declared property setter: - (void)setHasIsUnverified:(BOOL)unverified;	// 0x31cec399
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x31cec1f9
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x31cec231
// declared property setter: - (void)setIsClosed:(BOOL)closed;	// 0x31ceaff5
// declared property setter: - (void)setIsUnverified:(BOOL)unverified;	// 0x31ceafd1
// declared property setter: - (void)setMapsURL:(id)url;	// 0x31cec3f9
// declared property setter: - (void)setName:(id)name;	// 0x31cec261
// declared property setter: - (void)setNotice:(id)notice;	// 0x31cec295
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x31cec2c9
// declared property setter: - (void)setPhoneticNotice:(id)notice;	// 0x31cec2fd
// declared property setter: - (void)setRatings:(id)ratings;	// 0x31cec42d
// declared property setter: - (void)setSources:(id)sources;	// 0x31cec495
// declared property setter: - (void)setStarRatings:(id)ratings;	// 0x31cec4c9
// declared property setter: - (void)setTelephone:(id)telephone;	// 0x31cec331
// declared property setter: - (void)setUID:(long long)uid;	// 0x31ceaef1
// declared property setter: - (void)setURL:(id)url;	// 0x31cec365
// declared property setter: - (void)setVersion:(int)version;	// 0x31ceaf1d
- (id)sourceAtIndex:(unsigned)index;	// 0x31ceb1fd
// declared property getter: - (id)sources;	// 0x31cec485
- (unsigned)sourcesCount;	// 0x31ceb1dd
- (id)starRatingAtIndex:(unsigned)index;	// 0x31ceb2a1
// declared property getter: - (id)starRatings;	// 0x31cec4b9
- (unsigned)starRatingsCount;	// 0x31ceb281
// declared property getter: - (id)telephone;	// 0x31cec321
// declared property getter: - (long long)uID;	// 0x31cec209
// declared property getter: - (id)uRL;	// 0x31cec355
// declared property getter: - (int)version;	// 0x31cec241
- (void)writeTo:(id)to;	// 0x31cebcdd
@end

