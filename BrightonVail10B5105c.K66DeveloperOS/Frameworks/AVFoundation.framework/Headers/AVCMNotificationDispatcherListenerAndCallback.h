/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {
	AVWeakReference *_weakReferenceToListener;	// 4 = 0x4
	/*function-pointer*/ void *_callback;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) /*function-pointer*/ void *callback;	// G=0x30334315; @synthesize=_callback
@property(readonly, assign, nonatomic) id listener;	// G=0x303342f5; 
- (id)initWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback;	// 0x30334245
// declared property getter: - (/*function-pointer*/ void *)callback;	// 0x30334315
- (void)dealloc;	// 0x303342a9
// declared property getter: - (id)listener;	// 0x303342f5
@end

