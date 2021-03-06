/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRCyclerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRCyclerDataSource.h"

@class NSArray, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedCyclerController : XXUnknownSuperclass <BRCyclerDelegate, BRCyclerDataSource> {
	NSArray *_items;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) NSArray *items;	// G=0x121561; S=0x121575; @synthesize=_items
@property(retain) BRMerchant *merchant;	// G=0x121585; S=0x121599; @synthesize=_merchant
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x121505
- (long)cycler:(id)cycler willCycleToItemAtIndex:(long)index;	// 0x12155d
- (void)dealloc;	// 0x121481
// declared property getter: - (id)items;	// 0x121561
// declared property getter: - (id)merchant;	// 0x121585
- (long)numberOfItemsInCycler:(id)cycler;	// 0x1214e5
// declared property setter: - (void)setItems:(id)items;	// 0x121575
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x121599
@end

