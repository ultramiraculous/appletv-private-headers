/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVThunderXMLParser.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewParser : NSObject <ATVThunderXMLParser> {
@private
	BOOL homeSection;	// 4 = 0x4
	int currentPeriod;	// 8 = 0x8
	NSString *_gameState;	// 12 = 0xc
	NSString *_gameStartTime;	// 16 = 0x10
	NSString *_gamePeriod;	// 20 = 0x14
	NSString *_gameClock;	// 24 = 0x18
	NSString *_courtURL;	// 28 = 0x1c
	NSString *_courtFrameURL;	// 32 = 0x20
	NSString *_homeTeamAbbrev;	// 36 = 0x24
	NSString *_homeTeamName;	// 40 = 0x28
	NSString *_homeTeamScore;	// 44 = 0x2c
	NSString *_homeTeamLogoURL;	// 48 = 0x30
	NSString *_homeQ1;	// 52 = 0x34
	NSString *_homeQ2;	// 56 = 0x38
	NSString *_homeQ3;	// 60 = 0x3c
	NSString *_homeQ4;	// 64 = 0x40
	NSString *_homeOT1;	// 68 = 0x44
	NSString *_homeOT2;	// 72 = 0x48
	NSString *_homeOT3;	// 76 = 0x4c
	NSString *_homeOT4;	// 80 = 0x50
	NSString *_homeFgPerc;	// 84 = 0x54
	NSString *_homeTimeouts;	// 88 = 0x58
	NSMutableArray *_homePlayers;	// 92 = 0x5c
	NSString *_awayTeamAbbrev;	// 96 = 0x60
	NSString *_awayTeamName;	// 100 = 0x64
	NSString *_awayTeamScore;	// 104 = 0x68
	NSString *_awayTeamLogoURL;	// 108 = 0x6c
	NSString *_awayQ1;	// 112 = 0x70
	NSString *_awayQ2;	// 116 = 0x74
	NSString *_awayQ3;	// 120 = 0x78
	NSString *_awayQ4;	// 124 = 0x7c
	NSString *_awayOT1;	// 128 = 0x80
	NSString *_awayOT2;	// 132 = 0x84
	NSString *_awayOT3;	// 136 = 0x88
	NSString *_awayOT4;	// 140 = 0x8c
	NSString *_awayFgPerc;	// 144 = 0x90
	NSString *_awayTimeouts;	// 148 = 0x94
	NSMutableArray *_awayPlayers;	// 152 = 0x98
}
@property(copy, nonatomic) NSString *awayFgPerc;	// G=0x339eeac5; S=0x339eead5; @synthesize=_awayFgPerc
@property(copy, nonatomic) NSString *awayOT1;	// G=0x339ee9f5; S=0x339eea05; @synthesize=_awayOT1
@property(copy, nonatomic) NSString *awayOT2;	// G=0x339eea29; S=0x339eea39; @synthesize=_awayOT2
@property(copy, nonatomic) NSString *awayOT3;	// G=0x339eea5d; S=0x339eea6d; @synthesize=_awayOT3
@property(copy, nonatomic) NSString *awayOT4;	// G=0x339eea91; S=0x339eeaa1; @synthesize=_awayOT4
@property(retain, nonatomic) NSMutableArray *awayPlayers;	// G=0x339eeb2d; S=0x339eeb3d; @synthesize=_awayPlayers
@property(copy, nonatomic) NSString *awayQ1;	// G=0x339ee925; S=0x339ee935; @synthesize=_awayQ1
@property(copy, nonatomic) NSString *awayQ2;	// G=0x339ee959; S=0x339ee969; @synthesize=_awayQ2
@property(copy, nonatomic) NSString *awayQ3;	// G=0x339ee98d; S=0x339ee99d; @synthesize=_awayQ3
@property(copy, nonatomic) NSString *awayQ4;	// G=0x339ee9c1; S=0x339ee9d1; @synthesize=_awayQ4
@property(copy, nonatomic) NSString *awayTeamAbbrev;	// G=0x339ee855; S=0x339ee865; @synthesize=_awayTeamAbbrev
@property(copy, nonatomic) NSString *awayTeamLogoURL;	// G=0x339ee8f1; S=0x339ee901; @synthesize=_awayTeamLogoURL
@property(copy, nonatomic) NSString *awayTeamName;	// G=0x339ee889; S=0x339ee899; @synthesize=_awayTeamName
@property(copy, nonatomic) NSString *awayTeamScore;	// G=0x339ee8bd; S=0x339ee8cd; @synthesize=_awayTeamScore
@property(copy, nonatomic) NSString *awayTimeouts;	// G=0x339eeaf9; S=0x339eeb09; @synthesize=_awayTimeouts
@property(copy, nonatomic) NSString *courtFrameURL;	// G=0x339ee515; S=0x339ee525; @synthesize=_courtFrameURL
@property(copy, nonatomic) NSString *courtURL;	// G=0x339ee4e1; S=0x339ee4f1; @synthesize=_courtURL
@property(copy, nonatomic) NSString *gameClock;	// G=0x339ee4ad; S=0x339ee4bd; @synthesize=_gameClock
@property(copy, nonatomic) NSString *gamePeriod;	// G=0x339ee479; S=0x339ee489; @synthesize=_gamePeriod
@property(copy, nonatomic) NSString *gameStartTime;	// G=0x339ee445; S=0x339ee455; @synthesize=_gameStartTime
@property(copy, nonatomic) NSString *gameState;	// G=0x339ee411; S=0x339ee421; @synthesize=_gameState
@property(copy, nonatomic) NSString *homeFgPerc;	// G=0x339ee7b9; S=0x339ee7c9; @synthesize=_homeFgPerc
@property(copy, nonatomic) NSString *homeOT1;	// G=0x339ee6e9; S=0x339ee6f9; @synthesize=_homeOT1
@property(copy, nonatomic) NSString *homeOT2;	// G=0x339ee71d; S=0x339ee72d; @synthesize=_homeOT2
@property(copy, nonatomic) NSString *homeOT3;	// G=0x339ee751; S=0x339ee761; @synthesize=_homeOT3
@property(copy, nonatomic) NSString *homeOT4;	// G=0x339ee785; S=0x339ee795; @synthesize=_homeOT4
@property(retain, nonatomic) NSMutableArray *homePlayers;	// G=0x339ee821; S=0x339ee831; @synthesize=_homePlayers
@property(copy, nonatomic) NSString *homeQ1;	// G=0x339ee619; S=0x339ee629; @synthesize=_homeQ1
@property(copy, nonatomic) NSString *homeQ2;	// G=0x339ee64d; S=0x339ee65d; @synthesize=_homeQ2
@property(copy, nonatomic) NSString *homeQ3;	// G=0x339ee681; S=0x339ee691; @synthesize=_homeQ3
@property(copy, nonatomic) NSString *homeQ4;	// G=0x339ee6b5; S=0x339ee6c5; @synthesize=_homeQ4
@property(copy, nonatomic) NSString *homeTeamAbbrev;	// G=0x339ee549; S=0x339ee559; @synthesize=_homeTeamAbbrev
@property(copy, nonatomic) NSString *homeTeamLogoURL;	// G=0x339ee5e5; S=0x339ee5f5; @synthesize=_homeTeamLogoURL
@property(copy, nonatomic) NSString *homeTeamName;	// G=0x339ee57d; S=0x339ee58d; @synthesize=_homeTeamName
@property(copy, nonatomic) NSString *homeTeamScore;	// G=0x339ee5b1; S=0x339ee5c1; @synthesize=_homeTeamScore
@property(copy, nonatomic) NSString *homeTimeouts;	// G=0x339ee7ed; S=0x339ee7fd; @synthesize=_homeTimeouts
- (id)init;	// 0x339ecb9d
// declared property getter: - (id)awayFgPerc;	// 0x339eeac5
// declared property getter: - (id)awayOT1;	// 0x339ee9f5
// declared property getter: - (id)awayOT2;	// 0x339eea29
// declared property getter: - (id)awayOT3;	// 0x339eea5d
// declared property getter: - (id)awayOT4;	// 0x339eea91
// declared property getter: - (id)awayPlayers;	// 0x339eeb2d
// declared property getter: - (id)awayQ1;	// 0x339ee925
// declared property getter: - (id)awayQ2;	// 0x339ee959
// declared property getter: - (id)awayQ3;	// 0x339ee98d
// declared property getter: - (id)awayQ4;	// 0x339ee9c1
// declared property getter: - (id)awayTeamAbbrev;	// 0x339ee855
// declared property getter: - (id)awayTeamLogoURL;	// 0x339ee8f1
// declared property getter: - (id)awayTeamName;	// 0x339ee889
// declared property getter: - (id)awayTeamScore;	// 0x339ee8bd
// declared property getter: - (id)awayTimeouts;	// 0x339eeaf9
// declared property getter: - (id)courtFrameURL;	// 0x339ee515
// declared property getter: - (id)courtURL;	// 0x339ee4e1
- (id)createStorePage;	// 0x339ecf51
- (id)createStorePageForError:(int)error;	// 0x339ed9ad
- (void)dealloc;	// 0x339ecc49
// declared property getter: - (id)gameClock;	// 0x339ee4ad
// declared property getter: - (id)gamePeriod;	// 0x339ee479
// declared property getter: - (id)gameStartTime;	// 0x339ee445
// declared property getter: - (id)gameState;	// 0x339ee411
// declared property getter: - (id)homeFgPerc;	// 0x339ee7b9
// declared property getter: - (id)homeOT1;	// 0x339ee6e9
// declared property getter: - (id)homeOT2;	// 0x339ee71d
// declared property getter: - (id)homeOT3;	// 0x339ee751
// declared property getter: - (id)homeOT4;	// 0x339ee785
// declared property getter: - (id)homePlayers;	// 0x339ee821
// declared property getter: - (id)homeQ1;	// 0x339ee619
// declared property getter: - (id)homeQ2;	// 0x339ee64d
// declared property getter: - (id)homeQ3;	// 0x339ee681
// declared property getter: - (id)homeQ4;	// 0x339ee6b5
// declared property getter: - (id)homeTeamAbbrev;	// 0x339ee549
// declared property getter: - (id)homeTeamLogoURL;	// 0x339ee5e5
// declared property getter: - (id)homeTeamName;	// 0x339ee57d
// declared property getter: - (id)homeTeamScore;	// 0x339ee5b1
// declared property getter: - (id)homeTimeouts;	// 0x339ee7ed
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x339ed9b1
// declared property setter: - (void)setAwayFgPerc:(id)perc;	// 0x339eead5
// declared property setter: - (void)setAwayOT1:(id)a1;	// 0x339eea05
// declared property setter: - (void)setAwayOT2:(id)a2;	// 0x339eea39
// declared property setter: - (void)setAwayOT3:(id)a3;	// 0x339eea6d
// declared property setter: - (void)setAwayOT4:(id)a4;	// 0x339eeaa1
// declared property setter: - (void)setAwayPlayers:(id)players;	// 0x339eeb3d
// declared property setter: - (void)setAwayQ1:(id)a1;	// 0x339ee935
// declared property setter: - (void)setAwayQ2:(id)a2;	// 0x339ee969
// declared property setter: - (void)setAwayQ3:(id)a3;	// 0x339ee99d
// declared property setter: - (void)setAwayQ4:(id)a4;	// 0x339ee9d1
// declared property setter: - (void)setAwayTeamAbbrev:(id)abbrev;	// 0x339ee865
// declared property setter: - (void)setAwayTeamLogoURL:(id)url;	// 0x339ee901
// declared property setter: - (void)setAwayTeamName:(id)name;	// 0x339ee899
// declared property setter: - (void)setAwayTeamScore:(id)score;	// 0x339ee8cd
// declared property setter: - (void)setAwayTimeouts:(id)timeouts;	// 0x339eeb09
// declared property setter: - (void)setCourtFrameURL:(id)url;	// 0x339ee525
// declared property setter: - (void)setCourtURL:(id)url;	// 0x339ee4f1
// declared property setter: - (void)setGameClock:(id)clock;	// 0x339ee4bd
// declared property setter: - (void)setGamePeriod:(id)period;	// 0x339ee489
// declared property setter: - (void)setGameStartTime:(id)time;	// 0x339ee455
// declared property setter: - (void)setGameState:(id)state;	// 0x339ee421
// declared property setter: - (void)setHomeFgPerc:(id)perc;	// 0x339ee7c9
// declared property setter: - (void)setHomeOT1:(id)a1;	// 0x339ee6f9
// declared property setter: - (void)setHomeOT2:(id)a2;	// 0x339ee72d
// declared property setter: - (void)setHomeOT3:(id)a3;	// 0x339ee761
// declared property setter: - (void)setHomeOT4:(id)a4;	// 0x339ee795
// declared property setter: - (void)setHomePlayers:(id)players;	// 0x339ee831
// declared property setter: - (void)setHomeQ1:(id)a1;	// 0x339ee629
// declared property setter: - (void)setHomeQ2:(id)a2;	// 0x339ee65d
// declared property setter: - (void)setHomeQ3:(id)a3;	// 0x339ee691
// declared property setter: - (void)setHomeQ4:(id)a4;	// 0x339ee6c5
// declared property setter: - (void)setHomeTeamAbbrev:(id)abbrev;	// 0x339ee559
// declared property setter: - (void)setHomeTeamLogoURL:(id)url;	// 0x339ee5f5
// declared property setter: - (void)setHomeTeamName:(id)name;	// 0x339ee58d
// declared property setter: - (void)setHomeTeamScore:(id)score;	// 0x339ee5c1
// declared property setter: - (void)setHomeTimeouts:(id)timeouts;	// 0x339ee7fd
@end

