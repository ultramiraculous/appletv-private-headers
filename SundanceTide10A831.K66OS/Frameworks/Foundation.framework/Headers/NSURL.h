/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSURL.h> // Unknown library


@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x325123bd
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x325123d1
+ (id)allocWithZone:(NSZone *)zone;	// 0x3250b841
+ (id)fileURLWithPath:(id)path;	// 0x3250b801
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x32537b7d
- (id)init;	// 0x325b80f9
- (id)initFileURLWithPath:(id)path;	// 0x3250b8b5
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x32537bc1
- (id)initWithCoder:(id)coder;	// 0x3251fa51
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x325b8111
- (id)initWithString:(id)string;	// 0x32513cd9
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x32512419
- (unsigned long)_cfTypeID;	// 0x325b7cf5
- (CFURLRef)_cfurl;	// 0x325040cd
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x325b7d65
- (void)_freeClients;	// 0x325b7dad
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x325b7cf9
- (BOOL)_isAbsolute;	// 0x325b7f25
- (BOOL)_isDeallocating;	// 0x325b7c0d
- (id)_relativeURLPath;	// 0x325b7ee9
- (BOOL)_tryRetain;	// 0x325b7ba1
- (id)absoluteString;	// 0x32509ec1
- (id)absoluteURL;	// 0x32509a55
- (id)baseURL;	// 0x32537761
- (id)copyWithZone:(NSZone *)zone;	// 0x32515ccd
- (void)dealloc;	// 0x325b7de9
- (id)description;	// 0x325376d9
- (void)encodeWithCoder:(id)coder;	// 0x325b82d9
- (void)finalize;	// 0x325b7e79
- (id)fragment;	// 0x3254a7d9
- (unsigned)hash;	// 0x32515d09
- (id)host;	// 0x32509a91
- (BOOL)isEqual:(id)equal;	// 0x32509f71
- (BOOL)isFileURL;	// 0x32509acd
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32509fdd
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x325b7c75
- (id)parameterString;	// 0x325b8891
- (id)password;	// 0x325b87c1
- (id)path;	// 0x32504085
- (id)port;	// 0x325b8741
- (id)query;	// 0x32522ba5
- (id)relativePath;	// 0x325b8855
- (id)relativeString;	// 0x3253777d
- (oneway void)release;	// 0x3250ad21
- (id)resourceSpecifier;	// 0x325b7f61
- (id)retain;	// 0x32509f09
- (unsigned)retainCount;	// 0x325b7b3d
- (id)scheme;	// 0x32509b19
- (id)standardizedURL;	// 0x325b84ad
- (id)user;	// 0x325b8785
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x325b9325
- (id)URLByAppendingPathComponent:(id)component;	// 0x325b9505
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x325b9471
- (id)URLByAppendingPathExtension:(id)extension;	// 0x325b9661
- (id)URLByDeletingLastPathComponent;	// 0x325b9625
- (id)URLByDeletingPathExtension;	// 0x325b96e5
- (id)URLByResolvingSymlinksInPath;	// 0x325b97e5
- (id)URLByStandardizingPath;	// 0x325b9721
- (id)lastPathComponent;	// 0x325b9421
- (id)pathComponents;	// 0x325b93f9
- (id)pathExtension;	// 0x325b9449
@end

@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x325b98a9
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x325c2e81
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x325c2e65
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x325c2f91
- (BOOL)_web_isJavaScriptURL;	// 0x325c379d
- (id)_web_scriptIfJavaScriptURL;	// 0x325c34f5
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x325c3559
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x325c3ca5
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x325c3c59
- (id)_URLByEscapingSpacesAndControlChars;	// 0x325c3af5
- (id)_hostString;	// 0x325c3d91
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x325c37c5
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x325c38fd
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x325c39b5
@end

