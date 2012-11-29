/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsParentalLocaleProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_localeNamesInDisplayOrder;	// 4 = 0x4
	NSDictionary *_localeNameToLocaleIDMap;	// 8 = 0x8
}
@property(retain, nonatomic) NSDictionary *localeNameToLocaleIDMap;	// G=0x3ca8d9; S=0x3ca8e9; @synthesize=_localeNameToLocaleIDMap
@property(retain, nonatomic) NSArray *localeNamesInDisplayOrder;	// G=0x3ca8a1; S=0x3ca8b1; @synthesize=_localeNamesInDisplayOrder
- (id)init;	// 0x3ca575
- (void).cxx_destruct;	// 0x3ca911
- (long)IDFromDisplayString:(id)displayString;	// 0x3ca825
- (id)controlFactory;	// 0x3ca6e9
- (id)dataAtIndex:(long)index;	// 0x3ca789
- (long)dataCount;	// 0x3ca74d
- (id)displayStringForItemWithID:(long)anId;	// 0x3ca81d
- (id)hashForDataAtIndex:(long)index;	// 0x3ca7d5
// declared property getter: - (id)localeNameToLocaleIDMap;	// 0x3ca8d9
// declared property getter: - (id)localeNamesInDisplayOrder;	// 0x3ca8a1
// declared property setter: - (void)setLocaleNameToLocaleIDMap:(id)localeIDMap;	// 0x3ca8e9
// declared property setter: - (void)setLocaleNamesInDisplayOrder:(id)displayOrder;	// 0x3ca8b1
@end
