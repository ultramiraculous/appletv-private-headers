/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x36889ead
- (void)_addFigAssetNotifications;	// 0x3688a149
- (long)_chapterGroupIndex;	// 0x3688ae7d
- (long)_chapterIndex;	// 0x3688ae9d
- (void)_ensureValueLoadedSync;	// 0x3688b4d9
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x36889f0d
- (void)_removeFigAssetNotifications;	// 0x3688a4f9
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x3688b0f9
- (void)_takeValueFrom:(id)from;	// 0x3688abe5
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x3688aebd
- (int)_valueStatus;	// 0x3688af79
- (void)cancelLoading;	// 0x3688b8b1
- (id)commonKey;	// 0x3688aab5
- (id)copyWithZone:(NSZone *)zone;	// 0x3688a7a1
- (void)dealloc;	// 0x3688a609
- (id)description;	// 0x3688a911
- (XXStruct_pwHToB)duration;	// 0x3688ab49
- (id)extraAttributes;	// 0x3688ae05
- (void)finalize;	// 0x3688a715
- (id)key;	// 0x3688aa95
- (id)keySpace;	// 0x3688aad5
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3688b625
- (id)locale;	// 0x3688aae5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3688a7b1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3688b5bd
- (XXStruct_pwHToB)time;	// 0x3688ab05
- (id)value;	// 0x3688ab8d
@end

