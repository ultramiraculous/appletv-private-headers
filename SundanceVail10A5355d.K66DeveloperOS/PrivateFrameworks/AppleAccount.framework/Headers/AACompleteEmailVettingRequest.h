/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAEmailVettingRequest.h"

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
	NSString *_token;	// 20 = 0x14
}
+ (Class)responseClass;	// 0x35749e3d
- (id)initWithAccount:(id)account token:(id)token;	// 0x35749e59
- (id)initWithURLString:(id)urlstring account:(id)account token:(id)token;	// 0x35749ec5
- (void).cxx_destruct;	// 0x3574a0e5
- (id)bodyDictionary;	// 0x3574a02d
- (id)urlString;	// 0x35749f3d
@end

