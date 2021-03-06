/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl, BRMenuItem;

__attribute__((visibility("hidden")))
@interface ATVPodcastSubscriptionSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	BRControl *_selectionRequester;	// 4 = 0x4
	BRMenuItem *_menuItem;	// 8 = 0x8
}
@property(assign, nonatomic) __weak BRMenuItem *menuItem;	// G=0x133e21; S=0x133e41; @synthesize=_menuItem
@property(assign, nonatomic) __weak BRControl *selectionRequester;	// G=0x133ded; S=0x133e0d; @synthesize=_selectionRequester
- (void).cxx_destruct;	// 0x133e55
- (void)_handleLoginFailure:(id)failure;	// 0x133c31
- (void)_handleLoginSuccess:(id)success;	// 0x133ba1
- (void)_handleSelectionForMenuItem:(id)menuItem;	// 0x133c8d
- (BOOL)handleSelectionForControl:(id)control;	// 0x133885
// declared property getter: - (id)menuItem;	// 0x133e21
// declared property getter: - (id)selectionRequester;	// 0x133ded
// declared property setter: - (void)setMenuItem:(id)item;	// 0x133e41
// declared property setter: - (void)setSelectionRequester:(id)requester;	// 0x133e0d
@end

