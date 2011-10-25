/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray, GMMDateTime, NSString, GMMDirectionsIconResponse;

__attribute__((visibility("hidden")))
@interface GMMDirectionsResponse : PBCodable {
	int _status;	// 4 = 0x4
	XXStruct_WmZAAA _modes;	// 8 = 0x8
	GMMDateTime *_requestedDateTime;	// 20 = 0x14
	BOOL _hasRequestedTimeType;	// 24 = 0x18
	int _requestedTimeType;	// 28 = 0x1c
	NSMutableArray *_waypointFeedbacks;	// 32 = 0x20
	NSMutableArray *_trips;	// 36 = 0x24
	GMMDirectionsIconResponse *_icons;	// 40 = 0x28
	NSString *_notice;	// 44 = 0x2c
	NSMutableArray *_agencys;	// 48 = 0x30
	BOOL _hasRecommendedDistanceUnits;	// 52 = 0x34
	int _recommendedDistanceUnits;	// 56 = 0x38
	NSMutableArray *_optionsUseds;	// 60 = 0x3c
	NSMutableArray *_alerts;	// 64 = 0x40
	NSMutableArray *_alternateModes;	// 68 = 0x44
}
@property(retain, nonatomic) NSMutableArray *agencys;	// G=0x338525c5; S=0x338525d5; @synthesize=_agencys
@property(retain, nonatomic) NSMutableArray *alerts;	// G=0x3385264d; S=0x3385265d; @synthesize=_alerts
@property(retain, nonatomic) NSMutableArray *alternateModes;	// G=0x33852681; S=0x33852691; @synthesize=_alternateModes
@property(readonly, assign, nonatomic) BOOL hasIcons;	// G=0x33851155; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x3385116d; 
@property(assign, nonatomic) BOOL hasRecommendedDistanceUnits;	// G=0x338525f9; S=0x33852609; @synthesize=_hasRecommendedDistanceUnits
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x33850fd1; 
@property(assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x338524c5; S=0x338524d5; @synthesize=_hasRequestedTimeType
@property(retain, nonatomic) GMMDirectionsIconResponse *icons;	// G=0x3385255d; S=0x3385256d; @synthesize=_icons
@property(readonly, assign, nonatomic) int *modes;	// G=0x33850edd; 
@property(readonly, assign, nonatomic) unsigned modesCount;	// G=0x33850ec9; 
@property(retain, nonatomic) NSString *notice;	// G=0x33852591; S=0x338525a1; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *optionsUseds;	// G=0x33852619; S=0x33852629; @synthesize=_optionsUseds
@property(assign, nonatomic) int recommendedDistanceUnits;	// G=0x33851229; S=0x3385124d; @synthesize=_recommendedDistanceUnits
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x33852491; S=0x338524a1; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedTimeType;	// G=0x338524e5; S=0x33850fe9; @synthesize=_requestedTimeType
@property(assign, nonatomic) int status;	// G=0x33852471; S=0x33852481; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *trips;	// G=0x33852529; S=0x33852539; @synthesize=_trips
@property(retain, nonatomic) NSMutableArray *waypointFeedbacks;	// G=0x338524f5; S=0x33852505; @synthesize=_waypointFeedbacks
- (void)addAgency:(id)agency;	// 0x33851185
- (void)addAlert:(id)alert;	// 0x33851315
- (void)addAlternateMode:(id)mode;	// 0x338513b9
- (void)addMode:(int)mode;	// 0x33850f01
- (void)addOptionsUsed:(id)used;	// 0x33851271
- (void)addTrip:(id)trip;	// 0x338510b1
- (void)addWaypointFeedback:(id)feedback;	// 0x3385100d
- (id)agencyAtIndex:(unsigned)index;	// 0x33851209
// declared property getter: - (id)agencys;	// 0x338525c5
- (unsigned)agencysCount;	// 0x338511e9
- (id)alertAtIndex:(unsigned)index;	// 0x33851399
// declared property getter: - (id)alerts;	// 0x3385264d
- (unsigned)alertsCount;	// 0x33851379
- (id)alternateModeAtIndex:(unsigned)index;	// 0x3385143d
// declared property getter: - (id)alternateModes;	// 0x33852681
- (unsigned)alternateModesCount;	// 0x3385141d
- (void)clearModes;	// 0x33850eed
- (void)dealloc;	// 0x33850dd5
- (id)description;	// 0x3385145d
- (id)dictionaryRepresentation;	// 0x338514cd
// declared property getter: - (BOOL)hasIcons;	// 0x33851155
// declared property getter: - (BOOL)hasNotice;	// 0x3385116d
// declared property getter: - (BOOL)hasRecommendedDistanceUnits;	// 0x338525f9
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x33850fd1
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x338524c5
// declared property getter: - (id)icons;	// 0x3385255d
- (int)modeAtIndex:(unsigned)index;	// 0x33850f15
// declared property getter: - (int *)modes;	// 0x33850edd
// declared property getter: - (unsigned)modesCount;	// 0x33850ec9
// declared property getter: - (id)notice;	// 0x33852591
- (id)optionsUsedAtIndex:(unsigned)index;	// 0x338512f5
// declared property getter: - (id)optionsUseds;	// 0x33852619
- (unsigned)optionsUsedsCount;	// 0x338512d5
- (BOOL)readFrom:(id)from;	// 0x3385171d
// declared property getter: - (int)recommendedDistanceUnits;	// 0x33851229
// declared property getter: - (id)requestedDateTime;	// 0x33852491
// declared property getter: - (int)requestedTimeType;	// 0x338524e5
// declared property setter: - (void)setAgencys:(id)agencys;	// 0x338525d5
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x3385265d
// declared property setter: - (void)setAlternateModes:(id)modes;	// 0x33852691
// declared property setter: - (void)setHasRecommendedDistanceUnits:(BOOL)units;	// 0x33852609
// declared property setter: - (void)setHasRequestedTimeType:(BOOL)type;	// 0x338524d5
// declared property setter: - (void)setIcons:(id)icons;	// 0x3385256d
- (void)setModes:(int *)modes count:(unsigned)count;	// 0x33850fb9
// declared property setter: - (void)setNotice:(id)notice;	// 0x338525a1
// declared property setter: - (void)setOptionsUseds:(id)useds;	// 0x33852629
// declared property setter: - (void)setRecommendedDistanceUnits:(int)units;	// 0x3385124d
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x338524a1
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x33850fe9
// declared property setter: - (void)setStatus:(int)status;	// 0x33852481
// declared property setter: - (void)setTrips:(id)trips;	// 0x33852539
// declared property setter: - (void)setWaypointFeedbacks:(id)feedbacks;	// 0x33852505
// declared property getter: - (int)status;	// 0x33852471
- (id)tripAtIndex:(unsigned)index;	// 0x33851135
// declared property getter: - (id)trips;	// 0x33852529
- (unsigned)tripsCount;	// 0x33851115
- (id)waypointFeedbackAtIndex:(unsigned)index;	// 0x33851091
// declared property getter: - (id)waypointFeedbacks;	// 0x338524f5
- (unsigned)waypointFeedbacksCount;	// 0x33851071
- (void)writeTo:(id)to;	// 0x33851d11
@end

