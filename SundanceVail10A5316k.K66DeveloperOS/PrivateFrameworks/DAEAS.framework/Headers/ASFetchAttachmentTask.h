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
@property(readonly, retain) NSString *attachmentName;	// G=0x3094bd11; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x3094bd31
// converted property getter: - (id)attachmentName;	// 0x3094bd11
- (id)command;	// 0x3094bac1
- (int)commandCode;	// 0x3094ba01
- (int)connectionActionForResponse:(id)response;	// 0x3094b9fd
- (id)contentType;	// 0x3094bb31
- (void)dealloc;	// 0x3094bda9
- (BOOL)expectsWBXML;	// 0x3094b9f9
- (void)finishWithError:(id)error;	// 0x3094b879
- (id)messageID;	// 0x3094bd21
- (id)parameterData;	// 0x3094ba05
- (BOOL)processContext:(id)context;	// 0x3094bb35
- (id)requestBody;	// 0x3094b9f5
- (BOOL)shouldLogIncomingData;	// 0x3094be0d
@end

