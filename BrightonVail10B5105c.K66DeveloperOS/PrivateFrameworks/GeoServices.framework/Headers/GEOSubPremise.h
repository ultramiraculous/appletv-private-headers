/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSubPremise : PBCodable {
	NSString *_name;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *name;	// G=0x339af82d; S=0x339af83d; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x339af80d; S=0x339af81d; @synthesize=_type
- (void)copyTo:(id)to;	// 0x339af6e5
- (void)dealloc;	// 0x339af33d
- (id)description;	// 0x339af381
- (id)dictionaryRepresentation;	// 0x339af3f1
- (unsigned)hash;	// 0x339af7c5
- (BOOL)isEqual:(id)equal;	// 0x339af73d
// declared property getter: - (id)name;	// 0x339af82d
- (BOOL)readFrom:(id)from;	// 0x339af689
// declared property setter: - (void)setName:(id)name;	// 0x339af83d
// declared property setter: - (void)setType:(int)type;	// 0x339af81d
// declared property getter: - (int)type;	// 0x339af80d
- (void)writeTo:(id)to;	// 0x339af695
@end
