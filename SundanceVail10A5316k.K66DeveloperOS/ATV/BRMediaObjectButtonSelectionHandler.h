/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"


__attribute__((visibility("hidden")))
@interface BRMediaObjectButtonSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	int _selectionType;	// 4 = 0x4
}
- (id)init;	// 0x32695d
- (BOOL)_handlePlaySelectionForControl:(id)control;	// 0x326a05
- (BOOL)_handleStartDownloadSelectionForControl:(id)control;	// 0x326b55
- (BOOL)handlePlayForControl:(id)control;	// 0x3269b1
- (BOOL)handleSelectionForControl:(id)control;	// 0x3269c9
- (void)setSelectionHandlerType:(int)type;	// 0x3269a1
@end

