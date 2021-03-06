/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreScrollerDataSource : XXUnknownSuperclass {
	NSArray *_controls;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *controls;	// G=0x1f41b1; S=0x1f3f21; @synthesize=_controls
@property(retain, nonatomic) NSString *identifier;	// G=0x1f41c1; S=0x1f3f71; @synthesize=_identifier
- (void)_setControlIdentifiers;	// 0x1f41d1
// declared property getter: - (id)controls;	// 0x1f41b1
- (void)dealloc;	// 0x1f3ebd
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1f4005
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x1f40a5
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1f3fe5
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x1f406d
// declared property getter: - (id)identifier;	// 0x1f41c1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x1f3fe1
- (long)numberOfItemsInGrid:(id)grid;	// 0x1f3fc1
// declared property setter: - (void)setControls:(id)controls;	// 0x1f3f21
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x1f3f71
@end

