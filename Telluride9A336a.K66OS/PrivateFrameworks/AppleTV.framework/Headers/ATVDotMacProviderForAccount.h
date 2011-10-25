/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacProvider.h"

@class ATVInternetPhotosAccount, NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
@private
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x3395903d; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x339594e5; S=0x339594f5; converted property
+ (id)providerForAccount:(id)account;	// 0x33958de1
- (id)initWithAccount:(id)account;	// 0x33958e29
- (id)_data;	// 0x33959331
- (id)_dataWithTypeDividers;	// 0x33959199
- (BOOL)_handlesObject:(id)object;	// 0x339593a9
- (void)_updateDataCount;	// 0x339594b9
// converted property getter: - (id)account;	// 0x3395903d
- (id)dataAtIndex:(long)index;	// 0x33959085
- (long)dataCount;	// 0x3395905d
- (void)dealloc;	// 0x33958f55
- (id)hashForDataAtIndex:(long)index;	// 0x339590f1
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x339594e5
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x3395904d
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x339594f5
@end

