/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse {
	NSDictionary *_tokens;	// 16 = 0x10
	NSDictionary *_appleAccount;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *HSAAction;	// G=0x3001cdd1; 
@property(readonly, assign, nonatomic) NSString *HSAData;	// G=0x3001ce31; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x3001cd11; 
@property(readonly, assign, nonatomic) NSString *fmipToken;	// G=0x3001cce1; 
@property(readonly, assign, nonatomic) NSString *mapsToken;	// G=0x3001cd41; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3001cd71; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x3001cb69
- (void).cxx_destruct;	// 0x3001ce91
// declared property getter: - (id)HSAAction;	// 0x3001cdd1
// declared property getter: - (id)HSAData;	// 0x3001ce31
// declared property getter: - (id)authToken;	// 0x3001cd11
// declared property getter: - (id)fmipToken;	// 0x3001cce1
// declared property getter: - (id)mapsToken;	// 0x3001cd41
// declared property getter: - (id)personID;	// 0x3001cd71
@end

