/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMenuListItemProvider.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceListProvider : NSObject <BRMenuListItemProvider> {
@private
	NSArray *_applianceInfo;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
}
@property(retain) id textAttributes;	// G=0x328acd39; S=0x328a6a85; converted property
- (id)init;	// 0x328a6765
- (void)_loadAppliances;	// 0x328a67a5
- (id)applianceInfoAtIndex:(long)index;	// 0x328a7529
- (long)applianceInfoIndexForKey:(id)key;	// 0x328acc19
- (void)dealloc;	// 0x328ed4fd
- (float)heightForRow:(long)row;	// 0x328a6d4d
- (long)itemCount;	// 0x328a6d2d
- (id)itemForRow:(long)row;	// 0x328a6d55
- (void)reloadAppliances;	// 0x328ed4e9
- (BOOL)rowSelectable:(long)selectable;	// 0x328ed4e5
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x328a6a85
// converted property getter: - (id)textAttributes;	// 0x328acd39
- (id)titleForRow:(long)row;	// 0x328a6f41
@end

