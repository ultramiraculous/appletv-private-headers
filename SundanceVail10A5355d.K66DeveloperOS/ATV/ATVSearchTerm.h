/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSimpleMenuItem.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVSearchTerm : BRSimpleMenuItem {
	NSString *_searchTerm;	// 20 = 0x14
	NSDate *_lastUsed;	// 24 = 0x18
}
@property(readonly, retain) NSDate *lastUsed;	// G=0x224005; converted property
@property(readonly, retain) NSString *searchTerm;	// G=0x223ff5; converted property
+ (id)searchTermWithString:(id)string;	// 0x223eb9
- (id)initWithSearchTerm:(id)searchTerm date:(id)date;	// 0x223f19
- (void)dealloc;	// 0x223f91
// converted property getter: - (id)lastUsed;	// 0x224005
- (int)menuItemType;	// 0x224095
- (id)rightJustifiedText;	// 0x224069
// converted property getter: - (id)searchTerm;	// 0x223ff5
- (id)title;	// 0x224059
- (int)titlePosition;	// 0x224091
- (void)updateLastUsed;	// 0x224015
@end
