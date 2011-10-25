/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface HSFairPlayInfo : NSObject {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x329c0e25; 
- (id)init;	// 0x329c0ced
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x329c18b5
- (id)_hexStringForData:(id)data;	// 0x329c194d
- (id)beginNegotiation;	// 0x329c0ea5
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x329c0f25
- (void)dealloc;	// 0x329c0dad
// declared property getter: - (id)deviceGUID;	// 0x329c0e25
- (void)endMescalSession;	// 0x329c1161
- (void)endSecuritySession;	// 0x329c0ff5
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x329c175d
- (id)securityInfoForURL:(id)url;	// 0x329c103d
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x329c1189
- (BOOL)shouldSignRequestAction:(id)action;	// 0x329c1891
- (id)signatureForData:(id)data;	// 0x329c1809
@end

