/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLocation, NSMutableArray;

@interface GEODirectionsFeedbackCollection : PBCodable {
	double _endTimeStamp;	// 4 = 0x4
	double _startTimeStamp;	// 12 = 0xc
	NSMutableArray *_directionsFeedbacks;	// 20 = 0x14
	GEOLocation *_routeCancelledLocation;	// 24 = 0x18
	XXStruct_$8RKkA _has;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks;	// G=0x379b29a9; S=0x379b29b9; @synthesize=_directionsFeedbacks
@property(assign, nonatomic) double endTimeStamp;	// G=0x379b2a01; S=0x379b1cdd; @synthesize=_endTimeStamp
@property(assign, nonatomic) BOOL hasEndTimeStamp;	// G=0x379b1d2d; S=0x379b1d11; 
@property(readonly, assign, nonatomic) BOOL hasRouteCancelledLocation;	// G=0x379b1c5d; 
@property(assign, nonatomic) BOOL hasStartTimeStamp;	// G=0x379b1cc9; S=0x379b1ca9; 
@property(retain, nonatomic) GEOLocation *routeCancelledLocation;	// G=0x379b29c9; S=0x379b29d9; @synthesize=_routeCancelledLocation
@property(assign, nonatomic) double startTimeStamp;	// G=0x379b29e9; S=0x379b1c75; @synthesize=_startTimeStamp
- (void)addDirectionsFeedback:(id)feedback;	// 0x379b1bb1
- (void)clearDirectionsFeedbacks;	// 0x379b1b91
- (void)copyTo:(id)to;	// 0x379b25c9
- (void)dealloc;	// 0x379b1b39
- (id)description;	// 0x379b1d41
- (id)dictionaryRepresentation;	// 0x379b1db1
- (id)directionsFeedbackAtIndex:(unsigned)index;	// 0x379b1c3d
// declared property getter: - (id)directionsFeedbacks;	// 0x379b29a9
- (unsigned)directionsFeedbacksCount;	// 0x379b1c1d
// declared property getter: - (double)endTimeStamp;	// 0x379b2a01
// declared property getter: - (BOOL)hasEndTimeStamp;	// 0x379b1d2d
// declared property getter: - (BOOL)hasRouteCancelledLocation;	// 0x379b1c5d
// declared property getter: - (BOOL)hasStartTimeStamp;	// 0x379b1cc9
- (unsigned)hash;	// 0x379b2831
- (BOOL)isEqual:(id)equal;	// 0x379b270d
- (BOOL)readFrom:(id)from;	// 0x379b2379
// declared property getter: - (id)routeCancelledLocation;	// 0x379b29c9
// declared property setter: - (void)setDirectionsFeedbacks:(id)feedbacks;	// 0x379b29b9
// declared property setter: - (void)setEndTimeStamp:(double)stamp;	// 0x379b1cdd
// declared property setter: - (void)setHasEndTimeStamp:(BOOL)stamp;	// 0x379b1d11
// declared property setter: - (void)setHasStartTimeStamp:(BOOL)stamp;	// 0x379b1ca9
// declared property setter: - (void)setRouteCancelledLocation:(id)location;	// 0x379b29d9
// declared property setter: - (void)setStartTimeStamp:(double)stamp;	// 0x379b1c75
// declared property getter: - (double)startTimeStamp;	// 0x379b29e9
- (void)writeTo:(id)to;	// 0x379b2385
@end
