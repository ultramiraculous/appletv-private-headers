/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSData, NSString;

@interface ASSendMailTask : ASTask {
	NSData *_mimeMessage;	// 104 = 0x68
	NSString *_messageID;	// 108 = 0x6c
}
- (id)initWithMessage:(id)message messageID:(id)anId;	// 0x30a76185
- (id)command;	// 0x30a76a15
- (int)commandCode;	// 0x30a769d1
- (int)connectionActionForResponse:(id)response;	// 0x30a76af5
- (id)contentType;	// 0x30a76a69
- (void)dealloc;	// 0x30a76211
- (BOOL)expectsWBXML;	// 0x30a76abd
- (void)finishWithError:(id)error;	// 0x30a762e1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x30a76af9
- (id)parameterData;	// 0x30a769d5
- (BOOL)processContext:(id)context;	// 0x30a76b0d
- (id)requestBody;	// 0x30a76865
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x30a76599
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x30a76271
@end

