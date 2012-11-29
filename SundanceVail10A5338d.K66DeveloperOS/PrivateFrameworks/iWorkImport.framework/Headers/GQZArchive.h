/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;
@protocol GQZArchiveInputStream;

@interface GQZArchive : NSObject {
	NSMutableDictionary *mEntries;	// 4 = 0x4
	id<GQZArchiveInputStream> mInput;	// 8 = 0x8
	BOOL mIsEncrypted;	// 12 = 0xc
	NSString *mFilename;	// 16 = 0x10
}
- (id)initWithData:(id)data collapseCommonRootDirectory:(BOOL)directory;	// 0x350b7675
- (id)initWithPath:(id)path collapseCommonRootDirectory:(BOOL)directory;	// 0x350b749d
- (void)collapseCommonRootDirectory;	// 0x350b7c4d
- (void)dealloc;	// 0x350b7811
- (id)entryNames;	// 0x350b78a9
- (id)entryWithName:(id)name;	// 0x350b7889
- (id)filename;	// 0x350b78d9
- (BOOL)isEncrypted;	// 0x350b78c9
- (GQZEndOfCentralDirectory)readEndOfCentralDirectory;	// 0x350b7ee9
- (void)readEntries;	// 0x350b78e9
- (void)readExtraFieldFromBuffer:(const char *)buffer size:(unsigned long)size entry:(id)entry;	// 0x350b8509
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x350b843d
- (GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromOffset:(long long)offset;	// 0x350b82fd
- (GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryWithEocdOffset:(long long)eocdOffset;	// 0x350b817d
- (const char *)searchForEndOfCentralDirectoryOffset:(long long *)centralDirectoryOffset;	// 0x350b8035
@end
