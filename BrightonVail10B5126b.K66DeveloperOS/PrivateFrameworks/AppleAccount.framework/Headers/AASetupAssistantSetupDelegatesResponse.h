/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSNumber, NSString, NSDictionary;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse {
}
@property(readonly, assign, nonatomic) NSString *dsid;	// G=0x33462681; 
@property(readonly, assign, nonatomic) NSDictionary *responseParameters;	// G=0x334625c5; 
@property(readonly, assign, nonatomic) NSNumber *status;	// G=0x3346251d; 
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x33462571; 
// declared property getter: - (id)dsid;	// 0x33462681
// declared property getter: - (id)responseParameters;	// 0x334625c5
- (id)responseParametersForServiceIdentifier:(id)serviceIdentifier;	// 0x33462619
// declared property getter: - (id)status;	// 0x3346251d
// declared property getter: - (id)statusMessage;	// 0x33462571
@end

