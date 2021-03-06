/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class ASMailMessage, NSArray;

@interface ASItemOperationsTask : ASTask {
	NSArray *_commands;	// 104 = 0x68
	int _numReplacedItems;	// 108 = 0x6c
	int _bodyTruncationBytes;	// 112 = 0x70
	int _mimeSupport;	// 116 = 0x74
	ASMailMessage *_streamingMailMessage;	// 120 = 0x78
}
@property(retain) NSArray *commands;	// G=0x32196d3d; S=0x32196d4d; converted property
@property(readonly, assign) int mimeSupport;	// G=0x32196cf5; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x32197b29; S=0x32197b39; converted property
- (id)init;	// 0x32196ca5
- (int)_mimeSupportCode;	// 0x32196d91
- (int)bodyType;	// 0x32196d15
- (int)commandCode;	// 0x32196c41
// converted property getter: - (id)commands;	// 0x32196d3d
- (void)dealloc;	// 0x32196c45
- (void)finishWithError:(id)error;	// 0x321977f9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321972ed
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x3219710d
// converted property getter: - (int)mimeSupport;	// 0x32196cf5
- (BOOL)processContext:(id)context;	// 0x32197301
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x32197281
- (id)requestBody;	// 0x32196dcd
- (void)setBodyTruncationBytes:(int)bytes;	// 0x32196d2d
// converted property setter: - (void)setCommands:(id)commands;	// 0x32196d4d
- (void)setMIMESupport:(int)support;	// 0x32196d05
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x32197b39
// converted property getter: - (id)streamingMailMessage;	// 0x32197b29
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x32197a99
@end

