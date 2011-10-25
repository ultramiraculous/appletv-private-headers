/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {
	NSString *_previousSyncKey;	// 104 = 0x68
	ASFolder *_folder;	// 108 = 0x6c
	int _commandCode;	// 112 = 0x70
	int _requestType;	// 116 = 0x74
	id _completionBlock;	// 120 = 0x78
}
@property(readonly, assign) int commandCode;	// G=0x3158262d; converted property
+ (id)taskWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x315824dd
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x31582449
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x3158263d
// converted property getter: - (int)commandCode;	// 0x3158262d
- (void)dealloc;	// 0x31582f15
- (void)finishWithError:(id)error;	// 0x31582c31
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x315827b1
- (BOOL)processContext:(id)context;	// 0x315827d1
- (id)requestBody;	// 0x315826b9
@end

