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
@property(readonly, retain) NSDate *lastUsed;	// G=0x226875; converted property
@property(readonly, retain) NSString *searchTerm;	// G=0x226865; converted property
+ (id)searchTermWithString:(id)string;	// 0x226729
- (id)initWithSearchTerm:(id)searchTerm date:(id)date;	// 0x226789
- (void)dealloc;	// 0x226801
// converted property getter: - (id)lastUsed;	// 0x226875
- (int)menuItemType;	// 0x226905
- (id)rightJustifiedText;	// 0x2268d9
// converted property getter: - (id)searchTerm;	// 0x226865
- (id)title;	// 0x2268c9
- (int)titlePosition;	// 0x226901
- (void)updateLastUsed;	// 0x226885
@end

