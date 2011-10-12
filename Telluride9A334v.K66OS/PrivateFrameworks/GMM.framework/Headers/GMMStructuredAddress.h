/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMStructuredAddress : PBCodable {
	NSString *_thoroughfare;	// 4 = 0x4
	NSString *_dependentLocality;	// 8 = 0x8
	NSString *_locality;	// 12 = 0xc
	NSString *_region;	// 16 = 0x10
	NSString *_postalCode;	// 20 = 0x14
	NSString *_countryCode;	// 24 = 0x18
	NSString *_countryName;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *countryCode;	// G=0x35b8c39d; S=0x35b8c3ad; @synthesize=_countryCode
@property(retain, nonatomic) NSString *countryName;	// G=0x35b8c3d1; S=0x35b8c3e1; @synthesize=_countryName
@property(retain, nonatomic) NSString *dependentLocality;	// G=0x35b8c2cd; S=0x35b8c2dd; @synthesize=_dependentLocality
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x35b8be15; 
@property(readonly, assign, nonatomic) BOOL hasCountryName;	// G=0x35b8be2d; 
@property(readonly, assign, nonatomic) BOOL hasDependentLocality;	// G=0x35b8bdb5; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x35b8bdcd; 
@property(readonly, assign, nonatomic) BOOL hasPostalCode;	// G=0x35b8bdfd; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x35b8bde5; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x35b8bd9d; 
@property(retain, nonatomic) NSString *locality;	// G=0x35b8c301; S=0x35b8c311; @synthesize=_locality
@property(retain, nonatomic) NSString *postalCode;	// G=0x35b8c369; S=0x35b8c379; @synthesize=_postalCode
@property(retain, nonatomic) NSString *region;	// G=0x35b8c335; S=0x35b8c345; @synthesize=_region
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x35b8c299; S=0x35b8c2a9; @synthesize=_thoroughfare
// declared property getter: - (id)countryCode;	// 0x35b8c39d
// declared property getter: - (id)countryName;	// 0x35b8c3d1
- (void)dealloc;	// 0x35b8bce1
// declared property getter: - (id)dependentLocality;	// 0x35b8c2cd
- (id)description;	// 0x35b7aba1
- (id)description;	// 0x35b8be45
- (id)dictionaryRepresentation;	// 0x35b8beb5
// declared property getter: - (BOOL)hasCountryCode;	// 0x35b8be15
// declared property getter: - (BOOL)hasCountryName;	// 0x35b8be2d
// declared property getter: - (BOOL)hasDependentLocality;	// 0x35b8bdb5
// declared property getter: - (BOOL)hasLocality;	// 0x35b8bdcd
// declared property getter: - (BOOL)hasPostalCode;	// 0x35b8bdfd
// declared property getter: - (BOOL)hasRegion;	// 0x35b8bde5
// declared property getter: - (BOOL)hasThoroughfare;	// 0x35b8bd9d
// declared property getter: - (id)locality;	// 0x35b8c301
// declared property getter: - (id)postalCode;	// 0x35b8c369
- (BOOL)readFrom:(id)from;	// 0x35b8c011
// declared property getter: - (id)region;	// 0x35b8c335
// declared property setter: - (void)setCountryCode:(id)code;	// 0x35b8c3ad
// declared property setter: - (void)setCountryName:(id)name;	// 0x35b8c3e1
// declared property setter: - (void)setDependentLocality:(id)locality;	// 0x35b8c2dd
// declared property setter: - (void)setLocality:(id)locality;	// 0x35b8c311
// declared property setter: - (void)setPostalCode:(id)code;	// 0x35b8c379
// declared property setter: - (void)setRegion:(id)region;	// 0x35b8c345
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x35b8c2a9
// declared property getter: - (id)thoroughfare;	// 0x35b8c299
- (void)writeTo:(id)to;	// 0x35b8c18d
@end

