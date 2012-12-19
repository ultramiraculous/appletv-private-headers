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
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x1aaa01; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x1aaea5; S=0x1aaeb5; converted property
+ (id)providerForAccount:(id)account;	// 0x1aa7a9
- (id)initWithAccount:(id)account;	// 0x1aa7f1
- (id)_data;	// 0x1aacf1
- (id)_dataWithTypeDividers;	// 0x1aab5d
- (BOOL)_handlesObject:(id)object;	// 0x1aad69
- (void)_updateDataCount;	// 0x1aae79
// converted property getter: - (id)account;	// 0x1aaa01
- (id)dataAtIndex:(long)index;	// 0x1aaa49
- (long)dataCount;	// 0x1aaa21
- (void)dealloc;	// 0x1aa919
- (id)hashForDataAtIndex:(long)index;	// 0x1aaab5
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x1aaea5
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x1aaa11
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x1aaeb5
@end
