/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOPlace, NSString;

@interface GEOTransitStop : PBCodable {
	GEOPlace *_place;	// 4 = 0x4
	BOOL _hasTimestamp;	// 8 = 0x8
	double _timestamp;	// 12 = 0xc
	BOOL _hasTimezoneOffset;	// 20 = 0x14
	int _timezoneOffset;	// 24 = 0x18
	BOOL _hasDepartureInterval;	// 28 = 0x1c
	int _departureInterval;	// 32 = 0x20
	NSString *_iconName;	// 36 = 0x24
	NSString *_transitCost;	// 40 = 0x28
	BOOL _hasAgentIndex;	// 44 = 0x2c
	int _agentIndex;	// 48 = 0x30
	NSString *_supplementalInstructions;	// 52 = 0x34
}
@property(assign, nonatomic) int agentIndex;	// G=0x328724d9; S=0x32871c21; @synthesize=_agentIndex
@property(assign, nonatomic) int departureInterval;	// G=0x32872441; S=0x32871bcd; @synthesize=_departureInterval
@property(assign, nonatomic) BOOL hasAgentIndex;	// G=0x328724b9; S=0x328724c9; @synthesize=_hasAgentIndex
@property(assign, nonatomic) BOOL hasDepartureInterval;	// G=0x32872421; S=0x32872431; @synthesize=_hasDepartureInterval
@property(readonly, assign, nonatomic) BOOL hasIconName;	// G=0x32871bf1; 
@property(readonly, assign, nonatomic) BOOL hasPlace;	// G=0x32871b65; 
@property(readonly, assign, nonatomic) BOOL hasSupplementalInstructions;	// G=0x32871c45; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x328723b9; S=0x328723c9; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasTimezoneOffset;	// G=0x328723f1; S=0x32872401; @synthesize=_hasTimezoneOffset
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x32871c09; 
@property(retain, nonatomic) NSString *iconName;	// G=0x32872451; S=0x32872461; @synthesize=_iconName
@property(retain, nonatomic) GEOPlace *place;	// G=0x32872385; S=0x32872395; @synthesize=_place
@property(retain, nonatomic) NSString *supplementalInstructions;	// G=0x328724e9; S=0x328724f9; @synthesize=_supplementalInstructions
@property(assign, nonatomic) double timestamp;	// G=0x328723d9; S=0x32871b7d; @synthesize=_timestamp
@property(assign, nonatomic) int timezoneOffset;	// G=0x32872411; S=0x32871ba9; @synthesize=_timezoneOffset
@property(retain, nonatomic) NSString *transitCost;	// G=0x32872485; S=0x32872495; @synthesize=_transitCost
// declared property getter: - (int)agentIndex;	// 0x328724d9
- (void)dealloc;	// 0x32871ae5
// declared property getter: - (int)departureInterval;	// 0x32872441
- (id)description;	// 0x32871c5d
- (id)dictionaryRepresentation;	// 0x32871ccd
// declared property getter: - (BOOL)hasAgentIndex;	// 0x328724b9
// declared property getter: - (BOOL)hasDepartureInterval;	// 0x32872421
// declared property getter: - (BOOL)hasIconName;	// 0x32871bf1
// declared property getter: - (BOOL)hasPlace;	// 0x32871b65
// declared property getter: - (BOOL)hasSupplementalInstructions;	// 0x32871c45
// declared property getter: - (BOOL)hasTimestamp;	// 0x328723b9
// declared property getter: - (BOOL)hasTimezoneOffset;	// 0x328723f1
// declared property getter: - (BOOL)hasTransitCost;	// 0x32871c09
// declared property getter: - (id)iconName;	// 0x32872451
// declared property getter: - (id)place;	// 0x32872385
- (BOOL)readFrom:(id)from;	// 0x32871f21
// declared property setter: - (void)setAgentIndex:(int)index;	// 0x32871c21
// declared property setter: - (void)setDepartureInterval:(int)interval;	// 0x32871bcd
// declared property setter: - (void)setHasAgentIndex:(BOOL)index;	// 0x328724c9
// declared property setter: - (void)setHasDepartureInterval:(BOOL)interval;	// 0x32872431
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x328723c9
// declared property setter: - (void)setHasTimezoneOffset:(BOOL)offset;	// 0x32872401
// declared property setter: - (void)setIconName:(id)name;	// 0x32872461
// declared property setter: - (void)setPlace:(id)place;	// 0x32872395
// declared property setter: - (void)setSupplementalInstructions:(id)instructions;	// 0x328724f9
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x32871b7d
// declared property setter: - (void)setTimezoneOffset:(int)offset;	// 0x32871ba9
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x32872495
// declared property getter: - (id)supplementalInstructions;	// 0x328724e9
// declared property getter: - (double)timestamp;	// 0x328723d9
// declared property getter: - (int)timezoneOffset;	// 0x32872411
// declared property getter: - (id)transitCost;	// 0x32872485
- (void)writeTo:(id)to;	// 0x3287219d
@end

