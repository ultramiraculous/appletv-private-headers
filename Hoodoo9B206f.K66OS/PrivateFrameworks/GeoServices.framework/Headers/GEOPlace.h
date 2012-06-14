/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOLatLng, NSMutableArray, GEOAddress, GEOMapRegion, NSString;

@interface GEOPlace : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	BOOL _hasType;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	GEOMapRegion *_mapRegion;	// 36 = 0x24
	GEOAddress *_address;	// 40 = 0x28
	NSString *_phoneticName;	// 44 = 0x2c
	GEOAddress *_phoneticAddress;	// 48 = 0x30
	GEOLatLng *_center;	// 52 = 0x34
	NSMutableArray *_business;	// 56 = 0x38
	BOOL _hasAddressGeocodeAccuracy;	// 60 = 0x3c
	int _addressGeocodeAccuracy;	// 64 = 0x40
	BOOL _hasGeoId;	// 68 = 0x44
	long long _geoId;	// 72 = 0x48
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x3286f08d; S=0x3286f09d; @synthesize=_address
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x3286f1b1; S=0x3286e0e9; @synthesize=_addressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x3286f15d; S=0x3286f16d; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x3286f129; S=0x3286f139; @synthesize=_center
@property(assign, nonatomic) long long geoId;	// G=0x3286f1e1; S=0x3286e10d; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x3286dfe5; 
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x3286f191; S=0x3286f1a1; @synthesize=_hasAddressGeocodeAccuracy
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x3286e02d; 
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x3286f1c1; S=0x3286f1d1; @synthesize=_hasGeoId
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x3286dfcd; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x3286dfb5; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x3286e015; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x3286dffd; 
@property(assign, nonatomic) BOOL hasType;	// G=0x3286eff5; S=0x3286f005; @synthesize=_hasType
@property(assign, nonatomic) BOOL hasUID;	// G=0x3286ef8d; S=0x3286ef9d; @synthesize=_hasUID
@property(assign, nonatomic) BOOL hasVersion;	// G=0x3286efc5; S=0x3286efd5; @synthesize=_hasVersion
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x3286f059; S=0x3286f069; @synthesize=_mapRegion
@property(retain, nonatomic) NSString *name;	// G=0x3286f025; S=0x3286f035; @synthesize=_name
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x3286f0f5; S=0x3286f105; @synthesize=_phoneticAddress
@property(retain, nonatomic) NSString *phoneticName;	// G=0x3286f0c1; S=0x3286f0d1; @synthesize=_phoneticName
@property(assign, nonatomic) int type;	// G=0x3286f015; S=0x3286df91; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x3286efad; S=0x3286df41; @synthesize=_uID
@property(assign, nonatomic) int version;	// G=0x3286efe5; S=0x3286df6d; @synthesize=_version
- (void)addBusiness:(id)business;	// 0x3286e045
// declared property getter: - (id)address;	// 0x3286f08d
- (id)addressDictionary;	// 0x3285e3c9
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x3286f1b1
// declared property getter: - (id)business;	// 0x3286f15d
- (id)businessAtIndex:(unsigned)index;	// 0x3286e0c9
- (unsigned)businessCount;	// 0x3286e0a9
// declared property getter: - (id)center;	// 0x3286f129
- (void)dealloc;	// 0x3286de85
- (id)description;	// 0x3286e139
- (id)dictionaryRepresentation;	// 0x3286e1a9
// declared property getter: - (long long)geoId;	// 0x3286f1e1
// declared property getter: - (BOOL)hasAddress;	// 0x3286dfe5
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x3286f191
// declared property getter: - (BOOL)hasCenter;	// 0x3286e02d
// declared property getter: - (BOOL)hasGeoId;	// 0x3286f1c1
// declared property getter: - (BOOL)hasMapRegion;	// 0x3286dfcd
// declared property getter: - (BOOL)hasName;	// 0x3286dfb5
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x3286e015
// declared property getter: - (BOOL)hasPhoneticName;	// 0x3286dffd
// declared property getter: - (BOOL)hasType;	// 0x3286eff5
// declared property getter: - (BOOL)hasUID;	// 0x3286ef8d
// declared property getter: - (BOOL)hasVersion;	// 0x3286efc5
// declared property getter: - (id)mapRegion;	// 0x3286f059
// declared property getter: - (id)name;	// 0x3286f025
// declared property getter: - (id)phoneticAddress;	// 0x3286f0f5
// declared property getter: - (id)phoneticName;	// 0x3286f0c1
- (BOOL)readFrom:(id)from;	// 0x3286e629
// declared property setter: - (void)setAddress:(id)address;	// 0x3286f09d
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x3286e0e9
// declared property setter: - (void)setBusiness:(id)business;	// 0x3286f16d
// declared property setter: - (void)setCenter:(id)center;	// 0x3286f139
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x3286e10d
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x3286f1a1
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x3286f1d1
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x3286f005
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x3286ef9d
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x3286efd5
// declared property setter: - (void)setMapRegion:(id)region;	// 0x3286f069
// declared property setter: - (void)setName:(id)name;	// 0x3286f035
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x3286f105
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x3286f0d1
// declared property setter: - (void)setType:(int)type;	// 0x3286df91
// declared property setter: - (void)setUID:(long long)uid;	// 0x3286df41
// declared property setter: - (void)setVersion:(int)version;	// 0x3286df6d
// declared property getter: - (int)type;	// 0x3286f015
// declared property getter: - (long long)uID;	// 0x3286efad
// declared property getter: - (int)version;	// 0x3286efe5
- (void)writeTo:(id)to;	// 0x3286eaf1
@end
