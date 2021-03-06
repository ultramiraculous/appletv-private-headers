/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAPersonAttribute, NSString, NSURL;

@interface SAPhoneCall : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAPersonAttribute *callRecipient;	// G=0x35599f69; S=0x35599fbd; 
@property(assign, nonatomic) BOOL faceTime;	// G=0x35599ff9; S=0x3559a071; 
@property(copy, nonatomic) NSString *recipient;	// G=0x3559a0b5; S=0x3559a0d1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x35599e8d; S=0x35599f09; 
+ (id)call;	// 0x35599dfd
+ (id)callWithDictionary:(id)dictionary context:(id)context;	// 0x35599e41
// declared property getter: - (id)callRecipient;	// 0x35599f69
- (id)encodedClassName;	// 0x35599df1
// declared property getter: - (BOOL)faceTime;	// 0x35599ff9
- (id)groupIdentifier;	// 0x35599de1
// declared property getter: - (id)recipient;	// 0x3559a0b5
- (BOOL)requiresResponse;	// 0x3559a121
// declared property setter: - (void)setCallRecipient:(id)recipient;	// 0x35599fbd
// declared property setter: - (void)setFaceTime:(BOOL)time;	// 0x3559a071
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x3559a0d1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x35599f09
// declared property getter: - (id)targetAppId;	// 0x35599e8d
@end

