/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOHours : PBCodable {
	XXStruct_WmZAAA _days;	// 4 = 0x4
	NSMutableArray *_timeRanges;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int *days;	// G=0x341d3a29; 
@property(readonly, assign, nonatomic) unsigned daysCount;	// G=0x341d3a15; 
@property(retain, nonatomic) NSMutableArray *timeRanges;	// G=0x341d448d; S=0x341d449d; @synthesize=_timeRanges
- (void)addDay:(int)day;	// 0x341d3a4d
- (void)addTimeRange:(id)range;	// 0x341d3b3d
- (void)clearDays;	// 0x341d3a39
- (void)clearTimeRanges;	// 0x341d3b1d
- (void)copyTo:(id)to;	// 0x341d42d5
- (int)dayAtIndex:(unsigned)index;	// 0x341d3a61
// declared property getter: - (int *)days;	// 0x341d3a29
// declared property getter: - (unsigned)daysCount;	// 0x341d3a15
- (void)dealloc;	// 0x341d39c1
- (id)description;	// 0x341d3be9
- (id)dictionaryRepresentation;	// 0x341d3c59
- (unsigned)hash;	// 0x341d4451
- (BOOL)isEqual:(id)equal;	// 0x341d43c1
- (BOOL)readFrom:(id)from;	// 0x341d413d
- (void)setDays:(int *)days count:(unsigned)count;	// 0x341d3b05
// declared property setter: - (void)setTimeRanges:(id)ranges;	// 0x341d449d
- (id)timeRangeAtIndex:(unsigned)index;	// 0x341d3bc9
// declared property getter: - (id)timeRanges;	// 0x341d448d
- (unsigned)timeRangesCount;	// 0x341d3ba9
- (void)writeTo:(id)to;	// 0x341d4149
@end

