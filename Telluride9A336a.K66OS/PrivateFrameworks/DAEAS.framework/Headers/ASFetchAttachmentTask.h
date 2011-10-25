/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x31549fe5; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x3154a005
// converted property getter: - (id)attachmentName;	// 0x31549fe5
- (id)command;	// 0x31549d99
- (int)commandCode;	// 0x31549cd5
- (int)connectionActionForResponse:(id)response;	// 0x31549cd1
- (id)contentType;	// 0x31549e09
- (void)dealloc;	// 0x3154a079
- (BOOL)expectsWBXML;	// 0x31549ccd
- (void)finishWithError:(id)error;	// 0x31549b21
- (id)messageID;	// 0x31549ff5
- (id)parameterData;	// 0x31549cd9
- (BOOL)processContext:(id)context;	// 0x31549e0d
- (id)requestBody;	// 0x31549cc9
- (BOOL)shouldLogIncomingData;	// 0x3154a0d9
@end

