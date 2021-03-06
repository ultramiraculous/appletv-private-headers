/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray, GEOMapRegion, GEOLatLng, GEOAddress;

@interface GEOPlace : PBCodable {
	long long _geoId;	// 4 = 0x4
	long long _uID;	// 12 = 0xc
	GEOAddress *_address;	// 20 = 0x14
	int _addressGeocodeAccuracy;	// 24 = 0x18
	NSMutableArray *_business;	// 28 = 0x1c
	GEOLatLng *_center;	// 32 = 0x20
	NSMutableArray *_entryPoints;	// 36 = 0x24
	int _localSearchProviderID;	// 40 = 0x28
	GEOMapRegion *_mapRegion;	// 44 = 0x2c
	NSString *_name;	// 48 = 0x30
	GEOAddress *_phoneticAddress;	// 52 = 0x34
	NSString *_phoneticName;	// 56 = 0x38
	int _type;	// 60 = 0x3c
	int _version;	// 64 = 0x40
	BOOL _isDisputed;	// 68 = 0x44
	struct {
		unsigned geoId : 1;
		unsigned uID : 1;
		unsigned addressGeocodeAccuracy : 1;
		unsigned localSearchProviderID : 1;
		unsigned type : 1;
		unsigned version : 1;
		unsigned isDisputed : 1;
	} _has;	// 69 = 0x45
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x33f6a841; S=0x33f4b509; @synthesize=_address
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x33f70f9d; S=0x33f8ed19; @synthesize=_addressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x33f70439; S=0x33f6a7ad; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x33f6a7d9; S=0x33f4b739; @synthesize=_center
@property(retain, nonatomic) NSMutableArray *entryPoints;	// G=0x33f9008d; S=0x33f6a7bd; @synthesize=_entryPoints
@property(assign, nonatomic) long long geoId;	// G=0x33f70fe1; S=0x33f8ef21; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x33f8ec0d; 
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x33f8ed61; S=0x33f8ed41; 
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x33f8ec55; 
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x33f8ef71; S=0x33f8ef55; 
@property(assign, nonatomic) BOOL hasIsDisputed;	// G=0x33f8eeb1; S=0x33f8ee91; 
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x33f8ef0d; S=0x33f8eeed; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x33f8ebf5; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x33f8ebdd; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x33f8ec3d; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x33f8ec25; 
@property(assign, nonatomic) BOOL hasType;	// G=0x33f8ebc9; S=0x33f8eba9; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x33f8eb11; S=0x33f8eaf1; 
@property(assign, nonatomic) BOOL hasVersion;	// G=0x33f8eb6d; S=0x33f8eb4d; 
@property(assign, nonatomic) BOOL isDisputed;	// G=0x33f8ee41; S=0x33f8ee69; @synthesize=_isDisputed
@property(assign, nonatomic) int localSearchProviderID;	// G=0x33f9009d; S=0x33f8eec5; @synthesize=_localSearchProviderID
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x33f6f06d; S=0x33f4b6a9; @synthesize=_mapRegion
@property(retain, nonatomic) NSString *name;	// G=0x33f6a831; S=0x33f549a5; @synthesize=_name
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x33f9007d; S=0x33f6a79d; @synthesize=_phoneticAddress
@property(retain, nonatomic) NSString *phoneticName;	// G=0x33f9006d; S=0x33f6a78d; @synthesize=_phoneticName
@property(assign, nonatomic) int type;	// G=0x33f9005d; S=0x33f8eb81; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x33f90035; S=0x33f8eabd; @synthesize=_uID
@property(assign, nonatomic) int version;	// G=0x33f9004d; S=0x33f8eb25; @synthesize=_version
- (void)addBusiness:(id)business;	// 0x33f8ec8d
- (void)addEntryPoint:(id)point;	// 0x33f8ed95
// declared property getter: - (id)address;	// 0x33f6a841
- (id)addressDictionary;	// 0x33f7a7a1
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x33f70f9d
// declared property getter: - (id)business;	// 0x33f70439
- (id)businessAtIndex:(unsigned)index;	// 0x33f8ecf9
- (unsigned)businessCount;	// 0x33f6a851
// declared property getter: - (id)center;	// 0x33f6a7d9
- (void)clearBusiness;	// 0x33f8ec6d
- (void)clearEntryPoints;	// 0x33f8ed75
- (void)copyTo:(id)to;	// 0x33f8f661
- (void)dealloc;	// 0x33f6a6bd
- (id)description;	// 0x33f8ef85
- (id)dictionaryRepresentation;	// 0x33f8eff5
- (id)entryPointAtIndex:(unsigned)index;	// 0x33f8ee21
// declared property getter: - (id)entryPoints;	// 0x33f9008d
- (unsigned)entryPointsCount;	// 0x33f8ee01
// declared property getter: - (long long)geoId;	// 0x33f70fe1
// declared property getter: - (BOOL)hasAddress;	// 0x33f8ec0d
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x33f8ed61
// declared property getter: - (BOOL)hasCenter;	// 0x33f8ec55
// declared property getter: - (BOOL)hasGeoId;	// 0x33f8ef71
// declared property getter: - (BOOL)hasIsDisputed;	// 0x33f8eeb1
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x33f8ef0d
// declared property getter: - (BOOL)hasMapRegion;	// 0x33f8ebf5
// declared property getter: - (BOOL)hasName;	// 0x33f8ebdd
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x33f8ec3d
// declared property getter: - (BOOL)hasPhoneticName;	// 0x33f8ec25
// declared property getter: - (BOOL)hasType;	// 0x33f8ebc9
// declared property getter: - (BOOL)hasUID;	// 0x33f8eb11
// declared property getter: - (BOOL)hasVersion;	// 0x33f8eb6d
- (unsigned)hash;	// 0x33f8fdf5
// declared property getter: - (BOOL)isDisputed;	// 0x33f8ee41
- (BOOL)isEqual:(id)equal;	// 0x33f8fa7d
// declared property getter: - (int)localSearchProviderID;	// 0x33f9009d
// declared property getter: - (id)mapRegion;	// 0x33f6f06d
// declared property getter: - (id)name;	// 0x33f6a831
// declared property getter: - (id)phoneticAddress;	// 0x33f9007d
// declared property getter: - (id)phoneticName;	// 0x33f9006d
- (BOOL)readFrom:(id)from;	// 0x33f6a7cd
// declared property setter: - (void)setAddress:(id)address;	// 0x33f4b509
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x33f8ed19
// declared property setter: - (void)setBusiness:(id)business;	// 0x33f6a7ad
// declared property setter: - (void)setCenter:(id)center;	// 0x33f4b739
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x33f6a7bd
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x33f8ef21
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x33f8ed41
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x33f8ef55
// declared property setter: - (void)setHasIsDisputed:(BOOL)disputed;	// 0x33f8ee91
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x33f8eeed
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x33f8eba9
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x33f8eaf1
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x33f8eb4d
// declared property setter: - (void)setIsDisputed:(BOOL)disputed;	// 0x33f8ee69
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x33f8eec5
// declared property setter: - (void)setMapRegion:(id)region;	// 0x33f4b6a9
// declared property setter: - (void)setName:(id)name;	// 0x33f549a5
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x33f6a79d
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x33f6a78d
// declared property setter: - (void)setType:(int)type;	// 0x33f8eb81
// declared property setter: - (void)setUID:(long long)uid;	// 0x33f8eabd
// declared property setter: - (void)setVersion:(int)version;	// 0x33f8eb25
// declared property getter: - (int)type;	// 0x33f9005d
// declared property getter: - (long long)uID;	// 0x33f90035
// declared property getter: - (int)version;	// 0x33f9004d
- (void)writeTo:(id)to;	// 0x33f6f771
@end

