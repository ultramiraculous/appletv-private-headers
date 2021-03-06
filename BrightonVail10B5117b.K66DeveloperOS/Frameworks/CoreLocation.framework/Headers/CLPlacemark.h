/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, CLRegion, NSString, CLPlacemarkInternal, CLLocation, NSDictionary;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
	CLPlacemarkInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *ISOcountryCode;	// G=0x3162e231; 
@property(readonly, assign, nonatomic) NSDictionary *addressDictionary;	// G=0x3162e051; 
@property(readonly, assign, nonatomic) NSString *administrativeArea;	// G=0x3162e189; 
@property(readonly, assign, nonatomic) NSArray *areasOfInterest;	// G=0x3162e311; 
@property(readonly, assign, nonatomic) NSString *country;	// G=0x3162e269; 
@property(readonly, assign, nonatomic) NSString *inlandWater;	// G=0x3162e331; 
@property(readonly, assign, nonatomic) NSString *locality;	// G=0x3162e119; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x3162e011; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3162e071; 
@property(readonly, assign, nonatomic) NSString *ocean;	// G=0x3162e369; 
@property(readonly, assign, nonatomic) NSString *postalCode;	// G=0x3162e1f9; 
@property(readonly, assign, nonatomic) CLRegion *region;	// G=0x3162e031; 
@property(readonly, assign, nonatomic) NSString *subAdministrativeArea;	// G=0x3162e1c1; 
@property(readonly, assign, nonatomic) NSString *subLocality;	// G=0x3162e151; 
@property(readonly, assign, nonatomic) NSString *subThoroughfare;	// G=0x3162e0e1; 
@property(readonly, assign, nonatomic) NSString *thoroughfare;	// G=0x3162e0a9; 
- (id)initWithCoder:(id)coder;	// 0x3162de9d
- (id)initWithLocation:(id)location addressDictionary:(id)dictionary region:(id)region areasOfInterest:(id)interest;	// 0x3162dbe9
- (id)initWithPlacemark:(id)placemark;	// 0x3162dcd9
// declared property getter: - (id)ISOcountryCode;	// 0x3162e231
// declared property getter: - (id)addressDictionary;	// 0x3162e051
// declared property getter: - (id)administrativeArea;	// 0x3162e189
// declared property getter: - (id)areasOfInterest;	// 0x3162e311
- (id)copyWithZone:(NSZone *)zone;	// 0x3162dfcd
// declared property getter: - (id)country;	// 0x3162e269
- (void)dealloc;	// 0x3162ddf5
- (id)description;	// 0x3162e3a1
- (void)encodeWithCoder:(id)coder;	// 0x3162df29
- (id)formattedAddressLines;	// 0x3162e2d9
- (id)fullThoroughfare;	// 0x3162e2a1
// declared property getter: - (id)inlandWater;	// 0x3162e331
// declared property getter: - (id)locality;	// 0x3162e119
// declared property getter: - (id)location;	// 0x3162e011
// declared property getter: - (id)name;	// 0x3162e071
// declared property getter: - (id)ocean;	// 0x3162e369
// declared property getter: - (id)postalCode;	// 0x3162e1f9
// declared property getter: - (id)region;	// 0x3162e031
// declared property getter: - (id)subAdministrativeArea;	// 0x3162e1c1
// declared property getter: - (id)subLocality;	// 0x3162e151
// declared property getter: - (id)subThoroughfare;	// 0x3162e0e1
// declared property getter: - (id)thoroughfare;	// 0x3162e0a9
@end

