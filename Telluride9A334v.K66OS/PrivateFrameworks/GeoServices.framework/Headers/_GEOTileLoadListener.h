/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSLock, GEOTileKeyList, NSError;

__attribute__((visibility("hidden")))
@interface _GEOTileLoadListener : NSObject {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_networkLoadList;	// 20 = 0x14
	GEOTileKeyList *_satisfiedList;	// 24 = 0x18
	BOOL _finishWhenDecoded;	// 28 = 0x1c
	int _tilesDecoding;	// 32 = 0x20
	NSError *_noNetworkError;	// 36 = 0x24
	NSLock *_callbacksLock;	// 40 = 0x28
}
@property(copy, nonatomic) id error;	// G=0x32c64a2d; S=0x32c64a3d; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x32c649f9; S=0x32c64a09; @synthesize=_finished
@property(retain, nonatomic) GEOTileKeyList *networkLoadList;	// G=0x32c64a95; S=0x32c64aa5; @synthesize=_networkLoadList
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x32c64a61; S=0x32c64a71; @synthesize=_originalList
@property(copy, nonatomic) id progress;	// G=0x32c649c5; S=0x32c649d5; @synthesize=_progress
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x32c64ac9; S=0x32c64ad9; @synthesize=_satisfiedList
- (id)init;	// 0x32c644fd
- (void)addSatisfiedKey:(const GEOTileKey *)key;	// 0x32c64639
- (void)beginDecode;	// 0x32c6469d
- (void)dealloc;	// 0x32c64561
- (void)endDecode;	// 0x32c646b1
// declared property getter: - (id)error;	// 0x32c64a2d
- (void)finishDecodingAndSendError:(id)error;	// 0x32c64895
- (void)finishWhenDecoded;	// 0x32c64801
// declared property getter: - (id)finished;	// 0x32c649f9
- (void)lockCallbacks;	// 0x32c64985
// declared property getter: - (id)networkLoadList;	// 0x32c64a95
// declared property getter: - (id)originalList;	// 0x32c64a61
// declared property getter: - (id)progress;	// 0x32c649c5
// declared property getter: - (id)satisfiedList;	// 0x32c64ac9
// declared property setter: - (void)setError:(id)error;	// 0x32c64a3d
// declared property setter: - (void)setFinished:(id)finished;	// 0x32c64a09
// declared property setter: - (void)setNetworkLoadList:(id)list;	// 0x32c64aa5
// declared property setter: - (void)setOriginalList:(id)list;	// 0x32c64a71
// declared property setter: - (void)setProgress:(id)progress;	// 0x32c649d5
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x32c64ad9
- (void)unlockCallbacks;	// 0x32c649a5
@end
