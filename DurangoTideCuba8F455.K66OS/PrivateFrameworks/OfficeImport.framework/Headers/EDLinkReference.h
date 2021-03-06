/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject {
@private
	unsigned mLinkIndex;	// 4 = 0x4
	unsigned mFirstSheetIndex;	// 8 = 0x8
	unsigned mLastSheetIndex;	// 12 = 0xc
}
@property(assign) unsigned firstSheetIndex;	// G=0x32c38645; S=0x32cf32a1; converted property
@property(assign) unsigned lastSheetIndex;	// G=0x32c38655; S=0x32cf32b1; converted property
@property(assign) unsigned linkIndex;	// G=0x32c385c9; S=0x32cf32c1; converted property
+ (id)linkReferenceWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x32c08159
- (id)init;	// 0x32cf333d
- (id)initWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x32c081a9
// converted property getter: - (unsigned)firstSheetIndex;	// 0x32c38645
- (unsigned)hash;	// 0x32cf3311
- (BOOL)isEqual:(id)equal;	// 0x32cf3391
- (BOOL)isEqualToLinkReference:(id)linkReference;	// 0x32cf32d1
// converted property getter: - (unsigned)lastSheetIndex;	// 0x32c38655
// converted property getter: - (unsigned)linkIndex;	// 0x32c385c9
// converted property setter: - (void)setFirstSheetIndex:(unsigned)index;	// 0x32cf32a1
// converted property setter: - (void)setLastSheetIndex:(unsigned)index;	// 0x32cf32b1
// converted property setter: - (void)setLinkIndex:(unsigned)index;	// 0x32cf32c1
@end

