/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x28bedd; S=0x28bdf1; converted property
// converted property getter: - (id)categories;	// 0x28bedd
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x28bf61
- (id)controlFactory;	// 0x28bff1
- (id)dataAtIndex:(long)index;	// 0x28c02d
- (long)dataCount;	// 0x28c00d
- (void)dealloc;	// 0x28bda5
- (long)defaultCategoryIndex;	// 0x28beed
- (id)hashForDataAtIndex:(long)index;	// 0x28c04d
// converted property setter: - (void)setCategories:(id)categories;	// 0x28bdf1
@end

