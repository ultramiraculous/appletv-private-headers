/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVChallenge.h"
#import "DAVKit-Structs.h"

@class NSString;

@interface _DAVBasicChallenge : DAVChallenge {
	NSString *authString;	// 4 = 0x4
}
- (id)initWithAuthString:(id)authString;	// 0x314d09fd
- (BOOL)addAuthHeaderToMessage:(CFHTTPMessageRef)message;	// 0x314d0cc9
- (void)dealloc;	// 0x314d09b5
@end

