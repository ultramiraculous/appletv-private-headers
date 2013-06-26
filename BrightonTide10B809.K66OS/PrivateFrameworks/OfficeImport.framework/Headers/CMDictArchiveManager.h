/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSString;

@interface CMDictArchiveManager : CMArchiveManager {
	NSMutableString *mCssString;	// 44 = 0x2c
	NSMutableDictionary *mStyleCache;	// 48 = 0x30
	NSMutableDictionary *mResources;	// 52 = 0x34
	NSString *mPrefix;	// 56 = 0x38
	NSString *mResourceUrlProtocol;	// 60 = 0x3c
	NSMutableString *mMainHtml;	// 64 = 0x40
	NSString *mName;	// 68 = 0x44
	bool mIsFrameset;	// 72 = 0x48
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x349d9d05
- (id)addCssStyle:(id)style;	// 0x349da2c5
- (void)addCssStyle:(id)style withName:(id)name;	// 0x349da39d
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x349da0f1
- (id)copyResourceWithName:(id)name;	// 0x349d9edd
- (id)cssStylesheetString;	// 0x349da4cd
- (void)dealloc;	// 0x349d9e2d
- (id)name;	// 0x349d9ecd
- (void)pushCssToPath:(id)path;	// 0x349da3f5
- (void)pushData:(id)data toPath:(id)path;	// 0x349d9f9d
- (void)pushText:(id)text toPath:(id)path;	// 0x349da075
- (int)resourceCount;	// 0x349da295
- (id)resourceUrlProtocol;	// 0x349da2b5
- (void)setIsFrameset;	// 0x349d9eb9
@end
