/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UINavigationBar, UIBarButtonItem, NSString, UIImageView, UIView;

@interface UINavigationItem : NSObject <NSCoding> {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_backButtonTitle;	// 8 = 0x8
	UIBarButtonItem *_backBarButtonItem;	// 12 = 0xc
	NSString *_prompt;	// 16 = 0x10
	int _tag;	// 20 = 0x14
	id _context;	// 24 = 0x18
	UINavigationBar *_navigationBar;	// 28 = 0x1c
	UIView *_defaultTitleView;	// 32 = 0x20
	UIView *_titleView;	// 36 = 0x24
	UIView *_backButtonView;	// 40 = 0x28
	UIBarButtonItem *_leftBarButtonItem;	// 44 = 0x2c
	UIBarButtonItem *_rightBarButtonItem;	// 48 = 0x30
	UIView *_customLeftView;	// 52 = 0x34
	UIView *_customRightView;	// 56 = 0x38
	BOOL _hidesBackButton;	// 60 = 0x3c
	UIImageView *_frozenTitleView;	// 64 = 0x40
}
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x320000f1; S=0x320e2939; 
@property(retain) NSString *backButtonTitle;	// G=0x32000101; S=0x31faa865; converted property
@property(readonly, retain) UIView *backButtonView;	// G=0x31fd44e9; converted property
@property(retain) id context;	// G=0x320e1715; S=0x320e2885; converted property
@property(retain) id customLeftItem;	// G=0x320e27d1; S=0x32006b5d; converted property
@property(retain) UIView *customLeftView;	// G=0x31faf4f1; S=0x3206dc3d; converted property
@property(retain) id customRightItem;	// G=0x320e2791; S=0x320e27a5; converted property
@property(retain) UIView *customRightView;	// G=0x31faf5bd; S=0x31fe380d; converted property
@property(retain) id customTitleView;	// G=0x320e27e5; S=0x320e27f9; converted property
@property(retain) id font;	// G=0x320e28c1; S=0x320e28fd; converted property
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x31fb4ba9; S=0x3200e62d; 
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;	// G=0x31fa9fb1; S=0x31fe37dd; 
@property(retain) UINavigationBar *navigationBar;	// G=0x31faa759; S=0x31fae775; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x31fb4c6d; S=0x320afce9; 
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;	// G=0x31faa769; S=0x31fe37f5; 
@property(assign) int tag;	// G=0x320e1705; S=0x320e16f5; converted property
@property(copy, nonatomic) NSString *title;	// G=0x31fb4ad5; S=0x31fb8209; 
@property(retain, nonatomic) UIView *titleView;	// G=0x31faeaa9; S=0x31fff819; @synthesize=_titleView
@property(assign) float width;	// G=0x320e16ed; S=0x320e16f1; converted property
+ (id)defaultFont;	// 0x320e2d39
- (id)initWithCoder:(id)coder;	// 0x320e2bc5
- (id)initWithTitle:(id)title;	// 0x31fa9f61
- (id)_automationID;	// 0x320e274d
- (void)_cleanupFrozenTitleView;	// 0x320e2a3d
- (id)_customLeftView;	// 0x31fae8d5
- (id)_customRightView;	// 0x31fae8e5
- (void)_freezeCurrentTitleView;	// 0x320e403d
- (id)_leftBarButtonItem;	// 0x31faa699
- (void)_removeBackButtonView;	// 0x31ff2f69
- (void)_removeCustomLeftView;	// 0x320e2849
- (void)_removeCustomRightView;	// 0x320e280d
- (void)_removeTitleAndButtonViews;	// 0x31ff2f09
- (id)_rightBarButtonItem;	// 0x31faa855
- (void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;	// 0x31faa87d
- (void)_setCustomLeftView:(id)view;	// 0x31ff2fa5
- (void)_setCustomRightView:(id)view;	// 0x31ff2fed
- (void)_setLeftBarButtonItem:(id)item;	// 0x31ff3035
- (void)_setRightBarButtonItem:(id)item;	// 0x31ff308d
- (void)_setTitle:(id)title animated:(BOOL)animated;	// 0x320981a5
- (void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void *)context;	// 0x320e2a29
- (id)_titleView;	// 0x31faea25
- (void)_updateViewsForBarSizeChangeIfNecessary;	// 0x31faf149
// declared property getter: - (id)backBarButtonItem;	// 0x320000f1
// converted property getter: - (id)backButtonTitle;	// 0x32000101
// converted property getter: - (id)backButtonView;	// 0x31fd44e9
// converted property getter: - (id)context;	// 0x320e1715
- (id)currentBackButtonTitle;	// 0x31fffff9
// converted property getter: - (id)customLeftItem;	// 0x320e27d1
// converted property getter: - (id)customLeftView;	// 0x31faf4f1
// converted property getter: - (id)customRightItem;	// 0x320e2791
// converted property getter: - (id)customRightView;	// 0x31faf5bd
// converted property getter: - (id)customTitleView;	// 0x320e27e5
- (void)dealloc;	// 0x31ff2e11
- (void)encodeWithCoder:(id)coder;	// 0x320e2a79
- (id)existingBackButtonView;	// 0x31fe3ed5
// converted property getter: - (id)font;	// 0x320e28c1
// declared property getter: - (BOOL)hidesBackButton;	// 0x31fb4ba9
// declared property getter: - (id)leftBarButtonItem;	// 0x31fa9fb1
// converted property getter: - (id)navigationBar;	// 0x31faa759
// declared property getter: - (id)prompt;	// 0x31fb4c6d
// declared property getter: - (id)rightBarButtonItem;	// 0x31faa769
// declared property setter: - (void)setBackBarButtonItem:(id)item;	// 0x320e2939
// converted property setter: - (void)setBackButtonTitle:(id)title;	// 0x31faa865
// converted property setter: - (void)setContext:(id)context;	// 0x320e2885
// converted property setter: - (void)setCustomLeftItem:(id)item;	// 0x32006b5d
- (void)setCustomLeftItem:(id)item animated:(BOOL)animated;	// 0x320e27b9
// converted property setter: - (void)setCustomLeftView:(id)view;	// 0x3206dc3d
- (void)setCustomLeftView:(id)view animated:(BOOL)animated;	// 0x3206dc55
// converted property setter: - (void)setCustomRightItem:(id)item;	// 0x320e27a5
- (void)setCustomRightItem:(id)item animated:(BOOL)animated;	// 0x320e2779
// converted property setter: - (void)setCustomRightView:(id)view;	// 0x31fe380d
- (void)setCustomRightView:(id)view animated:(BOOL)animated;	// 0x31fe3825
// converted property setter: - (void)setCustomTitleView:(id)view;	// 0x320e27f9
// converted property setter: - (void)setFont:(id)font;	// 0x320e28fd
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x3200e62d
- (void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;	// 0x3200e645
// declared property setter: - (void)setLeftBarButtonItem:(id)item;	// 0x31fe37dd
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;	// 0x31faa4b9
// converted property setter: - (void)setNavigationBar:(id)bar;	// 0x31fae775
- (void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;	// 0x31faa4e5
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x320afce9
// declared property setter: - (void)setRightBarButtonItem:(id)item;	// 0x31fe37f5
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;	// 0x31faa829
// converted property setter: - (void)setTag:(int)tag;	// 0x320e16f5
// declared property setter: - (void)setTitle:(id)title;	// 0x31fb8209
// declared property setter: - (void)setTitleView:(id)view;	// 0x31fff819
// converted property setter: - (void)setWidth:(float)width;	// 0x320e16f1
// converted property getter: - (int)tag;	// 0x320e1705
// declared property getter: - (id)title;	// 0x31fb4ad5
// declared property getter: - (id)titleView;	// 0x31faeaa9
- (void)updateNavigationBarButtonsAnimated:(BOOL)animated;	// 0x31faa6a9
// converted property getter: - (float)width;	// 0x320e16ed
@end
