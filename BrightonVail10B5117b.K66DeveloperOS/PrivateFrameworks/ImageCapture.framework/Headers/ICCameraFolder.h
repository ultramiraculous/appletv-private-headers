/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraItem.h"
#import "ImageCapture-Structs.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
	void *_folderProperties;	// 8 = 0x8
	int _filesLock;	// 12 = 0xc
	int _foldersLock;	// 16 = 0x10
}
@property(readonly, assign) NSArray *contents;	// G=0x343d56b9; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x343d519d
- (void)addFile:(id)file;	// 0x343d5455
- (void)addFolder:(id)folder;	// 0x343d54b5
// declared property getter: - (id)contents;	// 0x343d56b9
- (void)dealloc;	// 0x343d52b1
- (void)deleteFile:(id)file;	// 0x343d55f9
- (void)deleteFolder:(id)folder;	// 0x343d5659
- (void)deleteItem:(id)item;	// 0x343d5515
- (id)description;	// 0x343d53a1
- (id)files;	// 0x343d5791
- (void)finalize;	// 0x343d5301
- (id)folders;	// 0x343d57b1
- (BOOL)hasThumbnail;	// 0x343d57d1
- (void)lockFiles;	// 0x343d5351
- (void)lockFolders;	// 0x343d5379
- (id)metadata;	// 0x343d57d9
- (void)requestMetadata;	// 0x343d5889
- (void)requestThumbnail;	// 0x343d57e9
- (CGImageRef)thumbnail;	// 0x343d57d5
- (void)unlockFiles;	// 0x343d5365
- (void)unlockFolders;	// 0x343d538d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x343d5729
@end
