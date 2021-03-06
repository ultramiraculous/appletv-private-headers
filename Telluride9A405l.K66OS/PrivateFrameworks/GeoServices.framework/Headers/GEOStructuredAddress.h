/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable {
	NSString *_country;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	NSString *_administrativeArea;	// 12 = 0xc
	NSString *_administrativeAreaCode;	// 16 = 0x10
	NSString *_subAdministrativeArea;	// 20 = 0x14
	NSString *_locality;	// 24 = 0x18
	NSString *_postCode;	// 28 = 0x1c
	NSString *_subLocality;	// 32 = 0x20
	NSString *_premises;	// 36 = 0x24
	NSString *_thoroughfare;	// 40 = 0x28
	NSString *_subThoroughfare;	// 44 = 0x2c
	NSString *_fullThoroughfare;	// 48 = 0x30
	NSString *_postCodeExtension;	// 52 = 0x34
	NSMutableArray *_areaOfInterests;	// 56 = 0x38
	NSString *_inlandWater;	// 60 = 0x3c
	NSString *_ocean;	// 64 = 0x40
	NSMutableArray *_dependentLocalitys;	// 68 = 0x44
	XXStruct_19EQxD _geoIds;	// 72 = 0x48
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x3146061d; S=0x3146062d; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x31460651; S=0x31460661; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x31460859; S=0x31460869; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x314605b5; S=0x314605c5; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x314605e9; S=0x314605f9; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x314608f5; S=0x31460905; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x314607f1; S=0x31460801; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x3145fa21; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x3145fa0d; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x3145f78d; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x3145f7a5; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x3145f75d; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x3145f775; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x3145f865; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x3145f939; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x3145f7d5; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x3145f951; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x3145f7ed; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x3145f87d; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x3145f81d; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x3145f7bd; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x3145f805; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x3145f84d; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x3145f835; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x3146088d; S=0x3146089d; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x314606b9; S=0x314606c9; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x314608c1; S=0x314608d1; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x314606ed; S=0x314606fd; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x31460825; S=0x31460835; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premises;	// G=0x31460755; S=0x31460765; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x31460685; S=0x31460695; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x31460721; S=0x31460731; @synthesize=_subLocality
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x314607bd; S=0x314607cd; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x31460789; S=0x31460799; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x3145f895
- (void)addDependentLocality:(id)locality;	// 0x3145f969
- (void)addGeoId:(long long)anId;	// 0x3145fa45
// declared property getter: - (id)administrativeArea;	// 0x3146061d
// declared property getter: - (id)administrativeAreaCode;	// 0x31460651
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x3145f919
// declared property getter: - (id)areaOfInterests;	// 0x31460859
- (unsigned)areaOfInterestsCount;	// 0x3145f8f9
- (void)clearGeoIds;	// 0x3145fa31
// declared property getter: - (id)country;	// 0x314605b5
// declared property getter: - (id)countryCode;	// 0x314605e9
- (void)dealloc;	// 0x3145f5c9
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x3145f9ed
// declared property getter: - (id)dependentLocalitys;	// 0x314608f5
- (unsigned)dependentLocalitysCount;	// 0x3145f9cd
- (id)description;	// 0x3145fb1d
- (id)dictionaryRepresentation;	// 0x3145fb8d
// declared property getter: - (id)fullThoroughfare;	// 0x314607f1
- (long long)geoIdAtIndex:(unsigned)index;	// 0x3145fa5d
// declared property getter: - (long long *)geoIds;	// 0x3145fa21
// declared property getter: - (unsigned)geoIdsCount;	// 0x3145fa0d
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x3145f78d
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x3145f7a5
// declared property getter: - (BOOL)hasCountry;	// 0x3145f75d
// declared property getter: - (BOOL)hasCountryCode;	// 0x3145f775
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x3145f865
// declared property getter: - (BOOL)hasInlandWater;	// 0x3145f939
// declared property getter: - (BOOL)hasLocality;	// 0x3145f7d5
// declared property getter: - (BOOL)hasOcean;	// 0x3145f951
// declared property getter: - (BOOL)hasPostCode;	// 0x3145f7ed
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x3145f87d
// declared property getter: - (BOOL)hasPremises;	// 0x3145f81d
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x3145f7bd
// declared property getter: - (BOOL)hasSubLocality;	// 0x3145f805
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x3145f84d
// declared property getter: - (BOOL)hasThoroughfare;	// 0x3145f835
// declared property getter: - (id)inlandWater;	// 0x3146088d
// declared property getter: - (id)locality;	// 0x314606b9
// declared property getter: - (id)ocean;	// 0x314608c1
// declared property getter: - (id)postCode;	// 0x314606ed
// declared property getter: - (id)postCodeExtension;	// 0x31460825
// declared property getter: - (id)premises;	// 0x31460755
- (BOOL)readFrom:(id)from;	// 0x3145fed1
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x3146062d
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x31460661
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x31460869
// declared property setter: - (void)setCountry:(id)country;	// 0x314605c5
// declared property setter: - (void)setCountryCode:(id)code;	// 0x314605f9
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x31460905
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x31460801
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x3145fb05
// declared property setter: - (void)setInlandWater:(id)water;	// 0x3146089d
// declared property setter: - (void)setLocality:(id)locality;	// 0x314606c9
// declared property setter: - (void)setOcean:(id)ocean;	// 0x314608d1
// declared property setter: - (void)setPostCode:(id)code;	// 0x314606fd
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x31460835
// declared property setter: - (void)setPremises:(id)premises;	// 0x31460765
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x31460695
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x31460731
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x314607cd
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x31460799
// declared property getter: - (id)subAdministrativeArea;	// 0x31460685
// declared property getter: - (id)subLocality;	// 0x31460721
// declared property getter: - (id)subThoroughfare;	// 0x314607bd
// declared property getter: - (id)thoroughfare;	// 0x31460789
- (void)writeTo:(id)to;	// 0x31460229
@end

