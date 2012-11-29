/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SASportsSeasonRange;

@interface SASportsSeason : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SASportsSeasonRange *postSeason;	// G=0x3663de59; S=0x3663dead; 
@property(retain, nonatomic) SASportsSeasonRange *preSeason;	// G=0x3663dee9; S=0x3663df3d; 
@property(retain, nonatomic) SASportsSeasonRange *regularSeason;	// G=0x3663df79; S=0x3663dfcd; 
+ (id)season;	// 0x3663ddc9
+ (id)seasonWithDictionary:(id)dictionary context:(id)context;	// 0x3663de0d
- (id)encodedClassName;	// 0x3663ddbd
- (id)groupIdentifier;	// 0x3663ddad
// declared property getter: - (id)postSeason;	// 0x3663de59
// declared property getter: - (id)preSeason;	// 0x3663dee9
// declared property getter: - (id)regularSeason;	// 0x3663df79
// declared property setter: - (void)setPostSeason:(id)season;	// 0x3663dead
// declared property setter: - (void)setPreSeason:(id)season;	// 0x3663df3d
// declared property setter: - (void)setRegularSeason:(id)season;	// 0x3663dfcd
@end
