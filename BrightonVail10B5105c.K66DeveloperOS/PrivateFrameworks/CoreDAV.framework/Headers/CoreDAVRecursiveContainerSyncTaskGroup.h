/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskGroupDelegate.h"
#import "CoreDAVMkcolTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSDictionary, NSMutableSet, NSURL, NSMutableArray, NSString, NSArray, NSMutableDictionary;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	NSString *_previousSyncToken;	// 60 = 0x3c
	NSString *_nextSyncToken;	// 64 = 0x40
	NSString *_previousPTag;	// 68 = 0x44
	NSString *_nextPTag;	// 72 = 0x48
	NSArray *_actions;	// 76 = 0x4c
	void *_context;	// 80 = 0x50
	unsigned _multiGetBatchSize;	// 84 = 0x54
	NSMutableArray *_unsubmittedTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSMutableSet *_syncReportDeletedURLs;	// 100 = 0x64
	NSMutableDictionary *_leafURLToETag;	// 104 = 0x68
	NSMutableArray *_childCollectionURL;	// 108 = 0x6c
	Class _appSpecificDataItemClass;	// 112 = 0x70
	Class _appSpecificContainerItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 124 = 0x7c
	BOOL _preflightCTag;	// 128 = 0x80
}
@property(readonly, assign) void *context;	// G=0x36012821; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x360127a5; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x36012835; @synthesize=_folderURLToChildrenURLOrder
@property(assign) unsigned multiGetBatchSize;	// G=0x36012779; S=0x3601278d; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x36012849; S=0x3601285d; @synthesize=_nextCTag
@property(assign) BOOL preflightCTag;	// G=0x360127cd; S=0x360127e5; @synthesize=_preflightCTag
@property(readonly, assign) NSString *previousCTag;	// G=0x360127b9; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x360127fd; S=0x36012811; @synthesize=_previousSyncToken
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3600e8e5
- (id)_copyContainerParserMappings;	// 0x36012649
- (void)_folderModTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x36010fd9
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x3600ee35
- (void)_getDataPayloads;	// 0x3600ff8d
- (void)_getItemTags;	// 0x3600fc01
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x360120fd
- (void)_getTopFolderTags;	// 0x3600fa25
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x36010df5
- (void)_pushActions;	// 0x3600f271
- (unsigned)_submitTasks;	// 0x3600ef75
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x36011779
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)contents;	// 0x3600f149
- (void)_tearDownAllUnsubmittedTasks;	// 0x3600eced
- (void)bailWithError:(id)error;	// 0x3600eef1
- (void)cancelTaskGroup;	// 0x3600ef35
// declared property getter: - (void *)context;	// 0x36012821
- (id)copyFolderMultiGetTaskWithURLs:(id)urls;	// 0x360126ad
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x36012669
- (id)dataContentType;	// 0x360126f1
- (void)dealloc;	// 0x3600eacd
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x36011595
- (id)description;	// 0x3600ec0d
// declared property getter: - (id)folderURL;	// 0x360127a5
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x36012835
- (BOOL)isWhitelistedError:(id)error;	// 0x36010a79
- (void)mkcolTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x36011485
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x36012779
// declared property getter: - (id)nextCTag;	// 0x36012849
// declared property getter: - (BOOL)preflightCTag;	// 0x360127cd
// declared property getter: - (id)previousCTag;	// 0x360127b9
// declared property getter: - (id)previousSyncToken;	// 0x360127fd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x36011d21
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x36011495
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x36010ae9
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x3601278d
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x3601285d
// declared property setter: - (void)setPreflightCTag:(BOOL)tag;	// 0x360127e5
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x36012811
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x36012735
- (void)startTaskGroup;	// 0x36010a21
- (void)syncAway;	// 0x36010a69
- (void)task:(id)task didFinishWithError:(id)error;	// 0x360114a5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3600ec7d
@end
