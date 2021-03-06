/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x32355535
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x3235d35d
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x3235d365
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x32307ce5
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x32308099
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x323062fd
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x3235d355
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x3235dcb9
- (id)_web_URLByRemovingUserInfo;	// 0x3235d439
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x3235d421
- (const char *)_web_URLCString;	// 0x3235d3ad
- (id)_web_URLWithLowercasedScheme;	// 0x3235d511
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x3235d6b5
- (id)_web_hostData;	// 0x3235d6c5
- (id)_web_hostString;	// 0x3235d725
- (BOOL)_web_isEmpty;	// 0x3235d371
- (id)_web_originalData;	// 0x3235d36d
- (id)_web_originalDataAsString;	// 0x323070d5
- (id)_web_schemeData;	// 0x3235d6bd
- (id)_web_schemeSeparatorWithoutColon;	// 0x3235d625
- (id)_web_userVisibleString;	// 0x3230750d
- (id)_webkit_URLByRemovingFragment;	// 0x3235d429
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x3235d431
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// 0x3235d7b5
- (id)_webkit_canonicalize;	// 0x3230c51d
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x3235d48d
- (BOOL)_webkit_isFileURL;	// 0x3235d465
- (BOOL)_webkit_isJavaScriptURL;	// 0x3235d43d
- (id)_webkit_scriptIfJavaScriptURL;	// 0x3230d241
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x3235d4b5
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x3235d7ad
- (id)_webkit_youTubeURL;	// 0x3235d825
@end

