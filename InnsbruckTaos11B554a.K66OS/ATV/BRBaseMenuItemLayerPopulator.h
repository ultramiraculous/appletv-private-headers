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
@property(readonly, assign) unsigned matchOrder;	// G=0x3c4805; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x3baca9
- (id)init;	// 0x3bacad
- (void)dealloc;	// 0x3bad65
- (id)dividerLayer;	// 0x3baecd
- (id)lowerCenteredString;	// 0x3baf4d
- (id)lowerLeftString;	// 0x3baf49
- (id)lowerRightImage;	// 0x3baf59
// converted property getter: - (unsigned)matchOrder;	// 0x3c4805
- (id)menuItem;	// 0x3baeb1
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3badb1
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3bae11
- (id)rightJustifiedText;	// 0x3baf41
- (void)setObject:(id)object;	// 0x3bae75
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x3baf5d
- (id)subtitle;	// 0x3baf45
- (id)thumbnailImage;	// 0x3baf51
- (id)title;	// 0x3baf3d
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3bae15
- (id)upperRightImage;	// 0x3baf55
@end

