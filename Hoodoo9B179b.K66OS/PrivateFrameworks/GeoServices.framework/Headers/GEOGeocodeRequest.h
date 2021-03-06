/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOPlaceSearchRequest.h"
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
	unsigned short _provider;	// 140 = 0x8c
	NSString *_logRequestToFile;	// 144 = 0x90
	NSString *_logResponseToFile;	// 148 = 0x94
}
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x32d033d1; S=0x32d033e1; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x32d03405; S=0x32d03415; @synthesize=_logResponseToFile
@property(assign, nonatomic) unsigned short provider;	// G=0x32d033b1; S=0x32d033c1; @synthesize=_provider
- (id)init;	// 0x32d02b3d
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x32d02c75
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x32d02fb1
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x32d02ba1
- (void)dealloc;	// 0x32d030b1
- (unsigned)hash;	// 0x32d032a1
- (BOOL)isEqual:(id)equal;	// 0x32d03111
// declared property getter: - (id)logRequestToFile;	// 0x32d033d1
// declared property getter: - (id)logResponseToFile;	// 0x32d03405
// declared property getter: - (unsigned short)provider;	// 0x32d033b1
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x32d033e1
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x32d03415
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x32d033c1
@end

