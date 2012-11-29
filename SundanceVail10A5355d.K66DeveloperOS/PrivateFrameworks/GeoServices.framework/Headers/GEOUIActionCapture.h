/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOUIActionCapture : PBCodable {
	double _timestamp;	// 4 = 0x4
	int _actionType;	// 12 = 0xc
	XXStruct_UvnNeB _has;	// 16 = 0x10
}
@property(assign, nonatomic) int actionType;	// G=0x34584061; S=0x34583945; @synthesize=_actionType
@property(assign, nonatomic) BOOL hasActionType;	// G=0x3458398d; S=0x3458396d; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x345839f1; S=0x345839d5; 
@property(assign, nonatomic) double timestamp;	// G=0x34584071; S=0x345839a1; @synthesize=_timestamp
// declared property getter: - (int)actionType;	// 0x34584061
- (void)copyTo:(id)to;	// 0x34583e41
- (void)dealloc;	// 0x34583919
- (id)description;	// 0x34583a05
- (id)dictionaryRepresentation;	// 0x34583a75
// declared property getter: - (BOOL)hasActionType;	// 0x3458398d
// declared property getter: - (BOOL)hasTimestamp;	// 0x345839f1
- (unsigned)hash;	// 0x34583f89
- (BOOL)isEqual:(id)equal;	// 0x34583ecd
- (BOOL)readFrom:(id)from;	// 0x34583db9
// declared property setter: - (void)setActionType:(int)type;	// 0x34583945
// declared property setter: - (void)setHasActionType:(BOOL)type;	// 0x3458396d
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x345839d5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x345839a1
// declared property getter: - (double)timestamp;	// 0x34584071
- (void)writeTo:(id)to;	// 0x34583dc5
@end
