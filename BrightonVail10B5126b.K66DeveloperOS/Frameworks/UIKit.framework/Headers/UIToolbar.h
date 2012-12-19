/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "_UIShadowedView.h"

@class NSArray, UIImageView, UIColor;

@interface UIToolbar : UIView <_UIShadowedView> {
	id _delegate;	// 84 = 0x54
	NSArray *_items;	// 88 = 0x58
	UIColor *_tintColor;	// 92 = 0x5c
	struct {
		unsigned barStyle : 2;
		unsigned mode : 2;
		unsigned wasEnabled : 1;
		unsigned downButtonSentAction : 1;
		unsigned isTranslucent : 1;
		unsigned forceTopBarAppearance : 1;
		unsigned autolayoutIsLocked : 1;
	} _toolbarFlags;	// 96 = 0x60
	CFDictionaryRef _groups;	// 100 = 0x64
	NSArray *_buttonItems;	// 104 = 0x68
	int _currentButtonGroup;	// 108 = 0x6c
	int _pressedTag;	// 112 = 0x70
	float _extraEdgeInsets;	// 116 = 0x74
	UIView *_backgroundView;	// 120 = 0x78
	id _appearanceStorage;	// 124 = 0x7c
	id _currentAlert;	// 128 = 0x80
	UIImageView *_shadowView;	// 132 = 0x84
	float *_fadedItemAlphas;	// 136 = 0x88
}
@property(assign, nonatomic, setter=_setAutoLayoutIsLocked:) BOOL _autolayoutIsLocked;	// G=0x32d071f9; S=0x32ba21c9; 
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView;	// G=0x32c7605d; S=0x32b90a45; @synthesize
@property(assign, nonatomic) int barStyle;	// G=0x32b926e9; S=0x32b96155; 
@property(retain) NSArray *buttonItems;	// G=0x32bb9789; S=0x32d06d29; converted property
@property(readonly, assign) int currentButtonGroup;	// G=0x32b9c575; converted property
@property(assign) id delegate;	// G=0x32b94c4d; S=0x32c7210d; converted property
@property(assign) float extraEdgeInsets;	// G=0x32d05ba1; S=0x32d05b91; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x32bc5729; S=0x32d05c25; 
@property(assign) int mode;	// G=0x32b94a31; S=0x32d05bb5; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32b92bed; S=0x32ba21f1; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32ba3edd; S=0x32c69fe1; 
+ (float)_buttonGap;	// 0x32b95df1
+ (Class)defaultButtonClass;	// 0x32bb9675
+ (id)defaultButtonFont;	// 0x32bb6df5
+ (float)defaultHeight;	// 0x32b97f59
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x32b97f71
+ (float)defaultSelectionModeHeight;	// 0x32d06845
+ (Class)defaultTextButtonClass;	// 0x32bb6dd9
- (id)initInView:(id)view withFrame:(CGRect)frame withItemList:(id)itemList;	// 0x32bb5511
- (id)initInView:(id)view withFrame:(CGRect)frame withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x32d06f59
- (id)initInView:(id)view withItemList:(id)itemList;	// 0x32bb53f5
- (id)initInView:(id)view withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x32d070d9
- (id)initWithCoder:(id)coder;	// 0x32d05819
- (id)initWithFrame:(CGRect)frame;	// 0x32b8fb55
- (void)_activityViewControllerIsAppearing:(id)appearing;	// 0x32c7bf91
- (void)_activityViewControllerIsDisappearing:(id)disappearing;	// 0x32c886d9
- (void)_adjustButtonPressed:(id)pressed;	// 0x32d073b9
- (void)_alertIsAppearing:(id)appearing;	// 0x32d06285
- (void)_alertIsDisappearing:(id)disappearing;	// 0x32ca48cd
// declared property getter: - (BOOL)_autolayoutIsLocked;	// 0x32d071f9
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x32f24335
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x32f2438d
- (id)_backgroundView;	// 0x32d0579d
- (void)_buttonBarFinishedAnimating;	// 0x32d068fd
- (void)_buttonCancel:(id)cancel;	// 0x32d07381
- (void)_buttonDown:(id)down;	// 0x32d0723d
- (void)_buttonDownDelayed:(id)delayed;	// 0x32d07295
- (id)_buttonName:(id)name withType:(int)type;	// 0x32d075e9
- (void)_buttonUp:(id)up;	// 0x32d072dd
- (id)_buttonWithDescription:(id)description;	// 0x32bb62a1
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32d05f49
- (id)_currentButtons;	// 0x32d07471
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x32b90589
- (id)_customToolbarAppearance;	// 0x32d07215
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x32d064ed
- (id)_descriptionForTag:(int)tag;	// 0x32d07229
- (void)_didFinishHidingRetainedOldItems:(id)items;	// 0x32b96049
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b982a1
- (float)_edgeMarginForBorderedItem:(BOOL)borderedItem;	// 0x32b95d65
- (void)_fadeInItems;	// 0x32d061b5
- (void)_fadeOutItems;	// 0x32d060a1
- (void)_finishButtonAnimation:(int)animation forButton:(int)button;	// 0x32d075e5
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x32c3eecd
- (CGRect)_frameOfBarButtonItem:(id)barButtonItem;	// 0x32d06d91
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x32f24331
- (BOOL)_hidesShadow;	// 0x32d06781
- (BOOL)_isInNavigationBar;	// 0x32b9085d
- (BOOL)_isTopBar;	// 0x32b906c1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32d05959
- (void)_positionToolbarButtons:(id)buttons ignoringItem:(id)item;	// 0x32b95fe1
- (id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item actuallyRepositionButtons:(BOOL)buttons3;	// 0x32b94c61
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x32d05ca5
// declared property setter: - (void)_setAutoLayoutIsLocked:(BOOL)locked;	// 0x32ba21c9
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x32d06e21
- (void)_setBackgroundView:(id)view;	// 0x32d057ad
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x32d06e59
- (void)_setForceTopBarAppearance:(BOOL)appearance;	// 0x32d06d6d
- (void)_setHidesShadow:(BOOL)shadow;	// 0x32d067a5
// declared property setter: - (void)_setShadowView:(id)view;	// 0x32b90a45
- (void)_setTintColor:(id)color force:(BOOL)force;	// 0x32b91b05
// declared property getter: - (id)_shadowView;	// 0x32c7605d
- (void)_showButtons:(int *)buttons withCount:(int)count group:(int)group withDuration:(double)duration adjustPositions:(BOOL)positions skipTag:(int)tag;	// 0x32bb58c1
- (BOOL)_subclassImplementsDrawRect;	// 0x32b8fba5
- (void)_updateBackgroundImage;	// 0x32b8fe21
- (void)_updateItemsForNewFrame:(id)newFrame;	// 0x32b91619
- (void)_updateOpacity;	// 0x32b91ad1
- (void)_updateScriptingInfo:(id)info view:(id)view;	// 0x32c2fb75
- (void)addConstraint:(id)constraint;	// 0x32d05e59
- (void)animateToolbarItemIndex:(unsigned)index duration:(double)duration target:(id)target didFinishSelector:(SEL)selector;	// 0x32d06461
- (void)animateWithDuration:(float)duration forButton:(int)button;	// 0x32d06b8d
- (id)backgroundImageForToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x32d065c9
// declared property getter: - (int)barStyle;	// 0x32b926e9
// converted property getter: - (id)buttonItems;	// 0x32bb9789
- (id)createButtonWithDescription:(id)description;	// 0x32bb654d
// converted property getter: - (int)currentButtonGroup;	// 0x32b9c575
- (void)dealloc;	// 0x32bc4bb9
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x32ba1f11
// converted property getter: - (id)delegate;	// 0x32b94c4d
- (void)drawRect:(CGRect)rect;	// 0x32d06bc5
- (void)encodeWithCoder:(id)coder;	// 0x32d05aa9
// converted property getter: - (float)extraEdgeInsets;	// 0x32d05ba1
- (void)getVisibleButtonTags:(int *)tags count:(unsigned *)count maxItems:(unsigned)items;	// 0x32d069dd
- (CGSize)intrinsicContentSize;	// 0x32d05f4d
- (void)invalidateIntrinsicContentSize;	// 0x32d05fb9
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80fa9
- (BOOL)isMinibar;	// 0x32b8fda5
// declared property getter: - (BOOL)isTranslucent;	// 0x32ba3edd
// declared property getter: - (id)items;	// 0x32bc5729
- (void)layoutSubviews;	// 0x32b9f4e9
// converted property getter: - (int)mode;	// 0x32b94a31
- (BOOL)onStateForButton:(int)button;	// 0x32d06b35
- (void)positionButtons:(id)buttons tags:(int *)tags count:(int)count group:(int)group;	// 0x32bb772d
- (void)registerButtonGroup:(int)group withButtons:(int *)buttons withCount:(int)count;	// 0x32d0691d
- (void)removeConstraint:(id)constraint;	// 0x32d05ed1
- (id)scriptingInfoWithChildren;	// 0x32c2f655
- (void)setAutoresizingMask:(unsigned)mask;	// 0x32b96169
- (void)setBackgroundImage:(id)image forToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x32c69519
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x32d06ae1
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x32d06a8d
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x32bb9799
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32b96155
- (void)setBarStyle:(int)style force:(BOOL)force;	// 0x32b9183d
- (void)setBounds:(CGRect)bounds;	// 0x32ba2045
- (void)setButtonBarTrackingMode:(int)mode;	// 0x32bb57b5
// converted property setter: - (void)setButtonItems:(id)items;	// 0x32d06d29
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32c7210d
// converted property setter: - (void)setExtraEdgeInsets:(float)insets;	// 0x32d05b91
- (void)setFrame:(CGRect)frame;	// 0x32b8fc25
// declared property setter: - (void)setItems:(id)items;	// 0x32d05c25
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x32b90fd9
// converted property setter: - (void)setMode:(int)mode;	// 0x32d05bb5
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x32d06b5d
- (void)setShadowImage:(id)image forToolbarPosition:(int)toolbarPosition;	// 0x32d06625
// declared property setter: - (void)setTintColor:(id)color;	// 0x32ba21f1
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x32d05de1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32c69fe1
- (id)shadowImageForToolbarPosition:(int)toolbarPosition;	// 0x32d0674d
- (void)showButtonGroup:(int)group withDuration:(double)duration;	// 0x32b9c589
- (void)showButtons:(int *)buttons withCount:(int)count withDuration:(double)duration;	// 0x32bb588d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32ba1ddd
// declared property getter: - (id)tintColor;	// 0x32b92bed
@end
