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
@property(readonly, retain) NSDate *lastUsed;	// G=0x237415; converted property
@property(readonly, retain) NSString *searchTerm;	// G=0x237405; converted property
+ (id)searchTermWithString:(id)string;	// 0x2372c9
- (id)initWithSearchTerm:(id)searchTerm date:(id)date;	// 0x237329
- (void)dealloc;	// 0x2373a1
// converted property getter: - (id)lastUsed;	// 0x237415
- (int)menuItemType;	// 0x2374a5
- (id)rightJustifiedText;	// 0x237479
// converted property getter: - (id)searchTerm;	// 0x237405
- (id)title;	// 0x237469
- (int)titlePosition;	// 0x2374a1
- (void)updateLastUsed;	// 0x237425
@end

