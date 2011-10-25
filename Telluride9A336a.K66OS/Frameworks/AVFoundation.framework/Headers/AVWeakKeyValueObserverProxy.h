/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVWeakReference;

@interface AVWeakKeyValueObserverProxy : NSObject {
@private
	AVWeakReference *_weakReferenceToObserver;	// 4 = 0x4
}
- (id)init;	// 0x314b1b65
- (id)initWithWeakReferenceToObserver:(id)observer;	// 0x314b1a81
- (void)dealloc;	// 0x314b1b19
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x314b1ad9
@end

