/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CALExtensions)
+ (id)davCompatibleFilenameForFilename:(id)filename;	// 0x337fc121
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)filename;	// 0x337fc201
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port path:(id)path;	// 0x337fc439
- (id)URLByRemovingLastPathComponent;	// 0x337fc2f5
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x337fbef1
- (BOOL)isEqualToURL:(id)url;	// 0x337fc685
- (id)lastPathComponent;	// 0x337fc3ed
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// 0x337fc749
- (id)pathWithoutTrailingRemovingSlash;	// 0x337fc6bd
- (id)queryParameters;	// 0x337fbd69
- (id)serverURL;	// 0x337fc5b5
- (id)unquotedPassword;	// 0x337fc589
@end

@interface NSURL (DAVExtensions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x337fcad1
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x337fc9f5
+ (int)classicPortForScheme:(id)scheme;	// 0x337fc9a1
- (id)initWithDirtyString:(id)dirtyString;	// 0x337fcb19
- (id)URLWithUsername:(id)username;	// 0x337fce7d
- (id)URLWithoutPassword;	// 0x337fd0e5
- (id)URLWithoutUsername;	// 0x337fd02d
- (BOOL)absoluteURLisEqual:(id)equal;	// 0x337fd12d
- (id)uri;	// 0x337fcddd
@end

