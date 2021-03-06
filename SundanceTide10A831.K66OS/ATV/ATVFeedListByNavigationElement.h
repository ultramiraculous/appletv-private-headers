/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedGenericCollectionElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement {
	int _currentIndex;	// 8 = 0x8
	NSArray *_navigationItems;	// 12 = 0xc
	NSString *_onNavigate;	// 16 = 0x10
}
@property(assign, nonatomic) int currentIndex;	// G=0x1565bd; S=0x1565cd; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x1565dd; S=0x1565ed; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x1565fd; S=0x156611; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x156359
// declared property getter: - (int)currentIndex;	// 0x1565bd
- (void)dealloc;	// 0x156559
// declared property getter: - (id)navigationItems;	// 0x1565dd
// declared property getter: - (id)onNavigate;	// 0x1565fd
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x1565cd
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x1565ed
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x156611
@end

