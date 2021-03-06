/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedViewWithNavigationBarElement : ATVFeedRootElement {
	int _currentIndex;	// 4 = 0x4
	NSArray *_navigationItems;	// 8 = 0x8
	NSString *_onNavigate;	// 12 = 0xc
}
@property(assign, nonatomic) int currentIndex;	// G=0x12eb3d; S=0x12eb4d; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x12eb5d; S=0x12eb6d; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x12eb95; S=0x12eba9; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12e8c5
- (void).cxx_destruct;	// 0x12ebb9
// declared property getter: - (int)currentIndex;	// 0x12eb3d
// declared property getter: - (id)navigationItems;	// 0x12eb5d
// declared property getter: - (id)onNavigate;	// 0x12eb95
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x12eb4d
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x12eb6d
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x12eba9
@end

