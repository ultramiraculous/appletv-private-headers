/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRCyclerDelegate.h"
#import "BRCyclerDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedCyclerController : XXUnknownSuperclass <BRCyclerDelegate, BRCyclerDataSource> {
	NSArray *_items;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) NSArray *items;	// G=0x1480ad; S=0x1480c1; @synthesize=_items
@property(retain) BRMerchant *merchant;	// G=0x1480d1; S=0x1480e5; @synthesize=_merchant
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x148051
- (long)cycler:(id)cycler willCycleToItemAtIndex:(long)index;	// 0x1480a9
- (void)dealloc;	// 0x147fcd
// declared property getter: - (id)items;	// 0x1480ad
// declared property getter: - (id)merchant;	// 0x1480d1
- (long)numberOfItemsInCycler:(id)cycler;	// 0x148031
// declared property setter: - (void)setItems:(id)items;	// 0x1480c1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1480e5
@end

