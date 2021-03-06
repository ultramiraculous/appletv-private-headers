/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSArray, NSDate, SAUIAppPunchOut, NSNumber, SASportsEntity, NSString;

@interface SASportsMatchup : SADomainObject {
}
@property(retain, nonatomic) SASportsEntity *awayEntity;	// G=0x326ccbd9; S=0x326ccc1d; 
@property(copy, nonatomic) NSArray *awayLineScores;	// G=0x326ccc59; S=0x326cccc1; 
@property(copy, nonatomic) NSString *awayScore;	// G=0x326ccd29; S=0x326ccd45; 
@property(copy, nonatomic) NSNumber *awayShootoutPoints;	// G=0x326ccd95; S=0x326ccdb1; 
@property(copy, nonatomic) NSString *currentPeriod;	// G=0x326cce01; S=0x326cce1d; 
@property(copy, nonatomic) NSNumber *expectedLineScoreCount;	// G=0x326cce6d; S=0x326cce89; 
@property(copy, nonatomic) NSString *favoredEntity;	// G=0x326cced9; S=0x326ccef5; 
@property(retain, nonatomic) SASportsEntity *homeEntity;	// G=0x326ccf45; S=0x326ccf89; 
@property(copy, nonatomic) NSArray *homeLineScores;	// G=0x326ccfc5; S=0x326cd02d; 
@property(copy, nonatomic) NSString *homeScore;	// G=0x326cd095; S=0x326cd0b1; 
@property(copy, nonatomic) NSNumber *homeShootoutPoints;	// G=0x326cd101; S=0x326cd11d; 
@property(copy, nonatomic) NSString *line;	// G=0x326cd16d; S=0x326cd189; 
@property(copy, nonatomic) NSString *location;	// G=0x326cd1d9; S=0x326cd1f5; 
@property(copy, nonatomic) NSString *locationName;	// G=0x326cd245; S=0x326cd261; 
@property(copy, nonatomic) NSString *matchupOrder;	// G=0x326cd2b1; S=0x326cd2cd; 
@property(copy, nonatomic) NSString *overUnder;	// G=0x326cd31d; S=0x326cd339; 
@property(copy, nonatomic) NSString *periodDescription;	// G=0x326cd389; S=0x326cd3a5; 
@property(copy, nonatomic) NSArray *playSummaries;	// G=0x326cd3f5; S=0x326cd45d; 
@property(retain, nonatomic) SAUIAppPunchOut *punchout;	// G=0x326cd4c5; S=0x326cd509; 
@property(copy, nonatomic) NSDate *startTime;	// G=0x326cd545; S=0x326cd561; 
@property(copy, nonatomic) NSString *status;	// G=0x326cd5b1; S=0x326cd5cd; 
@property(copy, nonatomic) NSString *timeRemaining;	// G=0x326cd61d; S=0x326cd639; 
@property(copy, nonatomic) NSNumber *timeTBD;	// G=0x326cd689; S=0x326cd6a5; 
@property(copy, nonatomic) NSString *title;	// G=0x326cd6f5; S=0x326cd711; 
@property(copy, nonatomic) NSString *tournamentSeriesDescription;	// G=0x326cd761; S=0x326cd77d; 
@property(copy, nonatomic) NSArray *tvChannels;	// G=0x326cd7cd; S=0x326cd7e9; 
@property(copy, nonatomic) NSString *winningEntity;	// G=0x326cd839; S=0x326cd855; 
+ (id)matchup;	// 0x326ccb49
+ (id)matchupWithDictionary:(id)dictionary context:(id)context;	// 0x326ccb8d
// declared property getter: - (id)awayEntity;	// 0x326ccbd9
// declared property getter: - (id)awayLineScores;	// 0x326ccc59
// declared property getter: - (id)awayScore;	// 0x326ccd29
// declared property getter: - (id)awayShootoutPoints;	// 0x326ccd95
// declared property getter: - (id)currentPeriod;	// 0x326cce01
- (id)encodedClassName;	// 0x326ccb3d
// declared property getter: - (id)expectedLineScoreCount;	// 0x326cce6d
// declared property getter: - (id)favoredEntity;	// 0x326cced9
- (id)groupIdentifier;	// 0x326ccb2d
// declared property getter: - (id)homeEntity;	// 0x326ccf45
// declared property getter: - (id)homeLineScores;	// 0x326ccfc5
// declared property getter: - (id)homeScore;	// 0x326cd095
// declared property getter: - (id)homeShootoutPoints;	// 0x326cd101
// declared property getter: - (id)line;	// 0x326cd16d
// declared property getter: - (id)location;	// 0x326cd1d9
// declared property getter: - (id)locationName;	// 0x326cd245
// declared property getter: - (id)matchupOrder;	// 0x326cd2b1
// declared property getter: - (id)overUnder;	// 0x326cd31d
// declared property getter: - (id)periodDescription;	// 0x326cd389
// declared property getter: - (id)playSummaries;	// 0x326cd3f5
// declared property getter: - (id)punchout;	// 0x326cd4c5
// declared property setter: - (void)setAwayEntity:(id)entity;	// 0x326ccc1d
// declared property setter: - (void)setAwayLineScores:(id)scores;	// 0x326cccc1
// declared property setter: - (void)setAwayScore:(id)score;	// 0x326ccd45
// declared property setter: - (void)setAwayShootoutPoints:(id)points;	// 0x326ccdb1
// declared property setter: - (void)setCurrentPeriod:(id)period;	// 0x326cce1d
// declared property setter: - (void)setExpectedLineScoreCount:(id)count;	// 0x326cce89
// declared property setter: - (void)setFavoredEntity:(id)entity;	// 0x326ccef5
// declared property setter: - (void)setHomeEntity:(id)entity;	// 0x326ccf89
// declared property setter: - (void)setHomeLineScores:(id)scores;	// 0x326cd02d
// declared property setter: - (void)setHomeScore:(id)score;	// 0x326cd0b1
// declared property setter: - (void)setHomeShootoutPoints:(id)points;	// 0x326cd11d
// declared property setter: - (void)setLine:(id)line;	// 0x326cd189
// declared property setter: - (void)setLocation:(id)location;	// 0x326cd1f5
// declared property setter: - (void)setLocationName:(id)name;	// 0x326cd261
// declared property setter: - (void)setMatchupOrder:(id)order;	// 0x326cd2cd
// declared property setter: - (void)setOverUnder:(id)under;	// 0x326cd339
// declared property setter: - (void)setPeriodDescription:(id)description;	// 0x326cd3a5
// declared property setter: - (void)setPlaySummaries:(id)summaries;	// 0x326cd45d
// declared property setter: - (void)setPunchout:(id)punchout;	// 0x326cd509
// declared property setter: - (void)setStartTime:(id)time;	// 0x326cd561
// declared property setter: - (void)setStatus:(id)status;	// 0x326cd5cd
// declared property setter: - (void)setTimeRemaining:(id)remaining;	// 0x326cd639
// declared property setter: - (void)setTimeTBD:(id)tbd;	// 0x326cd6a5
// declared property setter: - (void)setTitle:(id)title;	// 0x326cd711
// declared property setter: - (void)setTournamentSeriesDescription:(id)description;	// 0x326cd77d
// declared property setter: - (void)setTvChannels:(id)channels;	// 0x326cd7e9
// declared property setter: - (void)setWinningEntity:(id)entity;	// 0x326cd855
// declared property getter: - (id)startTime;	// 0x326cd545
// declared property getter: - (id)status;	// 0x326cd5b1
// declared property getter: - (id)timeRemaining;	// 0x326cd61d
// declared property getter: - (id)timeTBD;	// 0x326cd689
// declared property getter: - (id)title;	// 0x326cd6f5
// declared property getter: - (id)tournamentSeriesDescription;	// 0x326cd761
// declared property getter: - (id)tvChannels;	// 0x326cd7cd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326cd8a5
// declared property getter: - (id)winningEntity;	// 0x326cd839
@end

