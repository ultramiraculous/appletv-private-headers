/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@interface NSURL : NSObject <NSCoding, NSCopying> {
	NSString *_urlString;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	void *_clients;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (id)URLByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x32ec3f9d
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;	// 0x32ec4095
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)bookmarkData;	// 0x32ec4021
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32ec4055
- (id)initByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x32ec3f21
- (id)bookmarkDataWithAliasRecord:(id)aliasRecord;	// 0x32ec3b2d
- (id)bookmarkDataWithOptions:(unsigned)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;	// 0x32ec3e89
- (BOOL)checkResourceIsReachableAndReturnError:(id *)error;	// 0x32ec3d19
- (id)filePathURL;	// 0x32ec3df5
- (id)fileReferenceURL;	// 0x32ec3d75
- (BOOL)getResourceValue:(id *)value forKey:(id)key error:(id *)error;	// 0x32ec3b5d
- (BOOL)isFileReferenceURL;	// 0x32ec3a95
- (id)resourceValuesForKeys:(id)keys error:(id *)error;	// 0x32ec3be5
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;	// 0x32ec3c4d
- (BOOL)setResourceValues:(id)values error:(id *)error;	// 0x32ec3cb9
@end

