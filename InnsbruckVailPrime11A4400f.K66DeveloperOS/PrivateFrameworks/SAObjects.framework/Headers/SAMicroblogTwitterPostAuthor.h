/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSURL, NSNumber, NSString;

@interface SAMicroblogTwitterPostAuthor : SADomainObject {
}
@property(assign, nonatomic) int followersCount;	// G=0x326d8869; S=0x326d88d9; 
@property(copy, nonatomic) NSString *fullName;	// G=0x326d891d; S=0x326d8939; 
@property(copy, nonatomic) NSURL *profileImageUrl;	// G=0x326d8989; S=0x326d8a05; 
@property(copy, nonatomic) NSString *screenName;	// G=0x326d8a65; S=0x326d8a81; 
@property(copy, nonatomic) NSNumber *userId;	// G=0x326d8ad1; S=0x326d8aed; 
@property(assign, nonatomic) BOOL verified;	// G=0x326d8b3d; S=0x326d8bb5; 
+ (id)twitterPostAuthor;	// 0x326d87d9
+ (id)twitterPostAuthorWithDictionary:(id)dictionary context:(id)context;	// 0x326d881d
- (id)encodedClassName;	// 0x326d87cd
// declared property getter: - (int)followersCount;	// 0x326d8869
// declared property getter: - (id)fullName;	// 0x326d891d
- (id)groupIdentifier;	// 0x326d87bd
// declared property getter: - (id)profileImageUrl;	// 0x326d8989
// declared property getter: - (id)screenName;	// 0x326d8a65
// declared property setter: - (void)setFollowersCount:(int)count;	// 0x326d88d9
// declared property setter: - (void)setFullName:(id)name;	// 0x326d8939
// declared property setter: - (void)setProfileImageUrl:(id)url;	// 0x326d8a05
// declared property setter: - (void)setScreenName:(id)name;	// 0x326d8a81
// declared property setter: - (void)setUserId:(id)anId;	// 0x326d8aed
// declared property setter: - (void)setVerified:(BOOL)verified;	// 0x326d8bb5
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326d8bf9
// declared property getter: - (id)userId;	// 0x326d8ad1
// declared property getter: - (BOOL)verified;	// 0x326d8b3d
@end
