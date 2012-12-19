/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary {
	NSMutableDictionary *dict;	// 4 = 0x4
	stat statInfo;	// 8 = 0x8
	struct {
		BOOL extensionHidden;
		NSDate *creationDate;
		fields validFields;
	} catInfo;	// 116 = 0x74
	NSDictionary *extendedAttrs;	// 128 = 0x80
	int fileProtectionClass;	// 132 = 0x84
}
+ (id)_attributesAtPath:(id)path partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x31977691
+ (id)_attributesAtURL:(id)url partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x319ba311
+ (id)attributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x319ba235
+ (id)attributesWithStat:(stat *)stat;	// 0x31977805
- (unsigned)count;	// 0x319babf1
- (void)dealloc;	// 0x3197fe15
- (id)fileGroupOwnerAccountName;	// 0x319baded
- (unsigned)fileGroupOwnerAccountNumber;	// 0x319bae39
- (id)fileModificationDate;	// 0x319bacf9
- (id)fileOwnerAccountName;	// 0x319bad8d
- (unsigned)fileOwnerAccountNumber;	// 0x319badd9
- (unsigned)filePosixPermissions;	// 0x319bad75
- (unsigned long long)fileSize;	// 0x319bace1
- (unsigned)fileSystemFileNumber;	// 0x319bae5d
- (int)fileSystemNumber;	// 0x319bae4d
- (id)fileType;	// 0x319bad61
- (unsigned)hash;	// 0x319ba57d
- (BOOL)isDirectory;	// 0x319bae71
- (BOOL)isEqual:(id)equal;	// 0x319baa11
- (id)keyEnumerator;	// 0x319bac69
- (id)objectForKey:(id)key;	// 0x31977bc1
@end
