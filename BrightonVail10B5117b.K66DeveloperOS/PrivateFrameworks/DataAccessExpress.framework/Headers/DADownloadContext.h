/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface DADownloadContext : NSObject {
	NSString *_attachmentUUID;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
	id _progressBlock;	// 16 = 0x10
	id _completionBlock;	// 20 = 0x14
}
- (id)initWithAttachmentUUID:(id)attachmentUUID accountID:(id)anId queue:(id)queue downloadProgressBlock:(id)block completionBlock:(id)block5;	// 0x33c52059
- (void)dealloc;	// 0x33c52179
- (void)finishedWithError:(id)error;	// 0x33c5237d
- (void)updateProgressDownloadedByteCount:(long long)count totalByteCount:(long long)count2;	// 0x33c5221d
@end
