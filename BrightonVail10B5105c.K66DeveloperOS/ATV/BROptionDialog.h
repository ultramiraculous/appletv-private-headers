/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class NSMutableArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
	NSString *_tagString;	// 144 = 0x90
	int _currentSelection;	// 148 = 0x94
	NSDictionary *_userInfo;	// 152 = 0x98
	NSMutableArray *_options;	// 156 = 0x9c
	id _delegate;	// 160 = 0xa0
	SEL _actionSelector;	// 164 = 0xa4
}
@property(readonly, retain) NSString *tagString;	// G=0x2bdf1d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x2bdf69; S=0x2bdf2d; converted property
- (id)init;	// 0x2bdb95
- (BOOL)_itemSelected:(id)selected;	// 0x2be09d
- (void)_setSelectedIndex:(long)index;	// 0x2be169
- (void)addOptionText:(id)text;	// 0x2bddbd
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x2bde09
- (void)dealloc;	// 0x2bdcc1
- (float)heightForRow:(long)row;	// 0x2bdfdd
- (long)itemCount;	// 0x2bdfbd
- (id)itemForRow:(long)row;	// 0x2be02d
- (float)listVerticalOffset;	// 0x2bdf79
- (BOOL)rowSelectable:(long)selectable;	// 0x2bdfe1
- (long)selectedIndex;	// 0x2bded1
- (id)selectedText;	// 0x2bde81
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x2bdd51
- (void)setTag:(id)tag;	// 0x2bdee1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x2bdf2d
// converted property getter: - (id)tagString;	// 0x2bdf1d
- (id)titleForRow:(long)row;	// 0x2bdfe5
// converted property getter: - (id)userInfo;	// 0x2bdf69
@end

