/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString;

@interface ASFolderSyncTask : ASTask {
	NSString *_previousSyncKey;	// 108 = 0x6c
	BOOL _requireChangedFolders;	// 112 = 0x70
	int _numDownloadedElements;	// 116 = 0x74
}
@property(readonly, assign) int numDownloadedElements;	// G=0x34b95681; converted property
@property(assign, nonatomic) BOOL requireChangedFolders;	// G=0x34b95691; S=0x34b956a1; @synthesize=_requireChangedFolders
- (id)initWithPreviousSyncKey:(id)previousSyncKey;	// 0x34b94e5d
- (int)commandCode;	// 0x34b94eb1
- (void)dealloc;	// 0x34b955a5
- (void)finishWithError:(id)error;	// 0x34b95305
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x34b94f81
// converted property getter: - (int)numDownloadedElements;	// 0x34b95681
- (BOOL)processContext:(id)context;	// 0x34b94f95
- (id)requestBody;	// 0x34b94eb5
// declared property getter: - (BOOL)requireChangedFolders;	// 0x34b95691
// declared property setter: - (void)setRequireChangedFolders:(BOOL)folders;	// 0x34b956a1
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34b955f1
@end

