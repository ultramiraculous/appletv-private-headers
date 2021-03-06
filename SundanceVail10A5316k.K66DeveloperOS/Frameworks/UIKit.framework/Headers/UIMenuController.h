/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UICalloutBarDelegate.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
@private
	CGRect _targetRect;	// 4 = 0x4
	int _arrowDirection;	// 20 = 0x14
}
@property(assign, nonatomic) int arrowDirection;	// G=0x30347a31; S=0x30347a41; @synthesize=_arrowDirection
@property(readonly, assign, nonatomic) CGRect menuFrame;	// G=0x303479d1; 
@property(copy, nonatomic) NSArray *menuItems;	// G=0x30347989; S=0x301d9d45; 
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;	// G=0x30187c71; S=0x303476a1; 
+ (id)sharedMenuController;	// 0x30184ca9
- (id)init;	// 0x30184cf1
- (BOOL)_menuHidden;	// 0x301fd1e5
- (void)_setTargetRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x30347929
- (BOOL)_updateAnimated:(BOOL)animated checkVisible:(BOOL)visible;	// 0x30347a51
- (void)_windowWillRotate:(id)_window;	// 0x303476b5
// declared property getter: - (int)arrowDirection;	// 0x30347a31
- (void)calloutBar:(id)bar didFinishAnimation:(id)animation;	// 0x301dd0fd
- (void)calloutBar:(id)bar willStartAnimation:(id)animation;	// 0x301dcf51
- (void)dealloc;	// 0x30347645
// declared property getter: - (BOOL)isMenuVisible;	// 0x30187c71
// declared property getter: - (CGRect)menuFrame;	// 0x303479d1
// declared property getter: - (id)menuItems;	// 0x30347989
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x30347a41
// declared property setter: - (void)setMenuItems:(id)items;	// 0x301d9d45
// declared property setter: - (void)setMenuVisible:(BOOL)visible;	// 0x303476a1
- (void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;	// 0x301fcf89
- (void)setTargetRect:(CGRect)rect inView:(id)view;	// 0x303476c9
- (void)update;	// 0x303479bd
@end

