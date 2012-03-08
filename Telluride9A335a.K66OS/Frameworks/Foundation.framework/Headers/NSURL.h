/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSURL.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x32010e55
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x32010e69
+ (id)allocWithZone:(NSZone *)zone;	// 0x32010eb1
+ (id)fileURLWithPath:(id)path;	// 0x32012fe1
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x32013465
- (id)init;	// 0x320b0381
- (id)initFileURLWithPath:(id)path;	// 0x32013021
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x320134a9
- (id)initWithCoder:(id)coder;	// 0x320500c9
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x320b0399
- (id)initWithString:(id)string;	// 0x32024829
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x32010f29
- (unsigned long)_cfTypeID;	// 0x320b0149
- (CFURLRef)_cfurl;	// 0x32006f35
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x320b01b9
- (void)_freeClients;	// 0x320b0205
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x320b014d
- (BOOL)_isAbsolute;	// 0x3204b7cd
- (BOOL)_isDeallocating;	// 0x320b005d
- (id)_relativeURLPath;	// 0x320b0345
- (BOOL)_tryRetain;	// 0x320affed
- (id)absoluteString;	// 0x3202483d
- (id)absoluteURL;	// 0x3202dda1
- (id)baseURL;	// 0x320484d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3204831d
- (void)dealloc;	// 0x320b0241
- (id)description;	// 0x32048451
- (void)encodeWithCoder:(id)coder;	// 0x320501c5
- (void)finalize;	// 0x320b02d1
- (id)fragment;	// 0x32046f99
- (unsigned)hash;	// 0x3204f319
- (id)host;	// 0x320120b5
- (BOOL)isEqual:(id)equal;	// 0x320416ad
- (BOOL)isFileURL;	// 0x3201b055
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32035231
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x320b00c5
- (id)parameterString;	// 0x320b08ad
- (id)password;	// 0x320b07dd
- (id)path;	// 0x32006eed
- (id)port;	// 0x32049321
- (id)query;	// 0x3202ba41
- (id)relativePath;	// 0x320b0871
- (id)relativeString;	// 0x320484f5
- (oneway void)release;	// 0x3201703d
- (id)resourceSpecifier;	// 0x3204b63d
- (id)retain;	// 0x32016fd1
- (unsigned)retainCount;	// 0x320aff85
- (id)scheme;	// 0x32012555
- (id)standardizedURL;	// 0x320b056d
- (id)user;	// 0x320492e5
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x320b1275
- (id)URLByAppendingPathComponent:(id)component;	// 0x320b13c1
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x32051fe5
- (id)URLByAppendingPathExtension:(id)extension;	// 0x320b1531
- (id)URLByDeletingLastPathComponent;	// 0x320b14f5
- (id)URLByDeletingPathExtension;	// 0x320b15b5
- (id)URLByResolvingSymlinksInPath;	// 0x320b167d
- (id)URLByStandardizingPath;	// 0x320b15f1
- (id)lastPathComponent;	// 0x320b1371
- (id)pathComponents;	// 0x320b1349
- (id)pathExtension;	// 0x320b1399
@end

@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x320b1709
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x320ba365
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x320ba349
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x320ba471
- (BOOL)_web_isJavaScriptURL;	// 0x320bac89
- (id)_web_scriptIfJavaScriptURL;	// 0x320ba9cd
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x320baa31
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x320bb121
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x320bb0d5
- (id)_URLByEscapingSpacesAndControlChars;	// 0x320bafa1
- (id)_hostString;	// 0x320bb20d
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x320bacb1
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x320badc5
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x320bae81
@end
