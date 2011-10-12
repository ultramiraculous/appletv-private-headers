/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOTileAvailabilityRequest : NSObject {
	GEOTileKey _tileKey;	// 4 = 0x4
	GEOLatLng *_gmmLatLng;	// 20 = 0x14
}
@property(retain, nonatomic) GEOLatLng *gmmLatLng;	// G=0x32c89e09; S=0x32c89e19; @synthesize=_gmmLatLng
@property(readonly, assign) unsigned short providerID;	// G=0x32c89db9; 
@property(assign, nonatomic) GEOTileKey tileKey;	// G=0x32c89dcd; S=0x32c89de9; @synthesize=_tileKey
- (void)dealloc;	// 0x32c89d6d
// declared property getter: - (id)gmmLatLng;	// 0x32c89e09
// declared property getter: - (unsigned short)providerID;	// 0x32c89db9
// declared property setter: - (void)setGmmLatLng:(id)lng;	// 0x32c89e19
// declared property setter: - (void)setTileKey:(GEOTileKey)key;	// 0x32c89de9
// declared property getter: - (GEOTileKey)tileKey;	// 0x32c89dcd
@end

