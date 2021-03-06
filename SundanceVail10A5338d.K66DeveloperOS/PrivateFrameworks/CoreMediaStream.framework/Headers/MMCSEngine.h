/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary, NSMutableArray, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue, MMCSEngineDelegate;

@interface MMCSEngine : NSObject {
	NSURL *_workPathURL;	// 4 = 0x4
	NSString *_appIDHeader;	// 8 = 0x8
	NSString *_dataClass;	// 12 = 0xc
	NSDictionary *_options;	// 16 = 0x10
	MMCSEngineRef _engine;	// 20 = 0x14
	struct {
		int version;
		void *context;
		/*function-pointer*/ void *getFileDescriptorAndContentTypeFromItemCallback;
		/*function-pointer*/ void *getItemProgressCallback;
		/*function-pointer*/ void *getItemDoneCallback;
		/*function-pointer*/ void *putItemProgressCallback;
		/*function-pointer*/ void *putItemDoneCallback;
		/*function-pointer*/ void *requestCompletedCallback;
	} _engineClientContext;	// 24 = 0x18
	NSMutableDictionary *_itemIDToAssetProxyMap;	// 56 = 0x38
	NSObject<OS_dispatch_queue> *_itemIDToAssetProxyMapQueue;	// 60 = 0x3c
	NSMutableDictionary *_contextToRequestorContextMap;	// 64 = 0x40
	NSMutableArray *_requestorContexts;	// 68 = 0x44
	NSObject<OS_dispatch_queue> *_contextToReqestorContextMapQueue;	// 72 = 0x48
	NSMutableDictionary *_autoItemIDDictionary;	// 76 = 0x4c
	NSURL *_autoItemIDPersistenceURL;	// 80 = 0x50
	NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;	// 84 = 0x54
	id<MMCSEngineDelegate> _delegate;	// 88 = 0x58
	BOOL _autoGenerateItemID;	// 92 = 0x5c
	BOOL _isMetricsGatheringEnabled;	// 93 = 0x5d
}
@property(assign, nonatomic) BOOL autoGenerateItemID;	// G=0x33784901; S=0x33784911; @synthesize=_autoGenerateItemID
@property(assign, nonatomic) __weak id<MMCSEngineDelegate> delegate;	// G=0x337848cd; S=0x337848ed; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL hasOutstandingActivity;	// G=0x33781a65; 
@property(assign, nonatomic) BOOL isMetricsGatheringEnabled;	// G=0x33784921; S=0x33782105; @synthesize=_isMetricsGatheringEnabled
+ (id)logStringForGetItemState:(int)getItemState;	// 0x337847c9
+ (id)logStringForPutItemState:(int)putItemState;	// 0x3378483d
- (id)initWithWorkPath:(id)workPath appIDHeader:(id)header dataClass:(id)aClass options:(id)options;	// 0x33781fc5
- (id)initWithWorkPath:(id)workPath appIDHeader:(id)header dataClass:(id)aClass options:(id)options runloop:(id)runloop modes:(id)modes;	// 0x33781a69
- (void).cxx_destruct;	// 0x33784931
- (id)_assetProxyWithItemID:(unsigned long long)itemID;	// 0x33783f39
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)itemID outFD:(int *)fd outItemType:(id *)type outError:(id *)error;	// 0x337821b1
- (void)_getItemDoneItemID:(unsigned long long)anId path:(id)path requestorContext:(id)context error:(id)error;	// 0x3378255d
- (void)_getItemProgressItemID:(unsigned long long)anId state:(int)state progress:(double)progress requestorContext:(id)context error:(id)error;	// 0x337823d9
- (void)_initItemIDPersistence;	// 0x33784571
- (void)_logLevel:(int)level message:(id)message;	// 0x33783ce9
- (unsigned long long)_nextItemID;	// 0x33784601
- (void)_putItemDoneItemID:(unsigned long long)anId requestorContext:(id)context error:(id)error;	// 0x33782855
- (void)_putItemProgressItemID:(unsigned long long)anId state:(int)state progress:(double)progress requestorContext:(id)context error:(id)error;	// 0x337826d1
- (void)_registerAssetProxy:(id)proxy;	// 0x33783ded
- (void)_registerRequestorContext:(id)context;	// 0x337841b1
- (void)_removeAssetProxyForItemID:(unsigned long long)itemID;	// 0x337840d1
- (void)_removeRequestorContextForContext:(id)context;	// 0x3378446d
- (void)_requestCompletedRequestorContext:(id)context;	// 0x337829b5
- (id)_requestorContextForContext:(id)context;	// 0x337842f9
// declared property getter: - (BOOL)autoGenerateItemID;	// 0x33784901
- (void)cancelAllOperations;	// 0x33782d25
- (void)cancelOperationsWithContext:(id)context;	// 0x33782c99
- (void)dealloc;	// 0x337820c1
// declared property getter: - (id)delegate;	// 0x337848cd
- (void)destroy;	// 0x33782b75
- (void)getAssets:(id)assets requestURL:(id)url DSID:(id)dsid options:(id)options context:(id)context;	// 0x337833ed
// declared property getter: - (BOOL)hasOutstandingActivity;	// 0x33781a65
- (BOOL)isActive;	// 0x33782d39
// declared property getter: - (BOOL)isMetricsGatheringEnabled;	// 0x33784921
- (void)putAssets:(id)assets requestURL:(id)url DSID:(id)dsid options:(id)options context:(id)context;	// 0x33783855
- (void)registerAssetForDownload:(id)download;	// 0x337830bd
- (BOOL)registerAssetForUpload:(id)upload outError:(id *)error;	// 0x33782d55
- (void)reregisterAssetForDownload:(id)download;	// 0x3378304d
- (void)reregisterAssetForUpload:(id)upload;	// 0x33782fdd
// declared property setter: - (void)setAutoGenerateItemID:(BOOL)anId;	// 0x33784911
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337848ed
// declared property setter: - (void)setIsMetricsGatheringEnabled:(BOOL)enabled;	// 0x33782105
- (void)unregisterAsset:(id)asset;	// 0x33783195
- (void)unregisterAssets:(id)assets;	// 0x33783239
@end

