/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) BOOL adjustsMaxConcurrentOperationCount;	// G=0x37a51c75; S=0x37a51d0d; 
@property(assign) int maxConcurrentOperationCount;	// G=0x37a51ccd; S=0x37a51d21; converted property
+ (id)mainQueue;	// 0x37a51aad
- (id)init;	// 0x37a51991
- (void)addOperation:(id)operation;	// 0x37a51b19
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x37a51b75
// declared property getter: - (BOOL)adjustsMaxConcurrentOperationCount;	// 0x37a51c75
- (void)cancelAllOperations;	// 0x37a51c8d
- (void)dealloc;	// 0x37a51a2d
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x37a51ccd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x37a51d61
- (int)operationCount;	// 0x37a51cad
- (id)operations;	// 0x37a51ced
// declared property setter: - (void)setAdjustsMaxConcurrentOperationCount:(BOOL)count;	// 0x37a51d0d
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x37a51d21
- (void)setSuspended:(BOOL)suspended;	// 0x37a51d41
@end
