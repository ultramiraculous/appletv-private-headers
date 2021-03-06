/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ICDeviceManagerProtocol.h"

@class NSMutableDictionary, DeviceManagerThread, NSDictionary;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
	DeviceManagerThread *_thread;	// 4 = 0x4
	NSDictionary *_deviceMatchingInfo;	// 8 = 0x8
	NSMutableDictionary *_devices;	// 12 = 0xc
}
- (id)init;	// 0x341fca01
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x341fce6d
- (void)closeDeviceImp:(id)imp;	// 0x341fd5cd
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x341fcffd
- (void)closeSessionImp:(id)imp;	// 0x341fd5d5
- (void)dealloc;	// 0x341fcc59
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fd335
- (void)deleteFileImp:(id)imp;	// 0x341fd5e5
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x341fd409
- (void)downloadFileImp:(id)imp;	// 0x341fd5e9
- (int)eject:(id)eject;	// 0x341fd55d
- (void)ejectImp:(id)imp;	// 0x341fd5ed
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fd261
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x341fd5e1
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fd18d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x341fd5dd
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x341fcda5
- (void)openDeviceImp:(id)imp;	// 0x341fd5c9
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x341fcf35
- (void)openSessionImp:(id)imp;	// 0x341fd5d1
- (void)postCommandCompletionNotification:(id)notification;	// 0x341fd5f1
- (void)postNotification:(id)notification;	// 0x341fd639
- (void)startRunning;	// 0x341fcccd
- (void)stopRunning;	// 0x341fcd2d
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x341fd0c5
- (void)syncClockImp:(id)imp;	// 0x341fd5d9
@end

