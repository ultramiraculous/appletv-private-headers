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
- (id)initWithMessage:(id)message messageID:(id)anId;	// 0x318ab109
- (id)command;	// 0x318ab999
- (int)commandCode;	// 0x318ab955
- (int)connectionActionForResponse:(id)response;	// 0x318aba79
- (id)contentType;	// 0x318ab9ed
- (void)dealloc;	// 0x318ab195
- (BOOL)expectsWBXML;	// 0x318aba41
- (void)finishWithError:(id)error;	// 0x318ab265
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x318aba7d
- (id)parameterData;	// 0x318ab959
- (BOOL)processContext:(id)context;	// 0x318aba91
- (id)requestBody;	// 0x318ab7e9
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x318ab51d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x318ab1f5
@end
