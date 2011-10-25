/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBRequest.h> // Unknown library

@class NSMutableArray, GEOAddress, GEOSearchSubstring, GEOSessionID, GEOMapRegion, GEOLocation, NSString;

@interface GEOPlaceSearchRequest : PBRequest {
	XXStruct_19EQxD _placeIDs;	// 4 = 0x4
	XXStruct_19EQxD _businessIDs;	// 16 = 0x10
	GEOAddress *_address;	// 28 = 0x1c
	GEOLocation *_location;	// 32 = 0x20
	NSString *_search;	// 36 = 0x24
	GEOMapRegion *_mapRegion;	// 40 = 0x28
	struct {
		int *list;
		unsigned count;
		unsigned size;
	} _includeAdditionalPlaceTypes;	// 44 = 0x2c
	BOOL _hasIncludePhonetics;	// 56 = 0x38
	BOOL _includePhonetics;	// 57 = 0x39
	BOOL _hasMaxResults;	// 58 = 0x3a
	int _maxResults;	// 60 = 0x3c
	BOOL _hasResultOffset;	// 64 = 0x40
	int _resultOffset;	// 68 = 0x44
	BOOL _hasSessionID;	// 72 = 0x48
	int _sessionID;	// 76 = 0x4c
	GEOSessionID *_sessionGUID;	// 80 = 0x50
	BOOL _hasBusinessSortOrder;	// 84 = 0x54
	int _businessSortOrder;	// 88 = 0x58
	BOOL _hasIncludeBusinessRating;	// 92 = 0x5c
	BOOL _includeBusinessRating;	// 93 = 0x5d
	BOOL _hasIncludeBusinessCategories;	// 94 = 0x5e
	BOOL _includeBusinessCategories;	// 95 = 0x5f
	BOOL _hasMaxBusinessReviews;	// 96 = 0x60
	int _maxBusinessReviews;	// 100 = 0x64
	NSMutableArray *_filterByBusinessCategorys;	// 104 = 0x68
	BOOL _hasIsStrictMapRegion;	// 108 = 0x6c
	BOOL _isStrictMapRegion;	// 109 = 0x6d
	BOOL _hasGeoId;	// 110 = 0x6e
	long long _geoId;	// 112 = 0x70
	BOOL _hasIncludeQuads;	// 120 = 0x78
	BOOL _includeQuads;	// 121 = 0x79
	BOOL _hasExcludeAddressInResults;	// 122 = 0x7a
	BOOL _excludeAddressInResults;	// 123 = 0x7b
	NSMutableArray *_searchSubstrings;	// 124 = 0x7c
	BOOL _hasIncludeGeoId;	// 128 = 0x80
	BOOL _includeGeoId;	// 129 = 0x81
	NSString *_searchContext;	// 132 = 0x84
	GEOSearchSubstring *_searchContextSubstring;	// 136 = 0x88
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x36710aad; S=0x36710abd; @synthesize=_address
@property(readonly, assign, nonatomic) long long *businessIDs;	// G=0x3670eba1; 
@property(readonly, assign, nonatomic) unsigned businessIDsCount;	// G=0x3670eb8d; 
@property(assign, nonatomic) int businessSortOrder;	// G=0x36710c81; S=0x3670eed1; @synthesize=_businessSortOrder
@property(assign, nonatomic) BOOL excludeAddressInResults;	// G=0x36710e0d; S=0x3670f079; @synthesize=_excludeAddressInResults
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys;	// G=0x36710d21; S=0x36710d31; @synthesize=_filterByBusinessCategorys
@property(assign, nonatomic) long long geoId;	// G=0x36710da5; S=0x3670f029; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x3670ec9d; 
@property(assign, nonatomic) BOOL hasBusinessSortOrder;	// G=0x36710c61; S=0x36710c71; @synthesize=_hasBusinessSortOrder
@property(assign, nonatomic) BOOL hasExcludeAddressInResults;	// G=0x36710ded; S=0x36710dfd; @synthesize=_hasExcludeAddressInResults
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x36710d85; S=0x36710d95; @synthesize=_hasGeoId
@property(assign, nonatomic) BOOL hasIncludeBusinessCategories;	// G=0x36710cc1; S=0x36710cd1; @synthesize=_hasIncludeBusinessCategories
@property(assign, nonatomic) BOOL hasIncludeBusinessRating;	// G=0x36710c91; S=0x36710ca1; @synthesize=_hasIncludeBusinessRating
@property(assign, nonatomic) BOOL hasIncludeGeoId;	// G=0x36710e51; S=0x36710e61; @synthesize=_hasIncludeGeoId
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x36710b7d; S=0x36710b8d; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeQuads;	// G=0x36710dbd; S=0x36710dcd; @synthesize=_hasIncludeQuads
@property(assign, nonatomic) BOOL hasIsStrictMapRegion;	// G=0x36710d55; S=0x36710d65; @synthesize=_hasIsStrictMapRegion
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x3670ecb5; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x3670ece5; 
@property(assign, nonatomic) BOOL hasMaxBusinessReviews;	// G=0x36710cf1; S=0x36710d01; @synthesize=_hasMaxBusinessReviews
@property(assign, nonatomic) BOOL hasMaxResults;	// G=0x36710bad; S=0x36710bbd; @synthesize=_hasMaxResults
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x36710bcd; S=0x36710bdd; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSearch;	// G=0x3670eccd; 
@property(readonly, assign, nonatomic) BOOL hasSearchContext;	// G=0x3670f165; 
@property(readonly, assign, nonatomic) BOOL hasSearchContextSubstring;	// G=0x3670f17d; 
@property(readonly, assign, nonatomic) BOOL hasSessionGUID;	// G=0x3670eeb9; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x36710bfd; S=0x36710c0d; @synthesize=_hasSessionID
@property(readonly, assign, nonatomic) int *includeAdditionalPlaceTypes;	// G=0x3670ed11; 
@property(readonly, assign, nonatomic) unsigned includeAdditionalPlaceTypesCount;	// G=0x3670ecfd; 
@property(assign, nonatomic) BOOL includeBusinessCategories;	// G=0x36710ce1; S=0x3670ef19; @synthesize=_includeBusinessCategories
@property(assign, nonatomic) BOOL includeBusinessRating;	// G=0x36710cb1; S=0x3670eef5; @synthesize=_includeBusinessRating
@property(assign, nonatomic) BOOL includeGeoId;	// G=0x36710e71; S=0x3670f141; @synthesize=_includeGeoId
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x36710b9d; S=0x3670ee05; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeQuads;	// G=0x36710ddd; S=0x3670f055; @synthesize=_includeQuads
@property(assign, nonatomic) BOOL isStrictMapRegion;	// G=0x36710d75; S=0x3670f005; @synthesize=_isStrictMapRegion
@property(retain, nonatomic) GEOLocation *location;	// G=0x36710ae1; S=0x36710af1; @synthesize=_location
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x36710b49; S=0x36710b59; @synthesize=_mapRegion
@property(assign, nonatomic) int maxBusinessReviews;	// G=0x36710d11; S=0x3670ef3d; @synthesize=_maxBusinessReviews
@property(assign, nonatomic) int maxResults;	// G=0x3670ee29; S=0x3670ee4d; @synthesize=_maxResults
@property(readonly, assign, nonatomic) long long *placeIDs;	// G=0x3670ea91; 
@property(readonly, assign, nonatomic) unsigned placeIDsCount;	// G=0x3670ea7d; 
@property(assign, nonatomic) int resultOffset;	// G=0x36710bed; S=0x3670ee71; @synthesize=_resultOffset
@property(retain, nonatomic) NSString *search;	// G=0x36710b15; S=0x36710b25; @synthesize=_search
@property(retain, nonatomic) NSString *searchContext;	// G=0x36710e81; S=0x36710e91; @synthesize=_searchContext
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring;	// G=0x36710eb5; S=0x36710ec5; @synthesize=_searchContextSubstring
@property(retain, nonatomic) NSMutableArray *searchSubstrings;	// G=0x36710e1d; S=0x36710e2d; @synthesize=_searchSubstrings
@property(retain, nonatomic) GEOSessionID *sessionGUID;	// G=0x36710c2d; S=0x36710c3d; @synthesize=_sessionGUID
@property(assign, nonatomic) int sessionID;	// G=0x36710c1d; S=0x3670ee95; @synthesize=_sessionID
- (void)addBusinessID:(long long)anId;	// 0x3670ebc5
- (void)addFilterByBusinessCategory:(id)category;	// 0x3670ef61
- (void)addIncludeAdditionalPlaceType:(int)type;	// 0x3670ed35
- (void)addPlaceID:(long long)anId;	// 0x3670eab5
- (void)addSearchSubstring:(id)substring;	// 0x3670f09d
// declared property getter: - (id)address;	// 0x36710aad
- (long long)businessIDAtIndex:(unsigned)index;	// 0x3670ebdd
// declared property getter: - (long long *)businessIDs;	// 0x3670eba1
// declared property getter: - (unsigned)businessIDsCount;	// 0x3670eb8d
// declared property getter: - (int)businessSortOrder;	// 0x36710c81
- (void)clearBusinessIDs;	// 0x3670ebb1
- (void)clearIncludeAdditionalPlaceTypes;	// 0x3670ed21
- (void)clearPlaceIDs;	// 0x3670eaa1
- (void)dealloc;	// 0x3670e965
- (id)description;	// 0x3670f195
- (id)dictionaryRepresentation;	// 0x3670f205
// declared property getter: - (BOOL)excludeAddressInResults;	// 0x36710e0d
- (id)filterByBusinessCategoryAtIndex:(unsigned)index;	// 0x3670efe5
// declared property getter: - (id)filterByBusinessCategorys;	// 0x36710d21
- (unsigned)filterByBusinessCategorysCount;	// 0x3670efc5
// declared property getter: - (long long)geoId;	// 0x36710da5
// declared property getter: - (BOOL)hasAddress;	// 0x3670ec9d
// declared property getter: - (BOOL)hasBusinessSortOrder;	// 0x36710c61
// declared property getter: - (BOOL)hasExcludeAddressInResults;	// 0x36710ded
// declared property getter: - (BOOL)hasGeoId;	// 0x36710d85
// declared property getter: - (BOOL)hasIncludeBusinessCategories;	// 0x36710cc1
// declared property getter: - (BOOL)hasIncludeBusinessRating;	// 0x36710c91
// declared property getter: - (BOOL)hasIncludeGeoId;	// 0x36710e51
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x36710b7d
// declared property getter: - (BOOL)hasIncludeQuads;	// 0x36710dbd
// declared property getter: - (BOOL)hasIsStrictMapRegion;	// 0x36710d55
// declared property getter: - (BOOL)hasLocation;	// 0x3670ecb5
// declared property getter: - (BOOL)hasMapRegion;	// 0x3670ece5
// declared property getter: - (BOOL)hasMaxBusinessReviews;	// 0x36710cf1
// declared property getter: - (BOOL)hasMaxResults;	// 0x36710bad
// declared property getter: - (BOOL)hasResultOffset;	// 0x36710bcd
// declared property getter: - (BOOL)hasSearch;	// 0x3670eccd
// declared property getter: - (BOOL)hasSearchContext;	// 0x3670f165
// declared property getter: - (BOOL)hasSearchContextSubstring;	// 0x3670f17d
// declared property getter: - (BOOL)hasSessionGUID;	// 0x3670eeb9
// declared property getter: - (BOOL)hasSessionID;	// 0x36710bfd
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned)index;	// 0x3670ed49
// declared property getter: - (int *)includeAdditionalPlaceTypes;	// 0x3670ed11
// declared property getter: - (unsigned)includeAdditionalPlaceTypesCount;	// 0x3670ecfd
// declared property getter: - (BOOL)includeBusinessCategories;	// 0x36710ce1
// declared property getter: - (BOOL)includeBusinessRating;	// 0x36710cb1
// declared property getter: - (BOOL)includeGeoId;	// 0x36710e71
// declared property getter: - (BOOL)includePhonetics;	// 0x36710b9d
// declared property getter: - (BOOL)includeQuads;	// 0x36710ddd
// declared property getter: - (BOOL)isStrictMapRegion;	// 0x36710d75
// declared property getter: - (id)location;	// 0x36710ae1
// declared property getter: - (id)mapRegion;	// 0x36710b49
// declared property getter: - (int)maxBusinessReviews;	// 0x36710d11
// declared property getter: - (int)maxResults;	// 0x3670ee29
- (long long)placeIDAtIndex:(unsigned)index;	// 0x3670eacd
// declared property getter: - (long long *)placeIDs;	// 0x3670ea91
// declared property getter: - (unsigned)placeIDsCount;	// 0x3670ea7d
- (BOOL)readFrom:(id)from;	// 0x3670f989
- (unsigned)requestTypeCode;	// 0x36710a8d
- (Class)responseClass;	// 0x36710a91
// declared property getter: - (int)resultOffset;	// 0x36710bed
// declared property getter: - (id)search;	// 0x36710b15
// declared property getter: - (id)searchContext;	// 0x36710e81
// declared property getter: - (id)searchContextSubstring;	// 0x36710eb5
- (id)searchSubstringAtIndex:(unsigned)index;	// 0x3670f121
// declared property getter: - (id)searchSubstrings;	// 0x36710e1d
- (unsigned)searchSubstringsCount;	// 0x3670f101
// declared property getter: - (id)sessionGUID;	// 0x36710c2d
// declared property getter: - (int)sessionID;	// 0x36710c1d
// declared property setter: - (void)setAddress:(id)address;	// 0x36710abd
- (void)setBusinessIDs:(long long *)ids count:(unsigned)count;	// 0x3670ec85
// declared property setter: - (void)setBusinessSortOrder:(int)order;	// 0x3670eed1
// declared property setter: - (void)setExcludeAddressInResults:(BOOL)results;	// 0x3670f079
// declared property setter: - (void)setFilterByBusinessCategorys:(id)categorys;	// 0x36710d31
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x3670f029
// declared property setter: - (void)setHasBusinessSortOrder:(BOOL)order;	// 0x36710c71
// declared property setter: - (void)setHasExcludeAddressInResults:(BOOL)results;	// 0x36710dfd
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x36710d95
// declared property setter: - (void)setHasIncludeBusinessCategories:(BOOL)categories;	// 0x36710cd1
// declared property setter: - (void)setHasIncludeBusinessRating:(BOOL)rating;	// 0x36710ca1
// declared property setter: - (void)setHasIncludeGeoId:(BOOL)anId;	// 0x36710e61
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x36710b8d
// declared property setter: - (void)setHasIncludeQuads:(BOOL)quads;	// 0x36710dcd
// declared property setter: - (void)setHasIsStrictMapRegion:(BOOL)region;	// 0x36710d65
// declared property setter: - (void)setHasMaxBusinessReviews:(BOOL)reviews;	// 0x36710d01
// declared property setter: - (void)setHasMaxResults:(BOOL)results;	// 0x36710bbd
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x36710bdd
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x36710c0d
- (void)setIncludeAdditionalPlaceTypes:(int *)types count:(unsigned)count;	// 0x3670eded
// declared property setter: - (void)setIncludeBusinessCategories:(BOOL)categories;	// 0x3670ef19
// declared property setter: - (void)setIncludeBusinessRating:(BOOL)rating;	// 0x3670eef5
// declared property setter: - (void)setIncludeGeoId:(BOOL)anId;	// 0x3670f141
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x3670ee05
// declared property setter: - (void)setIncludeQuads:(BOOL)quads;	// 0x3670f055
// declared property setter: - (void)setIsStrictMapRegion:(BOOL)region;	// 0x3670f005
// declared property setter: - (void)setLocation:(id)location;	// 0x36710af1
// declared property setter: - (void)setMapRegion:(id)region;	// 0x36710b59
// declared property setter: - (void)setMaxBusinessReviews:(int)reviews;	// 0x3670ef3d
// declared property setter: - (void)setMaxResults:(int)results;	// 0x3670ee4d
- (void)setPlaceIDs:(long long *)ids count:(unsigned)count;	// 0x3670eb75
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x3670ee71
// declared property setter: - (void)setSearch:(id)search;	// 0x36710b25
// declared property setter: - (void)setSearchContext:(id)context;	// 0x36710e91
// declared property setter: - (void)setSearchContextSubstring:(id)substring;	// 0x36710ec5
// declared property setter: - (void)setSearchSubstrings:(id)substrings;	// 0x36710e2d
// declared property setter: - (void)setSessionGUID:(id)guid;	// 0x36710c3d
// declared property setter: - (void)setSessionID:(int)anId;	// 0x3670ee95
- (void)writeTo:(id)to;	// 0x3671026d
@end

