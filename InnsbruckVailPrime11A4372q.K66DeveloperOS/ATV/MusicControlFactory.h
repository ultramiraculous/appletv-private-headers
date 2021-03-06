/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface MusicControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1ac481
- (void).cxx_destruct;	// 0x1ac789
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1ac541
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1ac6b9
@end

