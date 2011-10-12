/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x306020e1
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x3065e6a1
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x30602121
- (id)initWithCoder:(id)coder;	// 0x3060b11d
- (id)initWithContentsOfFile:(id)file;	// 0x3065e6e1
- (id)initWithContentsOfURL:(id)url;	// 0x3065e71d
- (id)_stringToWrite;	// 0x3065e531
- (Class)classForCoder;	// 0x3065e515
- (id)descriptionInStringsFileFormat;	// 0x30638f75
- (void)encodeWithCoder:(id)coder;	// 0x3063c8c5
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3063e511
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3065e591
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x30663b59
- (BOOL)fileExtensionHidden;	// 0x30663a61
- (id)fileGroupOwnerAccountID;	// 0x30663b91
- (id)fileGroupOwnerAccountName;	// 0x306639d9
- (unsigned)fileGroupOwnerAccountNumber;	// 0x306639f5
- (unsigned long)fileHFSCreatorCode;	// 0x30663a91
- (unsigned long)fileHFSTypeCode;	// 0x30663ac5
- (BOOL)fileIsAppendOnly;	// 0x30663b29
- (BOOL)fileIsImmutable;	// 0x30663af9
- (id)fileModificationDate;	// 0x3066394d
- (id)fileOwnerAccountID;	// 0x30663b75
- (id)fileOwnerAccountName;	// 0x306639b9
- (unsigned)fileOwnerAccountNumber;	// 0x306639d5
- (unsigned)filePosixPermissions;	// 0x30663985
- (unsigned long long)fileSize;	// 0x30663919
- (unsigned)fileSystemFileNumber;	// 0x30663a2d
- (int)fileSystemNumber;	// 0x306639f9
- (id)fileType;	// 0x30663969
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x30603acd
- (id)valueForKeyPath:(id)keyPath;	// 0x306746a9
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x306ad219
- (id)_web_numberForKey:(id)key;	// 0x306ad27d
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x306ad2b1
- (id)_web_stringForKey:(id)key;	// 0x306ad249
@end

