/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSURL.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x31579e45
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x31579e59
+ (id)allocWithZone:(NSZone *)zone;	// 0x31579ea1
+ (id)fileURLWithPath:(id)path;	// 0x3157bfd1
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x3157c455
- (id)init;	// 0x31619371
- (id)initFileURLWithPath:(id)path;	// 0x3157c011
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x3157c499
- (id)initWithCoder:(id)coder;	// 0x315b90b9
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x31619389
- (id)initWithString:(id)string;	// 0x3158d819
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x31579f19
- (unsigned long)_cfTypeID;	// 0x31619139
- (CFURLRef)_cfurl;	// 0x3156ff25
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x316191a9
- (void)_freeClients;	// 0x316191f5
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x3161913d
- (BOOL)_isAbsolute;	// 0x315b47bd
- (BOOL)_isDeallocating;	// 0x3161904d
- (id)_relativeURLPath;	// 0x31619335
- (BOOL)_tryRetain;	// 0x31618fdd
- (id)absoluteString;	// 0x3158d82d
- (id)absoluteURL;	// 0x31596d91
- (id)baseURL;	// 0x315b14c9
- (id)copyWithZone:(NSZone *)zone;	// 0x315b130d
- (void)dealloc;	// 0x31619231
- (id)description;	// 0x315b1441
- (void)encodeWithCoder:(id)coder;	// 0x315b91b5
- (void)finalize;	// 0x316192c1
- (id)fragment;	// 0x315aff89
- (unsigned)hash;	// 0x315b8309
- (id)host;	// 0x3157b0a5
- (BOOL)isEqual:(id)equal;	// 0x315aa69d
- (BOOL)isFileURL;	// 0x31584045
- (BOOL)isKindOfClass:(Class)aClass;	// 0x3159e221
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x316190b5
- (id)parameterString;	// 0x3161989d
- (id)password;	// 0x316197cd
- (id)path;	// 0x3156fedd
- (id)port;	// 0x315b2311
- (id)query;	// 0x31594a31
- (id)relativePath;	// 0x31619861
- (id)relativeString;	// 0x315b14e5
- (oneway void)release;	// 0x3158002d
- (id)resourceSpecifier;	// 0x315b462d
- (id)retain;	// 0x3157ffc1
- (unsigned)retainCount;	// 0x31618f75
- (id)scheme;	// 0x3157b545
- (id)standardizedURL;	// 0x3161955d
- (id)user;	// 0x315b22d5
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x3161a265
- (id)URLByAppendingPathComponent:(id)component;	// 0x3161a3b1
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x315bafd5
- (id)URLByAppendingPathExtension:(id)extension;	// 0x3161a521
- (id)URLByDeletingLastPathComponent;	// 0x3161a4e5
- (id)URLByDeletingPathExtension;	// 0x3161a5a5
- (id)URLByResolvingSymlinksInPath;	// 0x3161a66d
- (id)URLByStandardizingPath;	// 0x3161a5e1
- (id)lastPathComponent;	// 0x3161a361
- (id)pathComponents;	// 0x3161a339
- (id)pathExtension;	// 0x3161a389
@end

@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3161a6f9
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x31623355
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x31623339
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x31623461
- (BOOL)_web_isJavaScriptURL;	// 0x31623c79
- (id)_web_scriptIfJavaScriptURL;	// 0x316239bd
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x31623a21
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x31624111
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x316240c5
- (id)_URLByEscapingSpacesAndControlChars;	// 0x31623f91
- (id)_hostString;	// 0x316241fd
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x31623ca1
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x31623db5
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x31623e71
@end
