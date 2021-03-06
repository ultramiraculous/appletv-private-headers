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
@property(readonly, assign) NSArray *contents;	// G=0x33fe96b9; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x33fe919d
- (void)addFile:(id)file;	// 0x33fe9455
- (void)addFolder:(id)folder;	// 0x33fe94b5
// declared property getter: - (id)contents;	// 0x33fe96b9
- (void)dealloc;	// 0x33fe92b1
- (void)deleteFile:(id)file;	// 0x33fe95f9
- (void)deleteFolder:(id)folder;	// 0x33fe9659
- (void)deleteItem:(id)item;	// 0x33fe9515
- (id)description;	// 0x33fe93a1
- (id)files;	// 0x33fe9791
- (void)finalize;	// 0x33fe9301
- (id)folders;	// 0x33fe97b1
- (BOOL)hasThumbnail;	// 0x33fe97d1
- (void)lockFiles;	// 0x33fe9351
- (void)lockFolders;	// 0x33fe9379
- (id)metadata;	// 0x33fe97d9
- (void)requestMetadata;	// 0x33fe9889
- (void)requestThumbnail;	// 0x33fe97e9
- (CGImageRef)thumbnail;	// 0x33fe97d5
- (void)unlockFiles;	// 0x33fe9365
- (void)unlockFolders;	// 0x33fe938d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x33fe9729
@end

