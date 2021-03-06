/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RTF_CMProgressiveArchiveManager : RTF_CMArchiveManager {
	const void *mClient;	// 32 = 0x20
	XXStruct_6QhCXB *mCallBacks;	// 36 = 0x24
	NSMutableDictionary *mDataCache;	// 40 = 0x28
	NSMutableDictionary *mStyleCache;	// 44 = 0x2c
	NSMutableString *mCssString;	// 48 = 0x30
	BOOL mMainDataInited;	// 52 = 0x34
	NSMutableString *mHtmlLogString;	// 56 = 0x38
}
- (id)initWithClient:(const void *)client andCallBacks:(XXStruct_6QhCXB *)backs;	// 0x30e06dc5
- (id)addCssStyle:(id)style;	// 0x30e07359
- (void)addCssStyle:(id)style withName:(id)name;	// 0x30e07431
- (void)closeResourceAtPath:(id)path;	// 0x30e07305
- (void)commitDataAtPath:(id)path;	// 0x30e071b5
- (id)cssStylesheetString;	// 0x30e07575
- (void)dealloc;	// 0x30e06e9d
- (BOOL)isProgressive;	// 0x30e06f35
- (id)newResourceWithName:(id)name;	// 0x30e06f39
- (void)pushCssToPath:(id)path;	// 0x30e07489
- (void)pushData:(id)data toPath:(id)path;	// 0x30e07055
- (void)pushText:(id)text toPath:(id)path;	// 0x30e0713d
@end

