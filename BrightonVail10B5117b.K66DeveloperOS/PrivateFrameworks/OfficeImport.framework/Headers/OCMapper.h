/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCCancel, TSUTemporaryDirectory;

@interface OCMapper : NSObject {
	OCCancel *mCancel;	// 4 = 0x4
	TSUTemporaryDirectory *mTemporaryDirectoryObject;	// 8 = 0x8
}
+ (id)mapperForCurrentThread;	// 0x34c3e0b1
- (id)init;	// 0x34c3dd45
- (void)cancel;	// 0x34c3de0d
- (void)dealloc;	// 0x34c3dda9
- (BOOL)isCancelled;	// 0x34c3de2d
- (void)quit;	// 0x34c3de51
- (void)setup;	// 0x34c3de71
- (void)teardown;	// 0x34c3df75
- (id)temporaryDirectoryPath;	// 0x34c3e101
@end

