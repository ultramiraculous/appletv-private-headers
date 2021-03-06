/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {
	void *_ptpCameraFolderProperties;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
}
@property(copy) id info;	// G=0x33ff6bd5; S=0x33ff6be9; 
@property(readonly, assign) unsigned long objHandle;	// G=0x33ff6bc1; 
@property(retain) NSString *path;	// G=0x33ff8e41; S=0x33ff8e55; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x33ff6bad; 
@property(readonly, assign) unsigned type;	// G=0x33ff6b99; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x33ff6a7d
- (void)dealloc;	// 0x33ff6ae1
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x33ff6c2d
- (id)description;	// 0x33ff8d75
- (void)enumerateContent;	// 0x33ff73f5
- (void)finalize;	// 0x33ff6b3d
- (id)folderForObjectHandle:(unsigned long)objectHandle;	// 0x33ff6fc5
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int *)created;	// 0x33ff70e1
- (BOOL)hasDCIMParent;	// 0x33ff7319
// declared property getter: - (id)info;	// 0x33ff6bd5
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x33ff6dc5
// declared property getter: - (unsigned long)objHandle;	// 0x33ff6bc1
// declared property getter: - (id)path;	// 0x33ff8e41
- (void)refreshInfo;	// 0x33ff6d5d
// declared property setter: - (void)setInfo:(id)info;	// 0x33ff6be9
// declared property setter: - (void)setPath:(id)path;	// 0x33ff8e55
// declared property getter: - (unsigned long)storageID;	// 0x33ff6bad
// declared property getter: - (unsigned)type;	// 0x33ff6b99
@end

