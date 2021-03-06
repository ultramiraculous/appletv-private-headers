/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class BRPhotoMediaCollection;

@interface BRPhotoCollectionDataStore : BRDataStore {
@private
	BRPhotoMediaCollection *_collection;	// 40 = 0x28
	BOOL _clearCollection;	// 44 = 0x2c
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x3326d14d; converted property
+ (id)dataStoreWithCollection:(id)collection;	// 0x3326cff5
- (id)initWithPhotoCollection:(id)photoCollection;	// 0x3326d041
// converted property getter: - (id)collection;	// 0x3326d14d
- (void)dealloc;	// 0x3326d101
- (id)loadData;	// 0x3326d1a1
- (void)purge;	// 0x3326d3e5
- (BOOL)storeAppliesToObject:(id)object;	// 0x3326d15d
@end

