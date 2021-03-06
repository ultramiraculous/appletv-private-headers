/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOIndexQueryNode : PBCodable {
	NSString *_field;	// 4 = 0x4
	NSMutableArray *_operands;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *field;	// G=0x341abdd5; S=0x341abde5; @synthesize=_field
@property(readonly, assign, nonatomic) BOOL hasField;	// G=0x341ab315; 
@property(readonly, assign, nonatomic) BOOL hasValue;	// G=0x341ab32d; 
@property(retain, nonatomic) NSMutableArray *operands;	// G=0x341abe15; S=0x341abe25; @synthesize=_operands
@property(assign, nonatomic) int type;	// G=0x341abdb5; S=0x341abdc5; @synthesize=_type
@property(retain, nonatomic) NSString *value;	// G=0x341abdf5; S=0x341abe05; @synthesize=_value
- (void)addOperands:(id)operands;	// 0x341ab365
- (void)clearOperands;	// 0x341ab345
- (void)copyTo:(id)to;	// 0x341abb21
- (void)dealloc;	// 0x341ab2a9
- (id)description;	// 0x341ab411
- (id)dictionaryRepresentation;	// 0x341ab481
// declared property getter: - (id)field;	// 0x341abdd5
// declared property getter: - (BOOL)hasField;	// 0x341ab315
// declared property getter: - (BOOL)hasValue;	// 0x341ab32d
- (unsigned)hash;	// 0x341abd29
- (BOOL)isEqual:(id)equal;	// 0x341abc41
// declared property getter: - (id)operands;	// 0x341abe15
- (id)operandsAtIndex:(unsigned)index;	// 0x341ab3f1
- (unsigned)operandsCount;	// 0x341ab3d1
- (BOOL)readFrom:(id)from;	// 0x341ab965
// declared property setter: - (void)setField:(id)field;	// 0x341abde5
// declared property setter: - (void)setOperands:(id)operands;	// 0x341abe25
// declared property setter: - (void)setType:(int)type;	// 0x341abdc5
// declared property setter: - (void)setValue:(id)value;	// 0x341abe05
// declared property getter: - (int)type;	// 0x341abdb5
// declared property getter: - (id)value;	// 0x341abdf5
- (void)writeTo:(id)to;	// 0x341ab971
@end

