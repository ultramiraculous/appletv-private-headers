/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSMutableDictionary, NSURL, NSString, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSURL *_folderURL;	// 44 = 0x2c
	NSString *_lastKnownCTag;	// 48 = 0x30
	BOOL _validCTag;	// 52 = 0x34
	void *_context;	// 56 = 0x38
	unsigned _multiPutBatchMaxNumResources;	// 60 = 0x3c
	unsigned _multiPutBatchMaxSize;	// 64 = 0x40
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 68 = 0x44
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 72 = 0x48
	NSMutableDictionary *_uuidToHREF;	// 76 = 0x4c
	NSMutableDictionary *_hrefToETag;	// 80 = 0x50
	NSMutableDictionary *_uuidToErrorItems;	// 84 = 0x54
	NSMutableDictionary *_hrefToErrorItems;	// 88 = 0x58
	NSMutableDictionary *_uuidToStatus;	// 92 = 0x5c
	NSMutableDictionary *_hrefToStatus;	// 96 = 0x60
}
@property(readonly, assign) void *context;	// G=0x3342c781; @synthesize=_context
@property(readonly, assign) NSURL *folderURL;	// G=0x3342c76d; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *hrefToETag;	// G=0x3342c7e5; @synthesize=_hrefToETag
@property(readonly, assign) NSDictionary *hrefToErrorItems;	// G=0x3342c80d; @synthesize=_hrefToErrorItems
@property(readonly, assign) NSDictionary *hrefToStatus;	// G=0x3342c835; @synthesize=_hrefToStatus
@property(assign) unsigned multiPutBatchMaxNumResources;	// G=0x3342c715; S=0x3342c729; @synthesize=_multiPutBatchMaxNumResources
@property(assign) unsigned multiPutBatchMaxSize;	// G=0x3342c741; S=0x3342c755; @synthesize=_multiPutBatchMaxSize
@property(retain) NSString *nextCTag;	// G=0x3342c7ad; S=0x3342c7c1; @synthesize=_lastKnownCTag
@property(readonly, assign) NSDictionary *uuidToErrorItems;	// G=0x3342c7f9; @synthesize=_uuidToErrorItems
@property(readonly, assign) NSDictionary *uuidToHREF;	// G=0x3342c7d1; @synthesize=_uuidToHREF
@property(readonly, assign) NSDictionary *uuidToStatus;	// G=0x3342c821; @synthesize=_uuidToStatus
@property(readonly, assign) BOOL validCTag;	// G=0x3342c795; @synthesize=_validCTag
- (id)initWithFolderURL:(id)folderURL checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3342b8f1
- (void)_sendNextBatch;	// 0x3342bd91
// declared property getter: - (void *)context;	// 0x3342c781
- (void)dealloc;	// 0x3342bb5d
- (id)description;	// 0x3342bc61
// declared property getter: - (id)folderURL;	// 0x3342c76d
// declared property getter: - (id)hrefToETag;	// 0x3342c7e5
// declared property getter: - (id)hrefToErrorItems;	// 0x3342c80d
// declared property getter: - (id)hrefToStatus;	// 0x3342c835
// declared property getter: - (unsigned)multiPutBatchMaxNumResources;	// 0x3342c715
// declared property getter: - (unsigned)multiPutBatchMaxSize;	// 0x3342c741
- (Class)multiPutTaskClass;	// 0x3342bd49
// declared property getter: - (id)nextCTag;	// 0x3342c7ad
// declared property setter: - (void)setMultiPutBatchMaxNumResources:(unsigned)resources;	// 0x3342c729
// declared property setter: - (void)setMultiPutBatchMaxSize:(unsigned)size;	// 0x3342c755
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x3342c7c1
- (void)startTaskGroup;	// 0x3342c3d9
- (void)syncAway;	// 0x3342c3e9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3342c3f9
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3342bcf5
// declared property getter: - (id)uuidToErrorItems;	// 0x3342c7f9
// declared property getter: - (id)uuidToHREF;	// 0x3342c7d1
// declared property getter: - (id)uuidToStatus;	// 0x3342c821
// declared property getter: - (BOOL)validCTag;	// 0x3342c795
@end

