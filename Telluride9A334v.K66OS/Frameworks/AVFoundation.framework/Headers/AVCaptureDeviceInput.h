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
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x35478b25; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x35478bfd
- (id)init;	// 0x354794dd
- (id)initWithDevice:(id)device error:(id *)error;	// 0x35478b49
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35478cd5
- (void)_setDevice:(id)device;	// 0x3547928d
- (void)dealloc;	// 0x35479479
- (id)description;	// 0x354793fd
// declared property getter: - (id)device;	// 0x35478b25
- (void)didStartForSession:(id)session;	// 0x35478d29
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x35478c4d
- (id)notReadyError;	// 0x354790e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35479241
- (id)ports;	// 0x35478e35
- (void)setDevice:(id)device;	// 0x35478b45
- (void)setSession:(id)session;	// 0x35478de1
- (void)willStartForSession:(id)session;	// 0x35478d85
@end

