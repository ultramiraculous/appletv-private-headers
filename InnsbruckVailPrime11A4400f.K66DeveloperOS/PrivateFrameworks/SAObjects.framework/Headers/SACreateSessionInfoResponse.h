/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSData;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *sessionInfo;	// G=0x326ec249; S=0x326ec265; 
@property(copy, nonatomic) NSNumber *validityDuration;	// G=0x326ec2b5; S=0x326ec2d1; 
+ (id)createSessionInfoResponse;	// 0x326ec1b9
+ (id)createSessionInfoResponseWithDictionary:(id)dictionary context:(id)context;	// 0x326ec1fd
- (id)encodedClassName;	// 0x326ec1ad
- (id)groupIdentifier;	// 0x326ec19d
- (BOOL)requiresResponse;	// 0x326ec321
// declared property getter: - (id)sessionInfo;	// 0x326ec249
// declared property setter: - (void)setSessionInfo:(id)info;	// 0x326ec265
// declared property setter: - (void)setValidityDuration:(id)duration;	// 0x326ec2d1
// declared property getter: - (id)validityDuration;	// 0x326ec2b5
@end
