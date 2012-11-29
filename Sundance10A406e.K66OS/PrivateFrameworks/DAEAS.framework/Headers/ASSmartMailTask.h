/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSendMailTask.h"

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {
	int _messageType;	// 116 = 0x74
	NSString *_originalMessageId;	// 120 = 0x78
	NSString *_originalFolderId;	// 124 = 0x7c
	NSString *_originalLongId;	// 128 = 0x80
	BOOL _retryWithoutReferences;	// 132 = 0x84
}
- (id)initWithMessage:(id)message messageID:(id)anId messageType:(int)type originalMessageID:(id)anId4 originalFolderID:(id)anId5 originalLongID:(id)anId6;	// 0x36c721e9
- (id)command;	// 0x36c7273d
- (int)commandCode;	// 0x36c72675
- (id)contentType;	// 0x36c727a9
- (void)dealloc;	// 0x36c72289
- (BOOL)expectsWBXML;	// 0x36c727b5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36c727b9
- (void)handleTopLevelErrorStatus:(id)status;	// 0x36c72829
- (id)parameterData;	// 0x36c726c9
- (BOOL)processContext:(id)context;	// 0x36c72979
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x36c72301
@end
