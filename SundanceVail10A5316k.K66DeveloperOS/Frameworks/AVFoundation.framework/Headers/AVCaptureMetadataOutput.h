/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"

@class AVCaptureMetadataOutputInternal, NSArray;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput {
@private
	AVCaptureMetadataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataObjectTypes;	// G=0x367b5dfd; 
@property(copy, nonatomic) NSArray *metadataObjectTypes;	// G=0x367b5e85; S=0x367b5eb9; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;	// G=0x367b5ddd; 
@property(readonly, assign, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;	// G=0x367b5dbd; 
+ (void)initialize;	// 0x367b5bdd
- (id)init;	// 0x367b5c01
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x367b611d
- (BOOL)_faceMetadataIsActive;	// 0x367b60a1
// declared property getter: - (id)availableMetadataObjectTypes;	// 0x367b5dfd
- (id)connectionMediaTypes;	// 0x367b606d
- (void)dealloc;	// 0x367b5c81
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x367b61c1
// declared property getter: - (id)metadataObjectTypes;	// 0x367b5e85
// declared property getter: - (id)metadataObjectsCallbackQueue;	// 0x367b5ddd
// declared property getter: - (id)metadataObjectsDelegate;	// 0x367b5dbd
// declared property setter: - (void)setMetadataObjectTypes:(id)types;	// 0x367b5eb9
- (void)setMetadataObjectsDelegate:(id)delegate queue:(id)queue;	// 0x367b5ccd
@end

