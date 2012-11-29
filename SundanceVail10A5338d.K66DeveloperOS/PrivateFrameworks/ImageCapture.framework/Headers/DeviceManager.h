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
- (id)init;	// 0x33e44cc1
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x33e4512d
- (void)closeDeviceImp:(id)imp;	// 0x33e4588d
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x33e452bd
- (void)closeSessionImp:(id)imp;	// 0x33e45895
- (void)dealloc;	// 0x33e44f19
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33e455f5
- (void)deleteFileImp:(id)imp;	// 0x33e458a5
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x33e456c9
- (void)downloadFileImp:(id)imp;	// 0x33e458a9
- (int)eject:(id)eject;	// 0x33e4581d
- (void)ejectImp:(id)imp;	// 0x33e458ad
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33e45521
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x33e458a1
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33e4544d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x33e4589d
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x33e45065
- (void)openDeviceImp:(id)imp;	// 0x33e45889
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x33e451f5
- (void)openSessionImp:(id)imp;	// 0x33e45891
- (void)postCommandCompletionNotification:(id)notification;	// 0x33e458b1
- (void)postNotification:(id)notification;	// 0x33e458f9
- (void)startRunning;	// 0x33e44f8d
- (void)stopRunning;	// 0x33e44fed
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x33e45385
- (void)syncClockImp:(id)imp;	// 0x33e45899
@end
