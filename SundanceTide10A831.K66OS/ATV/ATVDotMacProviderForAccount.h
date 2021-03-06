/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacProvider.h"

@class NSSet, ATVInternetPhotosAccount, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x1a52c9; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x1a576d; S=0x1a577d; converted property
+ (id)providerForAccount:(id)account;	// 0x1a5071
- (id)initWithAccount:(id)account;	// 0x1a50b9
- (id)_data;	// 0x1a55b9
- (id)_dataWithTypeDividers;	// 0x1a5425
- (BOOL)_handlesObject:(id)object;	// 0x1a5631
- (void)_updateDataCount;	// 0x1a5741
// converted property getter: - (id)account;	// 0x1a52c9
- (id)dataAtIndex:(long)index;	// 0x1a5311
- (long)dataCount;	// 0x1a52e9
- (void)dealloc;	// 0x1a51e1
- (id)hashForDataAtIndex:(long)index;	// 0x1a537d
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x1a576d
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x1a52d9
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x1a577d
@end

