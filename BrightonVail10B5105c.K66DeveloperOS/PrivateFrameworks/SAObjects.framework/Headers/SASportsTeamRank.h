/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASportsTeamRank : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *position;	// G=0x303d1149; S=0x303d1165; 
@property(copy, nonatomic) NSNumber *primary;	// G=0x303d11b5; S=0x303d11d1; 
@property(copy, nonatomic) NSString *source;	// G=0x303d1221; S=0x303d123d; 
+ (id)teamRank;	// 0x303d10b9
+ (id)teamRankWithDictionary:(id)dictionary context:(id)context;	// 0x303d10fd
- (id)encodedClassName;	// 0x303d10ad
- (id)groupIdentifier;	// 0x303d109d
// declared property getter: - (id)position;	// 0x303d1149
// declared property getter: - (id)primary;	// 0x303d11b5
// declared property setter: - (void)setPosition:(id)position;	// 0x303d1165
// declared property setter: - (void)setPrimary:(id)primary;	// 0x303d11d1
// declared property setter: - (void)setSource:(id)source;	// 0x303d123d
// declared property getter: - (id)source;	// 0x303d1221
@end

