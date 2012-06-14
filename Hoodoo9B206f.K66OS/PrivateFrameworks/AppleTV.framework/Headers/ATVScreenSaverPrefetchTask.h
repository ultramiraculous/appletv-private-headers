/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class NSArray, NSMutableDictionary, NSMutableArray, NSTimer;

@interface ATVScreenSaverPrefetchTask : BRBackgroundTask {
@private
	int _index;	// 44 = 0x2c
	NSArray *_assets;	// 48 = 0x30
	NSMutableArray *_loadingIDs;	// 52 = 0x34
	NSMutableDictionary *_faces;	// 56 = 0x38
	NSTimer *_timer;	// 60 = 0x3c
	int _loadAttemptCount;	// 64 = 0x40
}
- (void)_imageLoadFailed:(id)failed;	// 0x365d7165
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x365d70ed
- (void)_prefetch;	// 0x365d6e95
- (void)_reset;	// 0x365d6ab9
- (void)_screenSaverDataReady:(id)ready;	// 0x365d6bc9
- (void)_startPrefetchForItems:(id)items;	// 0x365d6d0d
- (void)_updateFacesCacheWithFaces:(id)faces;	// 0x365d71e1
- (void)dealloc;	// 0x365d6781
- (BOOL)isActive;	// 0x365d6a95
- (BOOL)perform:(id)perform;	// 0x365d6825
- (void)stop;	// 0x365d6a3d
@end
