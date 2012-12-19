/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString, GEOLatLng;

@interface GEOBusiness : PBCodable {
	unsigned long long _uID;	// 4 = 0x4
	NSMutableArray *_attributeKeyValues;	// 12 = 0xc
	NSMutableArray *_attributions;	// 16 = 0x10
	NSMutableArray *_categorys;	// 20 = 0x14
	GEOLatLng *_center;	// 24 = 0x18
	NSMutableArray *_localizedCategories;	// 28 = 0x1c
	NSString *_mapsURL;	// 32 = 0x20
	NSString *_name;	// 36 = 0x24
	NSString *_notice;	// 40 = 0x28
	NSMutableArray *_openHours;	// 44 = 0x2c
	NSString *_phoneticName;	// 48 = 0x30
	NSString *_phoneticNotice;	// 52 = 0x34
	NSMutableArray *_photos;	// 56 = 0x38
	NSMutableArray *_ratings;	// 60 = 0x3c
	NSMutableArray *_sources;	// 64 = 0x40
	NSMutableArray *_starRatings;	// 68 = 0x44
	NSString *_telephone;	// 72 = 0x48
	unsigned _totalNumberOfPhotos;	// 76 = 0x4c
	NSString *_uRL;	// 80 = 0x50
	int _version;	// 84 = 0x54
	BOOL _canBeCorrectedByBusinessOwner;	// 88 = 0x58
	BOOL _isClosed;	// 89 = 0x59
	BOOL _isUnverified;	// 90 = 0x5a
	struct {
		unsigned uID : 1;
		unsigned totalNumberOfPhotos : 1;
		unsigned version : 1;
		unsigned canBeCorrectedByBusinessOwner : 1;
		unsigned isClosed : 1;
		unsigned isUnverified : 1;
	} _has;	// 91 = 0x5b
}
@property(retain, nonatomic) NSMutableArray *attributeKeyValues;	// G=0x3416d445; S=0x3416d455; @synthesize=_attributeKeyValues
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x3416d4d5; S=0x3416d4e5; @synthesize=_attributions
@property(assign, nonatomic) BOOL canBeCorrectedByBusinessOwner;	// G=0x3416d4f5; S=0x3416a045; @synthesize=_canBeCorrectedByBusinessOwner
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x3416d405; S=0x3416d415; @synthesize=_categorys
@property(retain, nonatomic) GEOLatLng *center;	// G=0x3416d485; S=0x3416d495; @synthesize=_center
@property(assign, nonatomic) BOOL hasCanBeCorrectedByBusinessOwner;	// G=0x3416a08d; S=0x3416a06d; 
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x34169e39; 
@property(assign, nonatomic) BOOL hasIsClosed;	// G=0x34169a11; S=0x341699f1; 
@property(assign, nonatomic) BOOL hasIsUnverified;	// G=0x341699b5; S=0x34169995; 
@property(readonly, assign, nonatomic) BOOL hasMapsURL;	// G=0x34169a25; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x341698dd; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x341698f5; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x3416990d; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticNotice;	// G=0x34169925; 
@property(readonly, assign, nonatomic) BOOL hasTelephone;	// G=0x3416993d; 
@property(assign, nonatomic) BOOL hasTotalNumberOfPhotos;	// G=0x34169e99; S=0x34169e79; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x3416986d; S=0x34169851; 
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x34169955; 
@property(assign, nonatomic) BOOL hasVersion;	// G=0x341698c9; S=0x341698a9; 
@property(assign, nonatomic) BOOL isClosed;	// G=0x3416d3b5; S=0x341699c9; @synthesize=_isClosed
@property(assign, nonatomic) BOOL isUnverified;	// G=0x3416d3a5; S=0x3416996d; @synthesize=_isUnverified
@property(retain, nonatomic) NSMutableArray *localizedCategories;	// G=0x3416d4b5; S=0x3416d4c5; @synthesize=_localizedCategories
@property(retain, nonatomic) NSString *mapsURL;	// G=0x3416d3c5; S=0x3416d3d5; @synthesize=_mapsURL
@property(retain, nonatomic) NSString *name;	// G=0x3416d2e5; S=0x3416d2f5; @synthesize=_name
@property(retain, nonatomic) NSString *notice;	// G=0x3416d305; S=0x3416d315; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *openHours;	// G=0x3416d465; S=0x3416d475; @synthesize=_openHours
@property(retain, nonatomic) NSString *phoneticName;	// G=0x3416d325; S=0x3416d335; @synthesize=_phoneticName
@property(retain, nonatomic) NSString *phoneticNotice;	// G=0x3416d345; S=0x3416d355; @synthesize=_phoneticNotice
@property(retain, nonatomic) NSMutableArray *photos;	// G=0x3416d425; S=0x3416d435; @synthesize=_photos
@property(retain, nonatomic) NSMutableArray *ratings;	// G=0x3416d3e5; S=0x3416d3f5; @synthesize=_ratings
@property(retain, nonatomic) NSMutableArray *sources;	// G=0x3416d505; S=0x3416d515; @synthesize=_sources
@property(retain, nonatomic) NSMutableArray *starRatings;	// G=0x3416d525; S=0x3416d535; @synthesize=_starRatings
@property(retain, nonatomic) NSString *telephone;	// G=0x3416d365; S=0x3416d375; @synthesize=_telephone
@property(assign, nonatomic) unsigned totalNumberOfPhotos;	// G=0x3416d4a5; S=0x34169e51; @synthesize=_totalNumberOfPhotos
@property(assign, nonatomic) unsigned long long uID;	// G=0x3416d2bd; S=0x3416981d; @synthesize=_uID
@property(retain, nonatomic) NSString *uRL;	// G=0x3416d385; S=0x3416d395; @synthesize=_uRL
@property(assign, nonatomic) int version;	// G=0x3416d2d5; S=0x34169881; @synthesize=_version
- (void)addAttributeKeyValue:(id)value;	// 0x34169cc1
- (void)addAttribution:(id)attribution;	// 0x34169f99
- (void)addCategory:(id)category;	// 0x34169b29
- (void)addLocalizedCategories:(id)categories;	// 0x34169ecd
- (void)addOpenHours:(id)hours;	// 0x34169d8d
- (void)addPhoto:(id)photo;	// 0x34169bf5
- (void)addRating:(id)rating;	// 0x34169a5d
- (void)addSource:(id)source;	// 0x3416a0c1
- (void)addStarRating:(id)rating;	// 0x3416a18d
- (id)attributeKeyValueAtIndex:(unsigned)index;	// 0x34169d4d
// declared property getter: - (id)attributeKeyValues;	// 0x3416d445
- (unsigned)attributeKeyValuesCount;	// 0x34169d2d
- (id)attributionAtIndex:(unsigned)index;	// 0x3416a025
// declared property getter: - (id)attributions;	// 0x3416d4d5
- (unsigned)attributionsCount;	// 0x3416a005
// declared property getter: - (BOOL)canBeCorrectedByBusinessOwner;	// 0x3416d4f5
- (id)categoryAtIndex:(unsigned)index;	// 0x34169bb5
// declared property getter: - (id)categorys;	// 0x3416d405
- (unsigned)categorysCount;	// 0x34169b95
// declared property getter: - (id)center;	// 0x3416d485
- (void)clearAttributeKeyValues;	// 0x34169ca1
- (void)clearAttributions;	// 0x34169f79
- (void)clearCategorys;	// 0x34169b09
- (void)clearLocalizedCategories;	// 0x34169ead
- (void)clearOpenHours;	// 0x34169d6d
- (void)clearPhotos;	// 0x34169bd5
- (void)clearRatings;	// 0x34169a3d
- (void)clearSources;	// 0x3416a0a1
- (void)clearStarRatings;	// 0x3416a16d
- (void)copyTo:(id)to;	// 0x3416c369
- (void)dealloc;	// 0x34169699
- (id)description;	// 0x3416a239
- (id)dictionaryRepresentation;	// 0x3416a2a9
// declared property getter: - (BOOL)hasCanBeCorrectedByBusinessOwner;	// 0x3416a08d
// declared property getter: - (BOOL)hasCenter;	// 0x34169e39
// declared property getter: - (BOOL)hasIsClosed;	// 0x34169a11
// declared property getter: - (BOOL)hasIsUnverified;	// 0x341699b5
// declared property getter: - (BOOL)hasMapsURL;	// 0x34169a25
// declared property getter: - (BOOL)hasName;	// 0x341698dd
// declared property getter: - (BOOL)hasNotice;	// 0x341698f5
// declared property getter: - (BOOL)hasPhoneticName;	// 0x3416990d
// declared property getter: - (BOOL)hasPhoneticNotice;	// 0x34169925
// declared property getter: - (BOOL)hasTelephone;	// 0x3416993d
// declared property getter: - (BOOL)hasTotalNumberOfPhotos;	// 0x34169e99
// declared property getter: - (BOOL)hasUID;	// 0x3416986d
// declared property getter: - (BOOL)hasURL;	// 0x34169955
// declared property getter: - (BOOL)hasVersion;	// 0x341698c9
- (unsigned)hash;	// 0x3416cfb1
// declared property getter: - (BOOL)isClosed;	// 0x3416d3b5
- (BOOL)isEqual:(id)equal;	// 0x3416caad
// declared property getter: - (BOOL)isUnverified;	// 0x3416d3a5
// declared property getter: - (id)localizedCategories;	// 0x3416d4b5
- (id)localizedCategoriesAtIndex:(unsigned)index;	// 0x34169f59
- (unsigned)localizedCategoriesCount;	// 0x34169f39
// declared property getter: - (id)mapsURL;	// 0x3416d3c5
// declared property getter: - (id)name;	// 0x3416d2e5
// declared property getter: - (id)notice;	// 0x3416d305
// declared property getter: - (id)openHours;	// 0x3416d465
- (id)openHoursAtIndex:(unsigned)index;	// 0x34169e19
- (unsigned)openHoursCount;	// 0x34169df9
// declared property getter: - (id)phoneticName;	// 0x3416d325
// declared property getter: - (id)phoneticNotice;	// 0x3416d345
- (id)photoAtIndex:(unsigned)index;	// 0x34169c81
// declared property getter: - (id)photos;	// 0x3416d425
- (unsigned)photosCount;	// 0x34169c61
- (id)ratingAtIndex:(unsigned)index;	// 0x34169ae9
// declared property getter: - (id)ratings;	// 0x3416d3e5
- (unsigned)ratingsCount;	// 0x34169ac9
- (BOOL)readFrom:(id)from;	// 0x3416b849
// declared property setter: - (void)setAttributeKeyValues:(id)values;	// 0x3416d455
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x3416d4e5
// declared property setter: - (void)setCanBeCorrectedByBusinessOwner:(BOOL)owner;	// 0x3416a045
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x3416d415
// declared property setter: - (void)setCenter:(id)center;	// 0x3416d495
// declared property setter: - (void)setHasCanBeCorrectedByBusinessOwner:(BOOL)owner;	// 0x3416a06d
// declared property setter: - (void)setHasIsClosed:(BOOL)closed;	// 0x341699f1
// declared property setter: - (void)setHasIsUnverified:(BOOL)unverified;	// 0x34169995
// declared property setter: - (void)setHasTotalNumberOfPhotos:(BOOL)photos;	// 0x34169e79
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x34169851
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x341698a9
// declared property setter: - (void)setIsClosed:(BOOL)closed;	// 0x341699c9
// declared property setter: - (void)setIsUnverified:(BOOL)unverified;	// 0x3416996d
// declared property setter: - (void)setLocalizedCategories:(id)categories;	// 0x3416d4c5
// declared property setter: - (void)setMapsURL:(id)url;	// 0x3416d3d5
// declared property setter: - (void)setName:(id)name;	// 0x3416d2f5
// declared property setter: - (void)setNotice:(id)notice;	// 0x3416d315
// declared property setter: - (void)setOpenHours:(id)hours;	// 0x3416d475
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x3416d335
// declared property setter: - (void)setPhoneticNotice:(id)notice;	// 0x3416d355
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3416d435
// declared property setter: - (void)setRatings:(id)ratings;	// 0x3416d3f5
// declared property setter: - (void)setSources:(id)sources;	// 0x3416d515
// declared property setter: - (void)setStarRatings:(id)ratings;	// 0x3416d535
// declared property setter: - (void)setTelephone:(id)telephone;	// 0x3416d375
// declared property setter: - (void)setTotalNumberOfPhotos:(unsigned)photos;	// 0x34169e51
// declared property setter: - (void)setUID:(unsigned long long)uid;	// 0x3416981d
// declared property setter: - (void)setURL:(id)url;	// 0x3416d395
// declared property setter: - (void)setVersion:(int)version;	// 0x34169881
- (id)sourceAtIndex:(unsigned)index;	// 0x3416a14d
// declared property getter: - (id)sources;	// 0x3416d505
- (unsigned)sourcesCount;	// 0x3416a12d
- (id)starRatingAtIndex:(unsigned)index;	// 0x3416a219
// declared property getter: - (id)starRatings;	// 0x3416d525
- (unsigned)starRatingsCount;	// 0x3416a1f9
// declared property getter: - (id)telephone;	// 0x3416d365
// declared property getter: - (unsigned)totalNumberOfPhotos;	// 0x3416d4a5
// declared property getter: - (unsigned long long)uID;	// 0x3416d2bd
// declared property getter: - (id)uRL;	// 0x3416d385
// declared property getter: - (int)version;	// 0x3416d2d5
- (void)writeTo:(id)to;	// 0x3416b855
@end
