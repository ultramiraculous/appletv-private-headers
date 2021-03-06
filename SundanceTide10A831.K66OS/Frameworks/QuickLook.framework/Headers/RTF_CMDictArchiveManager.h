/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTF_CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {
	NSMutableString *mCssString;	// 32 = 0x20
	NSMutableDictionary *mStyleCache;	// 36 = 0x24
	NSMutableDictionary *mResources;	// 40 = 0x28
	NSString *mPrefix;	// 44 = 0x2c
	NSString *mResourceUrlProtocol;	// 48 = 0x30
	NSMutableString *mMainHtml;	// 52 = 0x34
	NSString *mName;	// 56 = 0x38
	bool mIsFrameset;	// 60 = 0x3c
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x3329e609
- (id)addCssStyle:(id)style;	// 0x3329ebad
- (void)addCssStyle:(id)style withName:(id)name;	// 0x3329ec85
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x3329e9e5
- (id)cssStylesheetString;	// 0x3329edb5
- (void)dealloc;	// 0x3329e721
- (id)name;	// 0x3329e7c1
- (id)newResourceWithName:(id)name;	// 0x3329e7d1
- (void)pushCssToPath:(id)path;	// 0x3329ecdd
- (void)pushData:(id)data toPath:(id)path;	// 0x3329e891
- (void)pushText:(id)text toPath:(id)path;	// 0x3329e969
- (int)resourceCount;	// 0x3329eb7d
- (id)resourceUrlProtocol;	// 0x3329eb9d
- (void)setIsFrameset;	// 0x3329e7ad
@end

