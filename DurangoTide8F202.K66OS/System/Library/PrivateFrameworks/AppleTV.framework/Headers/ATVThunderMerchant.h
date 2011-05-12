/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMerchantRepresentativeFeed.h"
#import "ATVMerchant.h"
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderMerchant : ATVMerchant <ATVMerchantRepresentativeFeed> {
@private
	NSDictionary *_thunderInfo;	// 24 = 0x18
}
+ (id)accountType;	// 0x33707a25
+ (id)allocWithZone:(NSZone *)zone;	// 0x33708115
+ (id)baseURLForKey:(id)key;	// 0x33707a45
+ (id)deviceAlias;	// 0x3370763d
+ (id)identifier;	// 0x33707649
+ (void)initialize;	// 0x33707b1d
+ (void)setURLBag:(id)bag;	// 0x33707a95
- (id)init;	// 0x33707bf9
- (id)archiveVideoStartDate;	// 0x337078e5
- (id)brandingImage;	// 0x33707d31
- (Class)catalogAgent;	// 0x33707a05
- (id)cityDisplayNameForTeam:(id)team;	// 0x337078a1
- (id)courtURLForTeam:(id)team;	// 0x3370774d
- (id)currentSeasonEndDate;	// 0x33707945
- (id)currentSeasonStartDate;	// 0x337079a5
- (void)dealloc;	// 0x33707b69
- (id)description;	// 0x33707655
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x33707d79
- (id)largeLogoURLForTeam:(id)team;	// 0x33707791
- (id)loadRepresentativeFeed;	// 0x33707685
- (id)localizedStringForKey:(id)key;	// 0x33707c95
- (id)longDisplayNameForTeam:(id)team;	// 0x33707819
- (id)representativeFeedURL;	// 0x33707661
- (id)rootURL;	// 0x33707a69
- (id)shortDisplayNameForTeam:(id)team;	// 0x3370785d
- (id)smallLogoURLForTeam:(id)team;	// 0x337077d5
@end
