/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebCoreStatistics : NSObject {
}
+ (int)autoreleasedPageCount;	// 0x30800f69
+ (unsigned long)cachedFontDataCount;	// 0x30800af9
+ (unsigned long)cachedFontDataInactiveCount;	// 0x30800b09
+ (int)cachedFrameCount;	// 0x30800f59
+ (int)cachedPageCount;	// 0x30800f4d
+ (void)emptyCache;	// 0x307f85c5
+ (void)garbageCollectJavaScriptObjects;	// 0x30800a7d
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)debugging;	// 0x30800a8d
+ (unsigned long)glyphPageCount;	// 0x30800b2d
+ (unsigned long)iconPageURLMappingCount;	// 0x30800aa9
+ (unsigned long)iconRecordCount;	// 0x30800ad1
+ (unsigned long)iconRetainedPageURLCount;	// 0x30800abd
+ (unsigned long)iconsWithDataCount;	// 0x30800ae5
+ (unsigned long)javaScriptGlobalObjectsCount;	// 0x308003f9
+ (unsigned long)javaScriptInterpretersCount;	// 0x30801059
+ (unsigned long)javaScriptNoGCAllowedObjectsCount;	// 0x30800f79
+ (id)javaScriptObjectTypeCounts;	// 0x3080086d
+ (unsigned long)javaScriptObjectsCount;	// 0x3080032d
+ (unsigned long)javaScriptProtectedGlobalObjectsCount;	// 0x30800591
+ (id)javaScriptProtectedObjectTypeCounts;	// 0x3080065d
+ (unsigned long)javaScriptProtectedObjectsCount;	// 0x308004c5
+ (unsigned long)javaScriptReferencedObjectsCount;	// 0x30800f7d
+ (id)javaScriptRootObjectClasses;	// 0x30801049
+ (id)javaScriptRootObjectTypeCounts;	// 0x30801069
+ (id)memoryStatistics;	// 0x30800cdd
+ (void)purgeInactiveFontData;	// 0x30800b19
+ (void)returnFreeMemoryToSystem;	// 0x30800f49
+ (void)setCacheDisabled:(BOOL)disabled;	// 0x30800cb9
+ (void)setShouldPrintExceptions:(BOOL)printExceptions;	// 0x30800bf1
+ (BOOL)shouldPrintExceptions;	// 0x30800b31
+ (void)startIgnoringWebCoreNodeLeaks;	// 0x30800cd5
+ (id)statistics;	// 0x30800311
+ (void)stopIgnoringWebCoreNodeLeaks;	// 0x30800cd9
@end

