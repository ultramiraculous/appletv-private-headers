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
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x33b1c4e1
- (id)addCssStyle:(id)style;	// 0x33b1ca85
- (void)addCssStyle:(id)style withName:(id)name;	// 0x33b1cb5d
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x33b1c8bd
- (id)cssStylesheetString;	// 0x33b1cc8d
- (void)dealloc;	// 0x33b1c5f9
- (id)name;	// 0x33b1c699
- (id)newResourceWithName:(id)name;	// 0x33b1c6a9
- (void)pushCssToPath:(id)path;	// 0x33b1cbb5
- (void)pushData:(id)data toPath:(id)path;	// 0x33b1c769
- (void)pushText:(id)text toPath:(id)path;	// 0x33b1c841
- (int)resourceCount;	// 0x33b1ca55
- (id)resourceUrlProtocol;	// 0x33b1ca75
- (void)setIsFrameset;	// 0x33b1c685
@end
