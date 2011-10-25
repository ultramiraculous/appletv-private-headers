/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOLocationResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_locations;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *locations;	// G=0x36709c0d; S=0x36709c1d; @synthesize=_locations
@property(assign, nonatomic) int status;	// G=0x36709bed; S=0x36709bfd; @synthesize=_status
- (void)addLocation:(id)location;	// 0x3670964d
- (void)dealloc;	// 0x36709609
- (id)description;	// 0x367096f1
- (id)dictionaryRepresentation;	// 0x36709761
- (id)locationAtIndex:(unsigned)index;	// 0x367096d1
// declared property getter: - (id)locations;	// 0x36709c0d
- (unsigned)locationsCount;	// 0x367096b1
- (BOOL)readFrom:(id)from;	// 0x36709915
// declared property setter: - (void)setLocations:(id)locations;	// 0x36709c1d
// declared property setter: - (void)setStatus:(int)status;	// 0x36709bfd
// declared property getter: - (int)status;	// 0x36709bed
- (void)writeTo:(id)to;	// 0x36709ab5
@end

