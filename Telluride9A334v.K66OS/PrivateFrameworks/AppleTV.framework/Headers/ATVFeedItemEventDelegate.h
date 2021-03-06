/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BREventDelegate.h"
#import <NSObject.h> // Unknown library

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x3317e385; S=0x3317e399; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x3317df4d
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x3317dfd1
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x3317e0a5
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x3317e301
- (void)dealloc;	// 0x3317e045
- (BOOL)handlePlayForControl:(id)control;	// 0x3317e345
- (BOOL)handleSelectionForControl:(id)control;	// 0x3317e305
// declared property getter: - (id)merchant;	// 0x3317e385
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3317e399
@end

