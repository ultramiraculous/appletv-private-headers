/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureInput.h"

@class AVCaptureDeviceInputInternal, AVCaptureDevice;

@interface AVCaptureDeviceInput : AVCaptureInput {
@private
	AVCaptureDeviceInputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x31484b25; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x31484bfd
- (id)init;	// 0x314854dd
- (id)initWithDevice:(id)device error:(id *)error;	// 0x31484b49
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x31484cd5
- (void)_setDevice:(id)device;	// 0x3148528d
- (void)dealloc;	// 0x31485479
- (id)description;	// 0x314853fd
// declared property getter: - (id)device;	// 0x31484b25
- (void)didStartForSession:(id)session;	// 0x31484d29
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x31484c4d
- (id)notReadyError;	// 0x314850e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31485241
- (id)ports;	// 0x31484e35
- (void)setDevice:(id)device;	// 0x31484b45
- (void)setSession:(id)session;	// 0x31484de1
- (void)willStartForSession:(id)session;	// 0x31484d85
@end

