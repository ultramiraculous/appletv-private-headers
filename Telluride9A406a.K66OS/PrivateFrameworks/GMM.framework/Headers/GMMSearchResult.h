/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMKmlInfo, NSMutableArray, GMMStructuredAddress, GMMAdInfo, NSString, GMMRating, GMMGeometry;

@interface GMMSearchResult : PBCodable {
	int _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	GMMGeometry *_geometry;	// 12 = 0xc
	NSMutableArray *_addressLines;	// 16 = 0x10
	NSString *_phone;	// 20 = 0x14
	NSMutableArray *_references;	// 24 = 0x18
	BOOL _hasShowIcon;	// 28 = 0x1c
	BOOL _showIcon;	// 29 = 0x1d
	NSString *_attributionText;	// 32 = 0x20
	NSString *_attributionUrl;	// 36 = 0x24
	GMMKmlInfo *_kmlInfo;	// 40 = 0x28
	NSMutableArray *_images;	// 44 = 0x2c
	GMMStructuredAddress *_structuredAddress;	// 48 = 0x30
	NSString *_mapsUrl;	// 52 = 0x34
	GMMAdInfo *_adInfo;	// 56 = 0x38
	NSString *_queryRefinementString;	// 60 = 0x3c
	GMMRating *_rating;	// 64 = 0x40
	BOOL _hasCid;	// 68 = 0x44
	unsigned long long _cid;	// 72 = 0x48
	BOOL _hasLocationSource;	// 80 = 0x50
	int _locationSource;	// 84 = 0x54
	BOOL _hasInexactPosition;	// 88 = 0x58
	BOOL _inexactPosition;	// 89 = 0x59
	NSString *_streetViewPanoId;	// 92 = 0x5c
	BOOL _hasUnverifiedListing;	// 96 = 0x60
	BOOL _unverifiedListing;	// 97 = 0x61
	BOOL _hasSesameEditable;	// 98 = 0x62
	BOOL _sesameEditable;	// 99 = 0x63
	BOOL _hasSesameDetailsEditable;	// 100 = 0x64
	BOOL _sesameDetailsEditable;	// 101 = 0x65
	NSString *_sesameFeatureId;	// 104 = 0x68
	NSString *_directionsPlacemarkToken;	// 108 = 0x6c
	BOOL _hasClosedListing;	// 112 = 0x70
	BOOL _closedListing;	// 113 = 0x71
}
@property(retain, nonatomic) GMMAdInfo *adInfo;	// G=0x33a91565; S=0x33a91575; @synthesize=_adInfo
@property(retain, nonatomic) NSMutableArray *addressLines;	// G=0x33a91371; S=0x33a91381; @synthesize=_addressLines
@property(retain, nonatomic) NSString *attributionText;	// G=0x33a9142d; S=0x33a9143d; @synthesize=_attributionText
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x33a91461; S=0x33a91471; @synthesize=_attributionUrl
@property(assign, nonatomic) unsigned long long cid;	// G=0x33a91621; S=0x33a8fc99; @synthesize=_cid
@property(assign, nonatomic) BOOL closedListing;	// G=0x33a8fe51; S=0x33a8fe75; @synthesize=_closedListing
@property(retain, nonatomic) NSString *directionsPlacemarkToken;	// G=0x33a91751; S=0x33a91761; @synthesize=_directionsPlacemarkToken
@property(retain, nonatomic) GMMGeometry *geometry;	// G=0x33a9133d; S=0x33a9134d; @synthesize=_geometry
@property(readonly, assign, nonatomic) BOOL hasAdInfo;	// G=0x33a8fc51; 
@property(readonly, assign, nonatomic) BOOL hasAttributionText;	// G=0x33a8fb35; 
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x33a8fb4d; 
@property(assign, nonatomic) BOOL hasCid;	// G=0x33a91601; S=0x33a91611; @synthesize=_hasCid
@property(assign, nonatomic) BOOL hasClosedListing;	// G=0x33a91785; S=0x33a91795; @synthesize=_hasClosedListing
@property(readonly, assign, nonatomic) BOOL hasDirectionsPlacemarkToken;	// G=0x33a8fe39; 
@property(readonly, assign, nonatomic) BOOL hasGeometry;	// G=0x33a8f975; 
@property(assign, nonatomic) BOOL hasInexactPosition;	// G=0x33a91669; S=0x33a91679; @synthesize=_hasInexactPosition
@property(readonly, assign, nonatomic) BOOL hasKmlInfo;	// G=0x33a8fb65; 
@property(assign, nonatomic) BOOL hasLocationSource;	// G=0x33a91639; S=0x33a91649; @synthesize=_hasLocationSource
@property(readonly, assign, nonatomic) BOOL hasMapsUrl;	// G=0x33a8fc39; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x33a8f95d; 
@property(readonly, assign, nonatomic) BOOL hasPhone;	// G=0x33a8fa31; 
@property(readonly, assign, nonatomic) BOOL hasQueryRefinementString;	// G=0x33a8fc69; 
@property(readonly, assign, nonatomic) BOOL hasRating;	// G=0x33a8fc81; 
@property(assign, nonatomic) BOOL hasSesameDetailsEditable;	// G=0x33a916fd; S=0x33a9170d; @synthesize=_hasSesameDetailsEditable
@property(assign, nonatomic) BOOL hasSesameEditable;	// G=0x33a916dd; S=0x33a916ed; @synthesize=_hasSesameEditable
@property(readonly, assign, nonatomic) BOOL hasSesameFeatureId;	// G=0x33a8fe21; 
@property(assign, nonatomic) BOOL hasShowIcon;	// G=0x33a9140d; S=0x33a9141d; @synthesize=_hasShowIcon
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x33a8fd31; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x33a8fc21; 
@property(assign, nonatomic) BOOL hasUnverifiedListing;	// G=0x33a916bd; S=0x33a916cd; @synthesize=_hasUnverifiedListing
@property(retain, nonatomic) NSMutableArray *images;	// G=0x33a914c9; S=0x33a914d9; @synthesize=_images
@property(assign, nonatomic) BOOL inexactPosition;	// G=0x33a8fce9; S=0x33a8fd0d; @synthesize=_inexactPosition
@property(retain, nonatomic) GMMKmlInfo *kmlInfo;	// G=0x33a91495; S=0x33a914a5; @synthesize=_kmlInfo
@property(assign, nonatomic) int locationSource;	// G=0x33a91659; S=0x33a8fcc5; @synthesize=_locationSource
@property(retain, nonatomic) NSString *mapsUrl;	// G=0x33a91531; S=0x33a91541; @synthesize=_mapsUrl
@property(retain, nonatomic) NSString *name;	// G=0x33a91309; S=0x33a91319; @synthesize=_name
@property(retain, nonatomic) NSString *phone;	// G=0x33a913a5; S=0x33a913b5; @synthesize=_phone
@property(retain, nonatomic) NSString *queryRefinementString;	// G=0x33a91599; S=0x33a915a9; @synthesize=_queryRefinementString
@property(retain, nonatomic) GMMRating *rating;	// G=0x33a915cd; S=0x33a915dd; @synthesize=_rating
@property(retain, nonatomic) NSMutableArray *references;	// G=0x33a913d9; S=0x33a913e9; @synthesize=_references
@property(assign, nonatomic) BOOL sesameDetailsEditable;	// G=0x33a8fdd9; S=0x33a8fdfd; @synthesize=_sesameDetailsEditable
@property(assign, nonatomic) BOOL sesameEditable;	// G=0x33a8fd91; S=0x33a8fdb5; @synthesize=_sesameEditable
@property(retain, nonatomic) NSString *sesameFeatureId;	// G=0x33a9171d; S=0x33a9172d; @synthesize=_sesameFeatureId
@property(assign, nonatomic) BOOL showIcon;	// G=0x33a8faed; S=0x33a8fb11; @synthesize=_showIcon
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x33a91689; S=0x33a91699; @synthesize=_streetViewPanoId
@property(retain, nonatomic) GMMStructuredAddress *structuredAddress;	// G=0x33a914fd; S=0x33a9150d; @synthesize=_structuredAddress
@property(assign, nonatomic) int type;	// G=0x33a912e9; S=0x33a912f9; @synthesize=_type
@property(assign, nonatomic) BOOL unverifiedListing;	// G=0x33a8fd49; S=0x33a8fd6d; @synthesize=_unverifiedListing
// declared property getter: - (id)adInfo;	// 0x33a91565
- (void)addAddressLine:(id)line;	// 0x33a8f98d
- (void)addImage:(id)image;	// 0x33a8fb7d
- (void)addReference:(id)reference;	// 0x33a8fa49
- (id)addressLineAtIndex:(unsigned)index;	// 0x33a8fa11
// declared property getter: - (id)addressLines;	// 0x33a91371
- (unsigned)addressLinesCount;	// 0x33a8f9f1
// declared property getter: - (id)attributionText;	// 0x33a9142d
// declared property getter: - (id)attributionUrl;	// 0x33a91461
// declared property getter: - (unsigned long long)cid;	// 0x33a91621
// declared property getter: - (BOOL)closedListing;	// 0x33a8fe51
- (void)dealloc;	// 0x33a8f7d9
- (id)description;	// 0x33a8fe99
- (id)dictionaryRepresentation;	// 0x33a8ff09
// declared property getter: - (id)directionsPlacemarkToken;	// 0x33a91751
// declared property getter: - (id)geometry;	// 0x33a9133d
// declared property getter: - (BOOL)hasAdInfo;	// 0x33a8fc51
// declared property getter: - (BOOL)hasAttributionText;	// 0x33a8fb35
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x33a8fb4d
// declared property getter: - (BOOL)hasCid;	// 0x33a91601
// declared property getter: - (BOOL)hasClosedListing;	// 0x33a91785
// declared property getter: - (BOOL)hasDirectionsPlacemarkToken;	// 0x33a8fe39
// declared property getter: - (BOOL)hasGeometry;	// 0x33a8f975
// declared property getter: - (BOOL)hasInexactPosition;	// 0x33a91669
// declared property getter: - (BOOL)hasKmlInfo;	// 0x33a8fb65
// declared property getter: - (BOOL)hasLocationSource;	// 0x33a91639
// declared property getter: - (BOOL)hasMapsUrl;	// 0x33a8fc39
// declared property getter: - (BOOL)hasName;	// 0x33a8f95d
// declared property getter: - (BOOL)hasPhone;	// 0x33a8fa31
// declared property getter: - (BOOL)hasQueryRefinementString;	// 0x33a8fc69
// declared property getter: - (BOOL)hasRating;	// 0x33a8fc81
// declared property getter: - (BOOL)hasSesameDetailsEditable;	// 0x33a916fd
// declared property getter: - (BOOL)hasSesameEditable;	// 0x33a916dd
// declared property getter: - (BOOL)hasSesameFeatureId;	// 0x33a8fe21
// declared property getter: - (BOOL)hasShowIcon;	// 0x33a9140d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x33a8fd31
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x33a8fc21
// declared property getter: - (BOOL)hasUnverifiedListing;	// 0x33a916bd
- (id)imageAtIndex:(unsigned)index;	// 0x33a8fc01
// declared property getter: - (id)images;	// 0x33a914c9
- (unsigned)imagesCount;	// 0x33a8fbe1
// declared property getter: - (BOOL)inexactPosition;	// 0x33a8fce9
// declared property getter: - (id)kmlInfo;	// 0x33a91495
// declared property getter: - (int)locationSource;	// 0x33a91659
// declared property getter: - (id)mapsUrl;	// 0x33a91531
// declared property getter: - (id)name;	// 0x33a91309
// declared property getter: - (id)phone;	// 0x33a913a5
// declared property getter: - (id)queryRefinementString;	// 0x33a91599
// declared property getter: - (id)rating;	// 0x33a915cd
- (BOOL)readFrom:(id)from;	// 0x33a903f5
- (id)referenceAtIndex:(unsigned)index;	// 0x33a8facd
// declared property getter: - (id)references;	// 0x33a913d9
- (unsigned)referencesCount;	// 0x33a8faad
// declared property getter: - (BOOL)sesameDetailsEditable;	// 0x33a8fdd9
// declared property getter: - (BOOL)sesameEditable;	// 0x33a8fd91
// declared property getter: - (id)sesameFeatureId;	// 0x33a9171d
// declared property setter: - (void)setAdInfo:(id)info;	// 0x33a91575
// declared property setter: - (void)setAddressLines:(id)lines;	// 0x33a91381
// declared property setter: - (void)setAttributionText:(id)text;	// 0x33a9143d
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x33a91471
// declared property setter: - (void)setCid:(unsigned long long)cid;	// 0x33a8fc99
// declared property setter: - (void)setClosedListing:(BOOL)listing;	// 0x33a8fe75
// declared property setter: - (void)setDirectionsPlacemarkToken:(id)token;	// 0x33a91761
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x33a9134d
// declared property setter: - (void)setHasCid:(BOOL)cid;	// 0x33a91611
// declared property setter: - (void)setHasClosedListing:(BOOL)listing;	// 0x33a91795
// declared property setter: - (void)setHasInexactPosition:(BOOL)position;	// 0x33a91679
// declared property setter: - (void)setHasLocationSource:(BOOL)source;	// 0x33a91649
// declared property setter: - (void)setHasSesameDetailsEditable:(BOOL)editable;	// 0x33a9170d
// declared property setter: - (void)setHasSesameEditable:(BOOL)editable;	// 0x33a916ed
// declared property setter: - (void)setHasShowIcon:(BOOL)icon;	// 0x33a9141d
// declared property setter: - (void)setHasUnverifiedListing:(BOOL)listing;	// 0x33a916cd
// declared property setter: - (void)setImages:(id)images;	// 0x33a914d9
// declared property setter: - (void)setInexactPosition:(BOOL)position;	// 0x33a8fd0d
// declared property setter: - (void)setKmlInfo:(id)info;	// 0x33a914a5
// declared property setter: - (void)setLocationSource:(int)source;	// 0x33a8fcc5
// declared property setter: - (void)setMapsUrl:(id)url;	// 0x33a91541
// declared property setter: - (void)setName:(id)name;	// 0x33a91319
// declared property setter: - (void)setPhone:(id)phone;	// 0x33a913b5
// declared property setter: - (void)setQueryRefinementString:(id)string;	// 0x33a915a9
// declared property setter: - (void)setRating:(id)rating;	// 0x33a915dd
// declared property setter: - (void)setReferences:(id)references;	// 0x33a913e9
// declared property setter: - (void)setSesameDetailsEditable:(BOOL)editable;	// 0x33a8fdfd
// declared property setter: - (void)setSesameEditable:(BOOL)editable;	// 0x33a8fdb5
// declared property setter: - (void)setSesameFeatureId:(id)anId;	// 0x33a9172d
// declared property setter: - (void)setShowIcon:(BOOL)icon;	// 0x33a8fb11
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x33a91699
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x33a9150d
// declared property setter: - (void)setType:(int)type;	// 0x33a912f9
// declared property setter: - (void)setUnverifiedListing:(BOOL)listing;	// 0x33a8fd6d
// declared property getter: - (BOOL)showIcon;	// 0x33a8faed
// declared property getter: - (id)streetViewPanoId;	// 0x33a91689
// declared property getter: - (id)structuredAddress;	// 0x33a914fd
// declared property getter: - (int)type;	// 0x33a912e9
// declared property getter: - (BOOL)unverifiedListing;	// 0x33a8fd49
- (void)writeTo:(id)to;	// 0x33a90b35
@end

