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
@property(retain, nonatomic) GEOAddress *address;	// G=0x3144daad; S=0x3144dabd; @synthesize=_address
@property(readonly, assign, nonatomic) long long *businessIDs;	// G=0x3144bba1; 
@property(readonly, assign, nonatomic) unsigned businessIDsCount;	// G=0x3144bb8d; 
@property(assign, nonatomic) int businessSortOrder;	// G=0x3144dc81; S=0x3144bed1; @synthesize=_businessSortOrder
@property(assign, nonatomic) BOOL excludeAddressInResults;	// G=0x3144de0d; S=0x3144c079; @synthesize=_excludeAddressInResults
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys;	// G=0x3144dd21; S=0x3144dd31; @synthesize=_filterByBusinessCategorys
@property(assign, nonatomic) long long geoId;	// G=0x3144dda5; S=0x3144c029; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x3144bc9d; 
@property(assign, nonatomic) BOOL hasBusinessSortOrder;	// G=0x3144dc61; S=0x3144dc71; @synthesize=_hasBusinessSortOrder
@property(assign, nonatomic) BOOL hasExcludeAddressInResults;	// G=0x3144dded; S=0x3144ddfd; @synthesize=_hasExcludeAddressInResults
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x3144dd85; S=0x3144dd95; @synthesize=_hasGeoId
@property(assign, nonatomic) BOOL hasIncludeBusinessCategories;	// G=0x3144dcc1; S=0x3144dcd1; @synthesize=_hasIncludeBusinessCategories
@property(assign, nonatomic) BOOL hasIncludeBusinessRating;	// G=0x3144dc91; S=0x3144dca1; @synthesize=_hasIncludeBusinessRating
@property(assign, nonatomic) BOOL hasIncludeGeoId;	// G=0x3144de51; S=0x3144de61; @synthesize=_hasIncludeGeoId
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x3144db7d; S=0x3144db8d; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeQuads;	// G=0x3144ddbd; S=0x3144ddcd; @synthesize=_hasIncludeQuads
@property(assign, nonatomic) BOOL hasIsStrictMapRegion;	// G=0x3144dd55; S=0x3144dd65; @synthesize=_hasIsStrictMapRegion
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x3144bcb5; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x3144bce5; 
@property(assign, nonatomic) BOOL hasMaxBusinessReviews;	// G=0x3144dcf1; S=0x3144dd01; @synthesize=_hasMaxBusinessReviews
@property(assign, nonatomic) BOOL hasMaxResults;	// G=0x3144dbad; S=0x3144dbbd; @synthesize=_hasMaxResults
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x3144dbcd; S=0x3144dbdd; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSearch;	// G=0x3144bccd; 
@property(readonly, assign, nonatomic) BOOL hasSearchContext;	// G=0x3144c165; 
@property(readonly, assign, nonatomic) BOOL hasSearchContextSubstring;	// G=0x3144c17d; 
@property(readonly, assign, nonatomic) BOOL hasSessionGUID;	// G=0x3144beb9; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x3144dbfd; S=0x3144dc0d; @synthesize=_hasSessionID
@property(readonly, assign, nonatomic) int *includeAdditionalPlaceTypes;	// G=0x3144bd11; 
@property(readonly, assign, nonatomic) unsigned includeAdditionalPlaceTypesCount;	// G=0x3144bcfd; 
@property(assign, nonatomic) BOOL includeBusinessCategories;	// G=0x3144dce1; S=0x3144bf19; @synthesize=_includeBusinessCategories
@property(assign, nonatomic) BOOL includeBusinessRating;	// G=0x3144dcb1; S=0x3144bef5; @synthesize=_includeBusinessRating
@property(assign, nonatomic) BOOL includeGeoId;	// G=0x3144de71; S=0x3144c141; @synthesize=_includeGeoId
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x3144db9d; S=0x3144be05; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeQuads;	// G=0x3144dddd; S=0x3144c055; @synthesize=_includeQuads
@property(assign, nonatomic) BOOL isStrictMapRegion;	// G=0x3144dd75; S=0x3144c005; @synthesize=_isStrictMapRegion
@property(retain, nonatomic) GEOLocation *location;	// G=0x3144dae1; S=0x3144daf1; @synthesize=_location
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x3144db49; S=0x3144db59; @synthesize=_mapRegion
@property(assign, nonatomic) int maxBusinessReviews;	// G=0x3144dd11; S=0x3144bf3d; @synthesize=_maxBusinessReviews
@property(assign, nonatomic) int maxResults;	// G=0x3144be29; S=0x3144be4d; @synthesize=_maxResults
@property(readonly, assign, nonatomic) long long *placeIDs;	// G=0x3144ba91; 
@property(readonly, assign, nonatomic) unsigned placeIDsCount;	// G=0x3144ba7d; 
@property(assign, nonatomic) int resultOffset;	// G=0x3144dbed; S=0x3144be71; @synthesize=_resultOffset
@property(retain, nonatomic) NSString *search;	// G=0x3144db15; S=0x3144db25; @synthesize=_search
@property(retain, nonatomic) NSString *searchContext;	// G=0x3144de81; S=0x3144de91; @synthesize=_searchContext
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring;	// G=0x3144deb5; S=0x3144dec5; @synthesize=_searchContextSubstring
@property(retain, nonatomic) NSMutableArray *searchSubstrings;	// G=0x3144de1d; S=0x3144de2d; @synthesize=_searchSubstrings
@property(retain, nonatomic) GEOSessionID *sessionGUID;	// G=0x3144dc2d; S=0x3144dc3d; @synthesize=_sessionGUID
@property(assign, nonatomic) int sessionID;	// G=0x3144dc1d; S=0x3144be95; @synthesize=_sessionID
- (void)addBusinessID:(long long)anId;	// 0x3144bbc5
- (void)addFilterByBusinessCategory:(id)category;	// 0x3144bf61
- (void)addIncludeAdditionalPlaceType:(int)type;	// 0x3144bd35
- (void)addPlaceID:(long long)anId;	// 0x3144bab5
- (void)addSearchSubstring:(id)substring;	// 0x3144c09d
// declared property getter: - (id)address;	// 0x3144daad
- (long long)businessIDAtIndex:(unsigned)index;	// 0x3144bbdd
// declared property getter: - (long long *)businessIDs;	// 0x3144bba1
// declared property getter: - (unsigned)businessIDsCount;	// 0x3144bb8d
// declared property getter: - (int)businessSortOrder;	// 0x3144dc81
- (void)clearBusinessIDs;	// 0x3144bbb1
- (void)clearIncludeAdditionalPlaceTypes;	// 0x3144bd21
- (void)clearPlaceIDs;	// 0x3144baa1
- (void)dealloc;	// 0x3144b965
- (id)description;	// 0x3144c195
- (id)dictionaryRepresentation;	// 0x3144c205
// declared property getter: - (BOOL)excludeAddressInResults;	// 0x3144de0d
- (id)filterByBusinessCategoryAtIndex:(unsigned)index;	// 0x3144bfe5
// declared property getter: - (id)filterByBusinessCategorys;	// 0x3144dd21
- (unsigned)filterByBusinessCategorysCount;	// 0x3144bfc5
// declared property getter: - (long long)geoId;	// 0x3144dda5
// declared property getter: - (BOOL)hasAddress;	// 0x3144bc9d
// declared property getter: - (BOOL)hasBusinessSortOrder;	// 0x3144dc61
// declared property getter: - (BOOL)hasExcludeAddressInResults;	// 0x3144dded
// declared property getter: - (BOOL)hasGeoId;	// 0x3144dd85
// declared property getter: - (BOOL)hasIncludeBusinessCategories;	// 0x3144dcc1
// declared property getter: - (BOOL)hasIncludeBusinessRating;	// 0x3144dc91
// declared property getter: - (BOOL)hasIncludeGeoId;	// 0x3144de51
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x3144db7d
// declared property getter: - (BOOL)hasIncludeQuads;	// 0x3144ddbd
// declared property getter: - (BOOL)hasIsStrictMapRegion;	// 0x3144dd55
// declared property getter: - (BOOL)hasLocation;	// 0x3144bcb5
// declared property getter: - (BOOL)hasMapRegion;	// 0x3144bce5
// declared property getter: - (BOOL)hasMaxBusinessReviews;	// 0x3144dcf1
// declared property getter: - (BOOL)hasMaxResults;	// 0x3144dbad
// declared property getter: - (BOOL)hasResultOffset;	// 0x3144dbcd
// declared property getter: - (BOOL)hasSearch;	// 0x3144bccd
// declared property getter: - (BOOL)hasSearchContext;	// 0x3144c165
// declared property getter: - (BOOL)hasSearchContextSubstring;	// 0x3144c17d
// declared property getter: - (BOOL)hasSessionGUID;	// 0x3144beb9
// declared property getter: - (BOOL)hasSessionID;	// 0x3144dbfd
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned)index;	// 0x3144bd49
// declared property getter: - (int *)includeAdditionalPlaceTypes;	// 0x3144bd11
// declared property getter: - (unsigned)includeAdditionalPlaceTypesCount;	// 0x3144bcfd
// declared property getter: - (BOOL)includeBusinessCategories;	// 0x3144dce1
// declared property getter: - (BOOL)includeBusinessRating;	// 0x3144dcb1
// declared property getter: - (BOOL)includeGeoId;	// 0x3144de71
// declared property getter: - (BOOL)includePhonetics;	// 0x3144db9d
// declared property getter: - (BOOL)includeQuads;	// 0x3144dddd
// declared property getter: - (BOOL)isStrictMapRegion;	// 0x3144dd75
// declared property getter: - (id)location;	// 0x3144dae1
// declared property getter: - (id)mapRegion;	// 0x3144db49
// declared property getter: - (int)maxBusinessReviews;	// 0x3144dd11
// declared property getter: - (int)maxResults;	// 0x3144be29
- (long long)placeIDAtIndex:(unsigned)index;	// 0x3144bacd
// declared property getter: - (long long *)placeIDs;	// 0x3144ba91
// declared property getter: - (unsigned)placeIDsCount;	// 0x3144ba7d
- (BOOL)readFrom:(id)from;	// 0x3144c989
- (unsigned)requestTypeCode;	// 0x3144da8d
- (Class)responseClass;	// 0x3144da91
// declared property getter: - (int)resultOffset;	// 0x3144dbed
// declared property getter: - (id)search;	// 0x3144db15
// declared property getter: - (id)searchContext;	// 0x3144de81
// declared property getter: - (id)searchContextSubstring;	// 0x3144deb5
- (id)searchSubstringAtIndex:(unsigned)index;	// 0x3144c121
// declared property getter: - (id)searchSubstrings;	// 0x3144de1d
- (unsigned)searchSubstringsCount;	// 0x3144c101
// declared property getter: - (id)sessionGUID;	// 0x3144dc2d
// declared property getter: - (int)sessionID;	// 0x3144dc1d
// declared property setter: - (void)setAddress:(id)address;	// 0x3144dabd
- (void)setBusinessIDs:(long long *)ids count:(unsigned)count;	// 0x3144bc85
// declared property setter: - (void)setBusinessSortOrder:(int)order;	// 0x3144bed1
// declared property setter: - (void)setExcludeAddressInResults:(BOOL)results;	// 0x3144c079
// declared property setter: - (void)setFilterByBusinessCategorys:(id)categorys;	// 0x3144dd31
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x3144c029
// declared property setter: - (void)setHasBusinessSortOrder:(BOOL)order;	// 0x3144dc71
// declared property setter: - (void)setHasExcludeAddressInResults:(BOOL)results;	// 0x3144ddfd
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x3144dd95
// declared property setter: - (void)setHasIncludeBusinessCategories:(BOOL)categories;	// 0x3144dcd1
// declared property setter: - (void)setHasIncludeBusinessRating:(BOOL)rating;	// 0x3144dca1
// declared property setter: - (void)setHasIncludeGeoId:(BOOL)anId;	// 0x3144de61
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x3144db8d
// declared property setter: - (void)setHasIncludeQuads:(BOOL)quads;	// 0x3144ddcd
// declared property setter: - (void)setHasIsStrictMapRegion:(BOOL)region;	// 0x3144dd65
// declared property setter: - (void)setHasMaxBusinessReviews:(BOOL)reviews;	// 0x3144dd01
// declared property setter: - (void)setHasMaxResults:(BOOL)results;	// 0x3144dbbd
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x3144dbdd
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x3144dc0d
- (void)setIncludeAdditionalPlaceTypes:(int *)types count:(unsigned)count;	// 0x3144bded
// declared property setter: - (void)setIncludeBusinessCategories:(BOOL)categories;	// 0x3144bf19
// declared property setter: - (void)setIncludeBusinessRating:(BOOL)rating;	// 0x3144bef5
// declared property setter: - (void)setIncludeGeoId:(BOOL)anId;	// 0x3144c141
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x3144be05
// declared property setter: - (void)setIncludeQuads:(BOOL)quads;	// 0x3144c055
// declared property setter: - (void)setIsStrictMapRegion:(BOOL)region;	// 0x3144c005
// declared property setter: - (void)setLocation:(id)location;	// 0x3144daf1
// declared property setter: - (void)setMapRegion:(id)region;	// 0x3144db59
// declared property setter: - (void)setMaxBusinessReviews:(int)reviews;	// 0x3144bf3d
// declared property setter: - (void)setMaxResults:(int)results;	// 0x3144be4d
- (void)setPlaceIDs:(long long *)ids count:(unsigned)count;	// 0x3144bb75
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x3144be71
// declared property setter: - (void)setSearch:(id)search;	// 0x3144db25
// declared property setter: - (void)setSearchContext:(id)context;	// 0x3144de91
// declared property setter: - (void)setSearchContextSubstring:(id)substring;	// 0x3144dec5
// declared property setter: - (void)setSearchSubstrings:(id)substrings;	// 0x3144de2d
// declared property setter: - (void)setSessionGUID:(id)guid;	// 0x3144dc3d
// declared property setter: - (void)setSessionID:(int)anId;	// 0x3144be95
- (void)writeTo:(id)to;	// 0x3144d26d
@end

