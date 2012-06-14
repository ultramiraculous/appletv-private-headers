/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BREventDelegate.h"
#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : XXUnknownSuperclass <BREventDelegate, BRSelectionHandler> {
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x16a249; S=0x16a25d; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x169dc9
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x169e51
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x169f21
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x16a1c5
- (void)dealloc;	// 0x169ec1
- (BOOL)handlePlayForControl:(id)control;	// 0x16a209
- (BOOL)handleSelectionForControl:(id)control;	// 0x16a1c9
// declared property getter: - (id)merchant;	// 0x16a249
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16a25d
@end

