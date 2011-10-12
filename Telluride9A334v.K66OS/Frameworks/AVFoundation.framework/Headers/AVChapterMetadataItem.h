/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataItem.h"
#import "AVFoundation-Structs.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x354329dd
- (void)_addFigAssetNotifications;	// 0x35434089
- (long)_chapterGroupIndex;	// 0x354319d1
- (long)_chapterIndex;	// 0x354319f1
- (void)_ensureValueLoadedSync;	// 0x35433715
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x354341dd
- (void)_removeFigAssetNotifications;	// 0x35433f49
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x354337fd
- (void)_takeValueFrom:(id)from;	// 0x35433a29
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x354332fd
- (int)_valueStatus;	// 0x354339a5
- (void)cancelLoading;	// 0x35432d71
- (id)commonKey;	// 0x35431911
- (id)copyWithZone:(NSZone *)zone;	// 0x35432a39
- (void)dealloc;	// 0x35433e31
- (id)description;	// 0x35433c4d
- (XXStruct_pwHToB)duration;	// 0x35431999
- (id)extraAttributes;	// 0x354334a1
- (void)finalize;	// 0x35433da9
- (id)key;	// 0x354318f1
- (id)keySpace;	// 0x35431931
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x35433515
- (id)locale;	// 0x35431941
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35432a49
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x354336ad
- (XXStruct_pwHToB)time;	// 0x35431961
- (id)value;	// 0x35432ba1
@end

