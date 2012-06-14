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
- (id)initWithMessage:(id)message messageID:(id)anId;	// 0x3099c489
- (id)command;	// 0x3099ccc9
- (int)commandCode;	// 0x3099cc85
- (int)connectionActionForResponse:(id)response;	// 0x3099cdd1
- (id)contentType;	// 0x3099cd45
- (void)dealloc;	// 0x3099c509
- (BOOL)expectsWBXML;	// 0x3099cd99
- (void)finishWithError:(id)error;	// 0x3099c5d5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3099cdd5
- (id)parameterData;	// 0x3099cc89
- (BOOL)processContext:(id)context;	// 0x3099cde9
- (id)requestBody;	// 0x3099cb11
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x3099c86d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x3099c56d
@end
