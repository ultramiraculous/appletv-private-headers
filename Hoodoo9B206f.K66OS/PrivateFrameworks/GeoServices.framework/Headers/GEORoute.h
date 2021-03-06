/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable {
	int _type;	// 4 = 0x4
	NSData *_latLngVertices;	// 8 = 0x8
	XXStruct_19EQxD _streetSegmentIDs;	// 12 = 0xc
	NSMutableArray *_steps;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	NSString *_phoneticName;	// 32 = 0x20
	NSString *_transitCost;	// 36 = 0x24
	BOOL _hasDepartureTimestamp;	// 40 = 0x28
	double _departureTimestamp;	// 44 = 0x2c
	BOOL _hasDepartureTimezoneOffset;	// 52 = 0x34
	int _departureTimezoneOffset;	// 56 = 0x38
	BOOL _hasArrivalTimestamp;	// 60 = 0x3c
	double _arrivalTimestamp;	// 64 = 0x40
	BOOL _hasArrivalTimezoneOffset;	// 72 = 0x48
	int _arrivalTimezoneOffset;	// 76 = 0x4c
	BOOL _hasDistance;	// 80 = 0x50
	int _distance;	// 84 = 0x54
	BOOL _hasExpectedTime;	// 88 = 0x58
	int _expectedTime;	// 92 = 0x5c
	BOOL _hasDelayTime;	// 96 = 0x60
	int _delayTime;	// 100 = 0x64
	NSData *_unpackedLatLngVertices;	// 104 = 0x68
}
@property(assign, nonatomic) double arrivalTimestamp;	// G=0x32870f5d; S=0x32870011; @synthesize=_arrivalTimestamp
@property(assign, nonatomic) int arrivalTimezoneOffset;	// G=0x32870f95; S=0x3287003d; @synthesize=_arrivalTimezoneOffset
@property(readonly, assign, getter=isComplete) BOOL complete;	// G=0x328777ed; 
@property(assign, nonatomic) int delayTime;	// G=0x32871025; S=0x328700a9; @synthesize=_delayTime
@property(assign, nonatomic) double departureTimestamp;	// G=0x32870ef5; S=0x3286ffc1; @synthesize=_departureTimestamp
@property(assign, nonatomic) int departureTimezoneOffset;	// G=0x32870f2d; S=0x3286ffed; @synthesize=_departureTimezoneOffset
@property(assign, nonatomic) int distance;	// G=0x32870fc5; S=0x32870061; @synthesize=_distance
@property(assign, nonatomic) int expectedTime;	// G=0x32870ff5; S=0x32870085; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasArrivalTimestamp;	// G=0x32870f3d; S=0x32870f4d; @synthesize=_hasArrivalTimestamp
@property(assign, nonatomic) BOOL hasArrivalTimezoneOffset;	// G=0x32870f75; S=0x32870f85; @synthesize=_hasArrivalTimezoneOffset
@property(assign, nonatomic) BOOL hasDelayTime;	// G=0x32871005; S=0x32871015; @synthesize=_hasDelayTime
@property(assign, nonatomic) BOOL hasDepartureTimestamp;	// G=0x32870ed5; S=0x32870ee5; @synthesize=_hasDepartureTimestamp
@property(assign, nonatomic) BOOL hasDepartureTimezoneOffset;	// G=0x32870f0d; S=0x32870f1d; @synthesize=_hasDepartureTimezoneOffset
@property(assign, nonatomic) BOOL hasDistance;	// G=0x32870fa5; S=0x32870fb5; @synthesize=_hasDistance
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x32870fd5; S=0x32870fe5; @synthesize=_hasExpectedTime
@property(readonly, assign, nonatomic) BOOL hasLatLngVertices;	// G=0x3286fdad; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x3286ff79; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x3286ff91; 
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x3286ffa9; 
@property(readonly, assign, nonatomic) BOOL hasUnpackedLatLngVertices;	// G=0x328700cd; 
@property(retain, nonatomic) NSData *latLngVertices;	// G=0x32870dd1; S=0x32870de1; @synthesize=_latLngVertices
@property(retain, nonatomic) NSString *name;	// G=0x32870e39; S=0x32870e49; @synthesize=_name
@property(retain, nonatomic) NSString *phoneticName;	// G=0x32870e6d; S=0x32870e7d; @synthesize=_phoneticName
@property(readonly, assign) unsigned pointCount;	// G=0x328777c5; 
@property(readonly, assign) XXStruct_zYrK5D *points;	// G=0x328777a5; 
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x32870e05; S=0x32870e15; @synthesize=_steps
@property(readonly, assign, nonatomic) long long *streetSegmentIDs;	// G=0x3286fdd9; 
@property(readonly, assign, nonatomic) unsigned streetSegmentIDsCount;	// G=0x3286fdc5; 
@property(retain, nonatomic) NSString *transitCost;	// G=0x32870ea1; S=0x32870eb1; @synthesize=_transitCost
@property(assign, nonatomic) int type;	// G=0x32870db1; S=0x32870dc1; @synthesize=_type
@property(retain, nonatomic) NSData *unpackedLatLngVertices;	// G=0x32871035; S=0x32871045; @synthesize=_unpackedLatLngVertices
- (void)addStep:(id)step;	// 0x3286fed5
- (void)addStreetSegmentID:(long long)anId;	// 0x3286fdfd
// declared property getter: - (double)arrivalTimestamp;	// 0x32870f5d
// declared property getter: - (int)arrivalTimezoneOffset;	// 0x32870f95
- (void)clearStreetSegmentIDs;	// 0x3286fde9
- (void)dealloc;	// 0x3286fcf5
- (id)debugDescription;	// 0x32877ba9
// declared property getter: - (int)delayTime;	// 0x32871025
// declared property getter: - (double)departureTimestamp;	// 0x32870ef5
// declared property getter: - (int)departureTimezoneOffset;	// 0x32870f2d
- (id)description;	// 0x328700e5
- (id)description;	// 0x32877b39
- (id)dictionaryRepresentation;	// 0x32870155
// declared property getter: - (int)distance;	// 0x32870fc5
- (void)ensureDataAlignment;	// 0x32877a65
// declared property getter: - (int)expectedTime;	// 0x32870ff5
// declared property getter: - (BOOL)hasArrivalTimestamp;	// 0x32870f3d
// declared property getter: - (BOOL)hasArrivalTimezoneOffset;	// 0x32870f75
// declared property getter: - (BOOL)hasDelayTime;	// 0x32871005
// declared property getter: - (BOOL)hasDepartureTimestamp;	// 0x32870ed5
// declared property getter: - (BOOL)hasDepartureTimezoneOffset;	// 0x32870f0d
// declared property getter: - (BOOL)hasDistance;	// 0x32870fa5
// declared property getter: - (BOOL)hasExpectedTime;	// 0x32870fd5
// declared property getter: - (BOOL)hasLatLngVertices;	// 0x3286fdad
// declared property getter: - (BOOL)hasName;	// 0x3286ff79
// declared property getter: - (BOOL)hasPhoneticName;	// 0x3286ff91
// declared property getter: - (BOOL)hasTransitCost;	// 0x3286ffa9
// declared property getter: - (BOOL)hasUnpackedLatLngVertices;	// 0x328700cd
// declared property getter: - (BOOL)isComplete;	// 0x328777ed
// declared property getter: - (id)latLngVertices;	// 0x32870dd1
// declared property getter: - (id)name;	// 0x32870e39
// declared property getter: - (id)phoneticName;	// 0x32870e6d
// declared property getter: - (unsigned)pointCount;	// 0x328777c5
// declared property getter: - (XXStruct_zYrK5D *)points;	// 0x328777a5
- (BOOL)readFrom:(id)from;	// 0x328705f5
// declared property setter: - (void)setArrivalTimestamp:(double)timestamp;	// 0x32870011
// declared property setter: - (void)setArrivalTimezoneOffset:(int)offset;	// 0x3287003d
// declared property setter: - (void)setDelayTime:(int)time;	// 0x328700a9
// declared property setter: - (void)setDepartureTimestamp:(double)timestamp;	// 0x3286ffc1
// declared property setter: - (void)setDepartureTimezoneOffset:(int)offset;	// 0x3286ffed
// declared property setter: - (void)setDistance:(int)distance;	// 0x32870061
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x32870085
// declared property setter: - (void)setHasArrivalTimestamp:(BOOL)timestamp;	// 0x32870f4d
// declared property setter: - (void)setHasArrivalTimezoneOffset:(BOOL)offset;	// 0x32870f85
// declared property setter: - (void)setHasDelayTime:(BOOL)time;	// 0x32871015
// declared property setter: - (void)setHasDepartureTimestamp:(BOOL)timestamp;	// 0x32870ee5
// declared property setter: - (void)setHasDepartureTimezoneOffset:(BOOL)offset;	// 0x32870f1d
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x32870fb5
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x32870fe5
// declared property setter: - (void)setLatLngVertices:(id)vertices;	// 0x32870de1
// declared property setter: - (void)setName:(id)name;	// 0x32870e49
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x32870e7d
// declared property setter: - (void)setSteps:(id)steps;	// 0x32870e15
- (void)setStreetSegmentIDs:(long long *)ids count:(unsigned)count;	// 0x3286febd
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x32870eb1
// declared property setter: - (void)setType:(int)type;	// 0x32870dc1
// declared property setter: - (void)setUnpackedLatLngVertices:(id)vertices;	// 0x32871045
- (id)stepAtIndex:(unsigned)index;	// 0x3286ff59
// declared property getter: - (id)steps;	// 0x32870e05
- (unsigned)stepsCount;	// 0x3286ff39
- (long long)streetSegmentIDAtIndex:(unsigned)index;	// 0x3286fe15
// declared property getter: - (long long *)streetSegmentIDs;	// 0x3286fdd9
// declared property getter: - (unsigned)streetSegmentIDsCount;	// 0x3286fdc5
// declared property getter: - (id)transitCost;	// 0x32870ea1
// declared property getter: - (int)type;	// 0x32870db1
- (void)unpackLatLngVertices;	// 0x3287781d
// declared property getter: - (id)unpackedLatLngVertices;	// 0x32871035
- (void)writeTo:(id)to;	// 0x32870a05
@end

