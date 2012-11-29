/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, GEOLatLng;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_bundleIdentifier;	// 12 = 0xc
	GEOLatLng *_destination;	// 16 = 0x10
	GEOLatLng *_source;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x339a3881; S=0x339a3891; @synthesize=_bundleIdentifier
@property(retain, nonatomic) GEOLatLng *destination;	// G=0x339a38c1; S=0x339a38d1; @synthesize=_destination
@property(retain, nonatomic) GEOLatLng *source;	// G=0x339a38a1; S=0x339a38b1; @synthesize=_source
@property(assign, nonatomic) double timestamp;	// G=0x339a38e1; S=0x339a38f9; @synthesize=_timestamp
// declared property getter: - (id)bundleIdentifier;	// 0x339a3881
- (void)copyTo:(id)to;	// 0x339a35e9
- (void)dealloc;	// 0x339a2fa1
- (id)description;	// 0x339a300d
// declared property getter: - (id)destination;	// 0x339a38c1
- (id)dictionaryRepresentation;	// 0x339a307d
- (unsigned)hash;	// 0x339a3789
- (BOOL)isEqual:(id)equal;	// 0x339a3691
- (BOOL)readFrom:(id)from;	// 0x339a3489
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x339a3891
// declared property setter: - (void)setDestination:(id)destination;	// 0x339a38d1
// declared property setter: - (void)setSource:(id)source;	// 0x339a38b1
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x339a38f9
// declared property getter: - (id)source;	// 0x339a38a1
// declared property getter: - (double)timestamp;	// 0x339a38e1
- (void)writeTo:(id)to;	// 0x339a3495
@end
