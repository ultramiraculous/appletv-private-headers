/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedGenericCollectionElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement {
	int _currentIndex;	// 8 = 0x8
	NSArray *_navigationItems;	// 12 = 0xc
	NSString *_onNavigate;	// 16 = 0x10
}
@property(assign, nonatomic) int currentIndex;	// G=0x140e6d; S=0x140e7d; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x140e8d; S=0x140e9d; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x140ead; S=0x140ec1; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x140c09
// declared property getter: - (int)currentIndex;	// 0x140e6d
- (void)dealloc;	// 0x140e09
// declared property getter: - (id)navigationItems;	// 0x140e8d
// declared property getter: - (id)onNavigate;	// 0x140ead
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x140e7d
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x140e9d
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x140ec1
@end

