/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface NSURL : NSObject <NSCoding, NSCopying> {
	NSString *_urlString;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	void *_clients;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (id)URLByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x35327a6d
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;	// 0x35327b59
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)bookmarkData;	// 0x35327ae9
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35327b21
- (id)initByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x35327879
- (id)bookmarkDataWithAliasRecord:(id)aliasRecord;	// 0x35327bad
- (id)bookmarkDataWithOptions:(unsigned)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;	// 0x353277ed
- (BOOL)checkResourceIsReachableAndReturnError:(id *)error;	// 0x35327679
- (id)filePathURL;	// 0x35327751
- (id)fileReferenceURL;	// 0x353276cd
- (BOOL)getResourceValue:(out id *)value forKey:(id)key error:(out id *)error;	// 0x352b7bad
- (BOOL)isFileReferenceURL;	// 0x352b3159
- (id)resourceValuesForKeys:(id)keys error:(id *)error;	// 0x35327549
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;	// 0x353275b5
- (BOOL)setResourceValues:(id)values error:(id *)error;	// 0x35327621
@end

