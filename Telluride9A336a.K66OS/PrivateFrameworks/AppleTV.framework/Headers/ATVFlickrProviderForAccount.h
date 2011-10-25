/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x33965279
- (id)initWithAccount:(id)account;	// 0x339652c1
- (id)_data;	// 0x33965509
- (BOOL)_handlesObject:(id)object;	// 0x33965529
- (void)dealloc;	// 0x339653e9
- (id)hashForDataAtIndex:(long)index;	// 0x339654a9
@end

