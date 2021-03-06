/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderTeamRecord : NSObject {
@private
	NSString *teamAbbrev;	// 4 = 0x4
	int wins;	// 8 = 0x8
	int losses;	// 12 = 0xc
	int confSeed;	// 16 = 0x10
	NSString *confRecord;	// 20 = 0x14
	NSString *divRecord;	// 24 = 0x18
	NSString *last10Record;	// 28 = 0x1c
	NSString *currentStreak;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *confRecord;	// G=0x33164f4d; S=0x33164f5d; @synthesize
@property(assign, nonatomic) int confSeed;	// G=0x33164f2d; S=0x33164f3d; @synthesize
@property(retain, nonatomic) NSString *currentStreak;	// G=0x33164fe9; S=0x33164ff9; @synthesize
@property(retain, nonatomic) NSString *divRecord;	// G=0x33164f81; S=0x33164f91; @synthesize
@property(retain, nonatomic) NSString *last10Record;	// G=0x33164fb5; S=0x33164fc5; @synthesize
@property(assign, nonatomic) int losses;	// G=0x33164f0d; S=0x33164f1d; @synthesize
@property(retain, nonatomic) NSString *teamAbbrev;	// G=0x33164eb9; S=0x33164ec9; @synthesize
@property(readonly, assign, nonatomic) NSString *winPercentage;	// G=0x33164ced; 
@property(assign, nonatomic) int wins;	// G=0x33164eed; S=0x33164efd; @synthesize
// declared property getter: - (id)confRecord;	// 0x33164f4d
// declared property getter: - (int)confSeed;	// 0x33164f2d
- (id)createStandingsRowRelativeToFirstPlace:(id)firstPlace;	// 0x33164d5d
// declared property getter: - (id)currentStreak;	// 0x33164fe9
- (void)dealloc;	// 0x33164bb5
// declared property getter: - (id)divRecord;	// 0x33164f81
- (id)gamesBehind:(id)behind;	// 0x33164c51
// declared property getter: - (id)last10Record;	// 0x33164fb5
// declared property getter: - (int)losses;	// 0x33164f0d
// declared property setter: - (void)setConfRecord:(id)record;	// 0x33164f5d
// declared property setter: - (void)setConfSeed:(int)seed;	// 0x33164f3d
// declared property setter: - (void)setCurrentStreak:(id)streak;	// 0x33164ff9
// declared property setter: - (void)setDivRecord:(id)record;	// 0x33164f91
// declared property setter: - (void)setLast10Record:(id)record;	// 0x33164fc5
// declared property setter: - (void)setLosses:(int)losses;	// 0x33164f1d
// declared property setter: - (void)setTeamAbbrev:(id)abbrev;	// 0x33164ec9
// declared property setter: - (void)setWins:(int)wins;	// 0x33164efd
// declared property getter: - (id)teamAbbrev;	// 0x33164eb9
// declared property getter: - (id)winPercentage;	// 0x33164ced
// declared property getter: - (int)wins;	// 0x33164eed
@end

