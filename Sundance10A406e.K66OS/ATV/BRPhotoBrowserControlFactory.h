/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x337429
- (void)dealloc;	// 0x3373a1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x337519
- (void)setSelectionHandler:(id)handler;	// 0x3373ed
@end

