/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x30340a4d; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x30341091
// converted property getter: - (id)attachmentName;	// 0x30340a4d
- (int)commandCode;	// 0x30340a49
- (void)dealloc;	// 0x30341035
- (void)finishWithError:(id)error;	// 0x30341101
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x30340a35
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x30340a6d
- (id)messageID;	// 0x30340a5d
- (BOOL)processContext:(id)context;	// 0x30340c69
- (id)requestBody;	// 0x30340ae5
@end

