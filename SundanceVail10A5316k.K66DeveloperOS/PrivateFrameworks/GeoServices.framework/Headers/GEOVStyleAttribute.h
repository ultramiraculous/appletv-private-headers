/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOVStyleAttribute : PBCodable {
@private
	int _intValue;	// 4 = 0x4
	unsigned _key;	// 8 = 0x8
	XXStruct_ec15KC _has;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasIntValue;	// G=0x34b71071; S=0x34b71055; 
@property(assign, nonatomic) int intValue;	// G=0x34b71619; S=0x34b7102d; @synthesize=_intValue
@property(assign, nonatomic) unsigned key;	// G=0x34b715f9; S=0x34b71609; @synthesize=_key
- (void)copyTo:(id)to;	// 0x34b714a1
- (void)dealloc;	// 0x34b71001
- (id)description;	// 0x34b71085
- (id)dictionaryRepresentation;	// 0x34b710f5
// declared property getter: - (BOOL)hasIntValue;	// 0x34b71071
- (unsigned)hash;	// 0x34b715a1
// declared property getter: - (int)intValue;	// 0x34b71619
- (BOOL)isEqual:(id)equal;	// 0x34b71515
// declared property getter: - (unsigned)key;	// 0x34b715f9
- (BOOL)readFrom:(id)from;	// 0x34b7142d
// declared property setter: - (void)setHasIntValue:(BOOL)value;	// 0x34b71055
// declared property setter: - (void)setIntValue:(int)value;	// 0x34b7102d
// declared property setter: - (void)setKey:(unsigned)key;	// 0x34b71609
- (void)writeTo:(id)to;	// 0x34b71439
@end

