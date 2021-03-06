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
@property(retain, nonatomic) SAPersonAttribute *callRecipient;	// G=0x3250e5e9; S=0x3250e63d; 
@property(assign, nonatomic) BOOL faceTime;	// G=0x3250e679; S=0x3250e6f1; 
@property(copy, nonatomic) NSString *recipient;	// G=0x3250e735; S=0x3250e751; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3250e50d; S=0x3250e589; 
+ (id)call;	// 0x3250e47d
+ (id)callWithDictionary:(id)dictionary context:(id)context;	// 0x3250e4c1
// declared property getter: - (id)callRecipient;	// 0x3250e5e9
- (id)encodedClassName;	// 0x3250e471
// declared property getter: - (BOOL)faceTime;	// 0x3250e679
- (id)groupIdentifier;	// 0x3250e461
// declared property getter: - (id)recipient;	// 0x3250e735
- (BOOL)requiresResponse;	// 0x3250e7a1
// declared property setter: - (void)setCallRecipient:(id)recipient;	// 0x3250e63d
// declared property setter: - (void)setFaceTime:(BOOL)time;	// 0x3250e6f1
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x3250e751
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3250e589
// declared property getter: - (id)targetAppId;	// 0x3250e50d
@end

