/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMenuItemLayerPopulator : XXUnknownSuperclass {
	id _object;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	unsigned _matchOrder;	// 12 = 0xc
}
@property(readonly, assign) unsigned matchOrder;	// G=0x3da0c5; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x3cf869
- (id)init;	// 0x3cf86d
- (void)dealloc;	// 0x3cf925
- (id)dividerLayer;	// 0x3cfa8d
- (id)lowerCenteredString;	// 0x3cfb0d
- (id)lowerLeftString;	// 0x3cfb09
- (id)lowerRightImage;	// 0x3cfb19
// converted property getter: - (unsigned)matchOrder;	// 0x3da0c5
- (id)menuItem;	// 0x3cfa71
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3cf971
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3cf9d1
- (id)rightJustifiedText;	// 0x3cfb01
- (void)setObject:(id)object;	// 0x3cfa35
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x3cfb1d
- (id)subtitle;	// 0x3cfb05
- (id)thumbnailImage;	// 0x3cfb11
- (id)title;	// 0x3cfafd
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3cf9d5
- (id)upperRightImage;	// 0x3cfb15
@end

