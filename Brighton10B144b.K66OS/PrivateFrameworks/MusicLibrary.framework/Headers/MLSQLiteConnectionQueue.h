/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface MLSQLiteConnectionQueue : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	BOOL _shouldUseDispatchGroupAPI;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x34713551; @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isOnQueue;	// G=0x347134e5; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;	// G=0x34713565; S=0x34713575; @synthesize=_queue
@property(readonly, assign, nonatomic) BOOL shouldUseDispatchGroupAPI;	// G=0x3471359d; @synthesize=_shouldUseDispatchGroupAPI
+ (id)currentQueueConnectionIdentifier;	// 0x34712ff5
+ (id)mainThreadConnectionQueue;	// 0x34712f69
- (id)initWithDispatchQueue:(id)dispatchQueue shouldUseDispatchGroupAPI:(BOOL)api;	// 0x347130ad
- (void).cxx_destruct;	// 0x347135ad
- (id)_initWithDispatchQueue:(id)dispatchQueue identifier:(id)identifier shouldUseDispatchGroupAPI:(BOOL)api;	// 0x34712ffd
- (void)dispatchAsync:(id)async;	// 0x34713449
- (void)dispatchAsyncOrInvokeImmediately:(id)immediately;	// 0x347133f9
- (void)dispatchSync:(id)sync;	// 0x34713351
- (void)dispatchSyncOrInvokeImmediately:(id)immediately;	// 0x34713301
// declared property getter: - (id)identifier;	// 0x34713551
// declared property getter: - (BOOL)isOnQueue;	// 0x347134e5
// declared property getter: - (id)queue;	// 0x34713565
// declared property setter: - (void)setQueue:(id)queue;	// 0x34713575
// declared property getter: - (BOOL)shouldUseDispatchGroupAPI;	// 0x3471359d
@end
