/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
	OpaqueFigAssetWriter *_figAssetWriter;	// 4 = 0x4
	int _didNotCallDelegate;	// 8 = 0x8
	AVWeakReference *_weakReferenceToSelf;	// 12 = 0xc
	AVWeakReference *_weakReferenceToDelegate;	// 16 = 0x10
	int _notificationHandlersAreRegistered;	// 20 = 0x14
}
@property(retain) AVWeakReference *weakReferenceToDelegate;	// G=0x302d800d; S=0x302d8021; @synthesize=_weakReferenceToDelegate
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter weakReferenceToDelegate:(id)delegate;	// 0x302d799d
- (void)_callDelegateIfNotCalledWithSuccess:(BOOL)success error:(id)error;	// 0x302d7df9
- (void)_handleCompletedWritingNotification;	// 0x302d7fa5
- (void)_handleFailedNotificationWithError:(id)error;	// 0x302d7fd9
- (void)_handleServerDiedNotification;	// 0x302d7f55
- (void)_teardownNotificationHandlers;	// 0x302d7e55
- (void)dealloc;	// 0x302d7d15
- (void)finalize;	// 0x302d7da1
// declared property setter: - (void)setWeakReferenceToDelegate:(id)delegate;	// 0x302d8021
// declared property getter: - (id)weakReferenceToDelegate;	// 0x302d800d
@end

