/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
	NSDictionary *setupParameters;	// 12 = 0xc
	AASigningSession *signingSession;	// 16 = 0x10
}
+ (Class)responseClass;	// 0x33896b49
- (id)initWithSetupParameters:(id)setupParameters signingSession:(id)session;	// 0x33896b65
- (void)dealloc;	// 0x33896bdd
- (id)urlRequest;	// 0x33896c71
- (id)urlString;	// 0x33896c3d
@end

