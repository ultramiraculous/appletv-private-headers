/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsEntity.h"

@class NSString, NSArray, NSNumber;

@interface SASportsTeam : SASportsEntity {
}
@property(copy, nonatomic) NSArray *athletes;	// G=0x32f62e25; S=0x32f62ea1; 
@property(copy, nonatomic) NSString *awayLosses;	// G=0x32f62f09; S=0x32f62f25; 
@property(copy, nonatomic) NSString *awayWins;	// G=0x32f62f75; S=0x32f62f91; 
@property(retain, nonatomic) NSNumber *clinchedQualificationPosition;	// G=0x32f62fe1; S=0x32f62ffd; 
@property(retain, nonatomic) NSNumber *conferencePosition;	// G=0x32f63019; S=0x32f63035; 
@property(copy, nonatomic) NSString *gamesBehind;	// G=0x32f63051; S=0x32f6306d; 
@property(copy, nonatomic) NSString *groupName;	// G=0x32f630bd; S=0x32f630d9; 
@property(retain, nonatomic) NSNumber *groupPosition;	// G=0x32f63129; S=0x32f63145; 
@property(copy, nonatomic) NSString *groupPositionDescription;	// G=0x32f63161; S=0x32f6317d; 
@property(copy, nonatomic) NSString *homeLosses;	// G=0x32f631cd; S=0x32f631e9; 
@property(copy, nonatomic) NSString *homeWins;	// G=0x32f63239; S=0x32f63255; 
@property(copy, nonatomic) NSString *location;	// G=0x32f632a5; S=0x32f632c1; 
@property(copy, nonatomic) NSString *losses;	// G=0x32f63311; S=0x32f6332d; 
@property(copy, nonatomic) NSArray *news;	// G=0x32f6337d; S=0x32f633f9; 
@property(copy, nonatomic) NSString *overtimeLosses;	// G=0x32f63461; S=0x32f6347d; 
@property(copy, nonatomic) NSString *points;	// G=0x32f634cd; S=0x32f634e9; 
@property(copy, nonatomic) NSString *pointsAgainst;	// G=0x32f63539; S=0x32f63555; 
@property(copy, nonatomic) NSString *pointsFor;	// G=0x32f635a5; S=0x32f635c1; 
@property(retain, nonatomic) NSNumber *primaryColor;	// G=0x32f63611; S=0x32f6362d; 
@property(copy, nonatomic) NSString *qualificationPosition;	// G=0x32f63649; S=0x32f63665; 
@property(copy, nonatomic) NSArray *rankings;	// G=0x32f636b5; S=0x32f63731; 
@property(retain, nonatomic) NSNumber *secondaryColor;	// G=0x32f63799; S=0x32f637b5; 
@property(copy, nonatomic) NSArray *statistics;	// G=0x32f637d1; S=0x32f6384d; 
@property(copy, nonatomic) NSString *streakNumber;	// G=0x32f638b5; S=0x32f638d1; 
@property(copy, nonatomic) NSString *streakType;	// G=0x32f63921; S=0x32f6393d; 
@property(copy, nonatomic) NSString *ties;	// G=0x32f6398d; S=0x32f639a9; 
@property(copy, nonatomic) NSString *venueLocation;	// G=0x32f639f9; S=0x32f63a15; 
@property(copy, nonatomic) NSString *venueName;	// G=0x32f63a65; S=0x32f63a81; 
@property(copy, nonatomic) NSString *winPercentage;	// G=0x32f63ad1; S=0x32f63aed; 
@property(copy, nonatomic) NSString *wins;	// G=0x32f63b3d; S=0x32f63b59; 
+ (id)team;	// 0x32f62d95
+ (id)teamWithDictionary:(id)dictionary context:(id)context;	// 0x32f62dd9
// declared property getter: - (id)athletes;	// 0x32f62e25
// declared property getter: - (id)awayLosses;	// 0x32f62f09
// declared property getter: - (id)awayWins;	// 0x32f62f75
// declared property getter: - (id)clinchedQualificationPosition;	// 0x32f62fe1
// declared property getter: - (id)conferencePosition;	// 0x32f63019
- (id)encodedClassName;	// 0x32f62d89
// declared property getter: - (id)gamesBehind;	// 0x32f63051
- (id)groupIdentifier;	// 0x32f62d79
// declared property getter: - (id)groupName;	// 0x32f630bd
// declared property getter: - (id)groupPosition;	// 0x32f63129
// declared property getter: - (id)groupPositionDescription;	// 0x32f63161
// declared property getter: - (id)homeLosses;	// 0x32f631cd
// declared property getter: - (id)homeWins;	// 0x32f63239
// declared property getter: - (id)location;	// 0x32f632a5
// declared property getter: - (id)losses;	// 0x32f63311
// declared property getter: - (id)news;	// 0x32f6337d
// declared property getter: - (id)overtimeLosses;	// 0x32f63461
// declared property getter: - (id)points;	// 0x32f634cd
// declared property getter: - (id)pointsAgainst;	// 0x32f63539
// declared property getter: - (id)pointsFor;	// 0x32f635a5
// declared property getter: - (id)primaryColor;	// 0x32f63611
// declared property getter: - (id)qualificationPosition;	// 0x32f63649
// declared property getter: - (id)rankings;	// 0x32f636b5
// declared property getter: - (id)secondaryColor;	// 0x32f63799
// declared property setter: - (void)setAthletes:(id)athletes;	// 0x32f62ea1
// declared property setter: - (void)setAwayLosses:(id)losses;	// 0x32f62f25
// declared property setter: - (void)setAwayWins:(id)wins;	// 0x32f62f91
// declared property setter: - (void)setClinchedQualificationPosition:(id)position;	// 0x32f62ffd
// declared property setter: - (void)setConferencePosition:(id)position;	// 0x32f63035
// declared property setter: - (void)setGamesBehind:(id)behind;	// 0x32f6306d
// declared property setter: - (void)setGroupName:(id)name;	// 0x32f630d9
// declared property setter: - (void)setGroupPosition:(id)position;	// 0x32f63145
// declared property setter: - (void)setGroupPositionDescription:(id)description;	// 0x32f6317d
// declared property setter: - (void)setHomeLosses:(id)losses;	// 0x32f631e9
// declared property setter: - (void)setHomeWins:(id)wins;	// 0x32f63255
// declared property setter: - (void)setLocation:(id)location;	// 0x32f632c1
// declared property setter: - (void)setLosses:(id)losses;	// 0x32f6332d
// declared property setter: - (void)setNews:(id)news;	// 0x32f633f9
// declared property setter: - (void)setOvertimeLosses:(id)losses;	// 0x32f6347d
// declared property setter: - (void)setPoints:(id)points;	// 0x32f634e9
// declared property setter: - (void)setPointsAgainst:(id)against;	// 0x32f63555
// declared property setter: - (void)setPointsFor:(id)aFor;	// 0x32f635c1
// declared property setter: - (void)setPrimaryColor:(id)color;	// 0x32f6362d
// declared property setter: - (void)setQualificationPosition:(id)position;	// 0x32f63665
// declared property setter: - (void)setRankings:(id)rankings;	// 0x32f63731
// declared property setter: - (void)setSecondaryColor:(id)color;	// 0x32f637b5
// declared property setter: - (void)setStatistics:(id)statistics;	// 0x32f6384d
// declared property setter: - (void)setStreakNumber:(id)number;	// 0x32f638d1
// declared property setter: - (void)setStreakType:(id)type;	// 0x32f6393d
// declared property setter: - (void)setTies:(id)ties;	// 0x32f639a9
// declared property setter: - (void)setVenueLocation:(id)location;	// 0x32f63a15
// declared property setter: - (void)setVenueName:(id)name;	// 0x32f63a81
// declared property setter: - (void)setWinPercentage:(id)percentage;	// 0x32f63aed
// declared property setter: - (void)setWins:(id)wins;	// 0x32f63b59
// declared property getter: - (id)statistics;	// 0x32f637d1
// declared property getter: - (id)streakNumber;	// 0x32f638b5
// declared property getter: - (id)streakType;	// 0x32f63921
// declared property getter: - (id)ties;	// 0x32f6398d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f63ba9
// declared property getter: - (id)venueLocation;	// 0x32f639f9
// declared property getter: - (id)venueName;	// 0x32f63a65
// declared property getter: - (id)winPercentage;	// 0x32f63ad1
// declared property getter: - (id)wins;	// 0x32f63b3d
@end

