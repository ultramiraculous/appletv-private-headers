/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSLock, GEOTileUsageInfo, NSError, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEOTileLoadListener : NSObject {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_networkLoadList;	// 20 = 0x14
	GEOTileKeyList *_satisfiedList;	// 24 = 0x18
	CFRunLoopRef _runloop;	// 28 = 0x1c
	BOOL _finishWhenDecoded;	// 32 = 0x20
	int _tilesDecoding;	// 36 = 0x24
	NSError *_finishError;	// 40 = 0x28
	NSLock *_callbacksLock;	// 44 = 0x2c
	BOOL _checkDiskAllowed;	// 48 = 0x30
	BOOL _preload;	// 49 = 0x31
	GEOTileUsageInfo *_usageInfo;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL checkDiskAllowed;	// G=0x34512a1d; S=0x34512a2d; @synthesize=_checkDiskAllowed
@property(copy, nonatomic) id error;	// G=0x34512999; S=0x345129ad; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x34512975; S=0x34512989; @synthesize=_finished
@property(retain, nonatomic) GEOTileKeyList *networkLoadList;	// G=0x345129dd; S=0x345129ed; @synthesize=_networkLoadList
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x345129bd; S=0x345129cd; @synthesize=_originalList
@property(assign, nonatomic, getter=isPreload) BOOL preload;	// G=0x34512a3d; S=0x34512a4d; @synthesize=_preload
@property(copy, nonatomic) id progress;	// G=0x34512951; S=0x34512965; @synthesize=_progress
@property(readonly, assign) CFRunLoopRef runloop;	// G=0x345123ed; converted property
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x345129fd; S=0x34512a0d; @synthesize=_satisfiedList
- (id)init;	// 0x3451216d
- (void)_tryFinish;	// 0x34512411
- (void)addSatisfiedKey:(const GEOTileKey *)key fromDisk:(BOOL)disk dataLength:(unsigned)length;	// 0x3451234d
- (void)beginDecode;	// 0x345123fd
// declared property getter: - (BOOL)checkDiskAllowed;	// 0x34512a1d
- (void)dealloc;	// 0x3451224d
- (void)endDecode;	// 0x34512669
// declared property getter: - (id)error;	// 0x34512999
- (void)finishDecodingAndSendError:(id)error;	// 0x345126e5
- (void)finishWhenDecoded;	// 0x3451268d
// declared property getter: - (id)finished;	// 0x34512975
// declared property getter: - (BOOL)isPreload;	// 0x34512a3d
- (void)lockCallbacks;	// 0x34512911
// declared property getter: - (id)networkLoadList;	// 0x345129dd
// declared property getter: - (id)originalList;	// 0x345129bd
// declared property getter: - (id)progress;	// 0x34512951
// converted property getter: - (CFRunLoopRef)runloop;	// 0x345123ed
// declared property getter: - (id)satisfiedList;	// 0x345129fd
// declared property setter: - (void)setCheckDiskAllowed:(BOOL)allowed;	// 0x34512a2d
// declared property setter: - (void)setError:(id)error;	// 0x345129ad
// declared property setter: - (void)setFinished:(id)finished;	// 0x34512989
// declared property setter: - (void)setNetworkLoadList:(id)list;	// 0x345129ed
// declared property setter: - (void)setOriginalList:(id)list;	// 0x345129cd
// declared property setter: - (void)setPreload:(BOOL)preload;	// 0x34512a4d
// declared property setter: - (void)setProgress:(id)progress;	// 0x34512965
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x34512a0d
- (void)unlockCallbacks;	// 0x34512931
@end
