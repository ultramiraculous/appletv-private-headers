/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, UIBarButtonItem, UIImageView, UINavigationBar, NSArray, NSMutableDictionary, UIView;

@interface UINavigationItem : NSObject <NSCoding> {
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
	NSArray *_leftBarButtonItems;	// 44 = 0x2c
	NSArray *_rightBarButtonItems;	// 48 = 0x30
	NSArray *_customLeftViews;	// 52 = 0x34
	NSArray *_customRightViews;	// 56 = 0x38
	BOOL _hidesBackButton;	// 60 = 0x3c
	BOOL _leftItemsSupplementBackButton;	// 61 = 0x3d
	UIImageView *_frozenTitleView;	// 64 = 0x40
	BOOL _barStyleIndependent;	// 68 = 0x44
	int _independentBarStyle;	// 72 = 0x48
	NSArray *_leftItemSpaceList;	// 76 = 0x4c
	NSArray *_rightItemSpaceList;	// 80 = 0x50
	unsigned _leftFlexibleSpaceCount;	// 84 = 0x54
	unsigned _rightFlexibleSpaceCount;	// 88 = 0x58
	NSMutableDictionary *_backgroundImages;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSMutableDictionary *_backgroundImages;	// G=0x32e00135; @synthesize
@property(assign, nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;	// G=0x32cb375d; S=0x32ce9b5d; @synthesize
@property(retain) id _customLeftView;	// G=0x32cabd3d; S=0x32cabc1d; converted property
@property(retain) id _customLeftViews;	// G=0x32cabd51; S=0x32e79cd5; converted property
@property(retain) id _customRightView;	// G=0x32cfe561; S=0x32cfe53d; converted property
@property(retain) id _customRightViews;	// G=0x32cb21dd; S=0x32e79ce5; converted property
@property(assign, nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle;	// G=0x32cee385; S=0x32ce9b31; @synthesize
@property(retain) id _leftBarButtonItem;	// G=0x32cab915; S=0x32cab95d; converted property
@property(retain) id _leftBarButtonItems;	// G=0x32e79eed; S=0x32e79cc5; converted property
@property(assign, nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned _leftFlexibleSpaceCount;	// G=0x32cb69cd; S=0x32cb21cd; @synthesize
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList;	// G=0x32cb68bd; S=0x32cb21b9; @synthesize
@property(retain) id _rightBarButtonItem;	// G=0x32cb8089; S=0x32cfe435; converted property
@property(retain) id _rightBarButtonItems;	// G=0x32e79edd; S=0x32e79cb5; converted property
@property(assign, nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned _rightFlexibleSpaceCount;	// G=0x32cb69dd; S=0x32cfea15; @synthesize
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList;	// G=0x32cb69b9; S=0x32cfea05; @synthesize
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x32cf9cbd; S=0x32e7992d; 
@property(retain) NSString *backButtonTitle;	// G=0x32cf9cd1; S=0x32cf1cd1; converted property
@property(readonly, retain) UIView *backButtonView;	// G=0x32cf1e4d; converted property
@property(retain) id context;	// G=0x32e79be5; S=0x32e79ba1; converted property
@property(retain) id customLeftItem;	// G=0x32e7a019; S=0x32d0cf79; converted property
@property(retain) id customLeftView;	// G=0x32e79dad; S=0x32dffe9d; converted property
@property(retain) id customRightItem;	// G=0x32e7a049; S=0x32e7a039; converted property
@property(retain) id customRightView;	// G=0x32d52431; S=0x32e79ea1; converted property
@property(retain) id customTitleView;	// G=0x32e7a009; S=0x32e79ff9; converted property
@property(retain) id font;	// G=0x32e79b39; S=0x32e79af5; converted property
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x32cb3bc1; S=0x32d48659; 
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;	// G=0x32d4e669; S=0x32cfdf81; 
@property(copy, nonatomic) NSArray *leftBarButtonItems;	// G=0x32cb3b49; S=0x32e79eb5; 
@property(assign, nonatomic) BOOL leftItemsSupplementBackButton;	// G=0x32cb3bd5; S=0x32e79fbd; 
@property(retain) UINavigationBar *navigationBar;	// G=0x32cabebd; S=0x32cee1cd; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x32cee90d; S=0x32d1f135; 
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;	// G=0x32d0cf8d; S=0x32cfe41d; 
@property(copy, nonatomic) NSArray *rightBarButtonItems;	// G=0x32cb3b85; S=0x32e79ec9; 
@property(assign) int tag;	// G=0x32e79b91; S=0x32e79b81; converted property
@property(copy, nonatomic) NSString *title;	// G=0x32cb6389; S=0x32cf1b41; 
@property(retain, nonatomic) UIView *titleView;	// G=0x32cb63c1; S=0x32cf2231; @synthesize=_titleView
@property(assign) float width;	// G=0x32e79aed; S=0x32e79af1; converted property
+ (id)defaultFont;	// 0x32e792e5
- (id)initWithCoder:(id)coder;	// 0x32e7930d
- (id)initWithTitle:(id)title;	// 0x32ce9ad9
- (BOOL)_accumulateViewsFromItems:(id)items isLeft:(BOOL)left refreshViews:(BOOL)views;	// 0x32cabf59
- (id)_automationID;	// 0x32e7a069
// declared property getter: - (id)_backgroundImages;	// 0x32e00135
- (void)_cleanupFrozenTitleView;	// 0x32e798dd
// converted property getter: - (id)_customLeftView;	// 0x32cabd3d
- (id)_customLeftViewCreating:(BOOL)creating;	// 0x32e79d65
// converted property getter: - (id)_customLeftViews;	// 0x32cabd51
- (id)_customLeftViewsCreating:(BOOL)creating;	// 0x32e79cf5
// converted property getter: - (id)_customRightView;	// 0x32cfe561
- (id)_customRightViewCreating:(BOOL)creating;	// 0x32e79e59
// converted property getter: - (id)_customRightViews;	// 0x32cb21dd
- (id)_customRightViewsCreating:(BOOL)creating;	// 0x32e79de9
- (void)_freezeCurrentTitleView;	// 0x32e79775
- (id)_independentBackgroundImageForBarMetrics:(int)barMetrics;	// 0x32cee7fd
// declared property getter: - (int)_independentBarStyle;	// 0x32cee385
- (id)_independentShadowImage;	// 0x32e033e9
// declared property getter: - (BOOL)_isBarStyleIndependent;	// 0x32cb375d
// converted property getter: - (id)_leftBarButtonItem;	// 0x32cab915
// converted property getter: - (id)_leftBarButtonItems;	// 0x32e79eed
// declared property getter: - (unsigned)_leftFlexibleSpaceCount;	// 0x32cb69cd
// declared property getter: - (id)_leftItemSpaceList;	// 0x32cb68bd
- (void)_removeBackButtonView;	// 0x32d167d5
- (void)_removeTitleAndButtonViews;	// 0x32d1676d
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned)index withView:(id)view left:(BOOL)left;	// 0x32e79bf9
// converted property getter: - (id)_rightBarButtonItem;	// 0x32cb8089
// converted property getter: - (id)_rightBarButtonItems;	// 0x32e79edd
// declared property getter: - (unsigned)_rightFlexibleSpaceCount;	// 0x32cb69dd
// declared property getter: - (id)_rightItemSpaceList;	// 0x32cb69b9
- (void)_setBackButtonPressed:(BOOL)pressed;	// 0x32e792b9
- (void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;	// 0x32cf1ce5
// declared property setter: - (void)_setBarStyleIndependent:(BOOL)independent;	// 0x32ce9b5d
- (void)_setCustomLeftRightView:(id)view left:(BOOL)left;	// 0x32cabc49
- (void)_setCustomLeftView:(id)view;	// 0x32cabc31
- (void)_setCustomLeftViews:(id)views;	// 0x32cabd65
- (void)_setCustomRightView:(id)view;	// 0x32cfe54d
- (void)_setCustomRightViews:(id)views;	// 0x32cfe981
- (void)_setIndependentBackgroundImage:(id)image shadowImage:(id)image2 forBarMetrics:(int)barMetrics;	// 0x32dffef5
// declared property setter: - (void)_setIndependentBarStyle:(int)style;	// 0x32ce9b31
- (void)_setLeftBarButtonItem:(id)item;	// 0x32cab971
- (void)_setLeftBarButtonItems:(id)items;	// 0x32d58965
// declared property setter: - (void)_setLeftFlexibleSpaceCount:(unsigned)count;	// 0x32cb21cd
// declared property setter: - (void)_setLeftItemSpaceList:(id)list;	// 0x32cb21b9
- (void)_setRightBarButtonItem:(id)item;	// 0x32cfe445
- (void)_setRightBarButtonItems:(id)items;	// 0x32d589f5
// declared property setter: - (void)_setRightFlexibleSpaceCount:(unsigned)count;	// 0x32cfea15
// declared property setter: - (void)_setRightItemSpaceList:(id)list;	// 0x32cfea05
- (void)_setTitle:(id)title animated:(BOOL)animated;	// 0x32de79d9
- (void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void *)context;	// 0x32e79919
- (id)_titleView;	// 0x32cb7e59
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)barSizeChangeAndApply;	// 0x32ccdadd
// declared property getter: - (id)backBarButtonItem;	// 0x32cf9cbd
// converted property getter: - (id)backButtonTitle;	// 0x32cf9cd1
// converted property getter: - (id)backButtonView;	// 0x32cf1e4d
// converted property getter: - (id)context;	// 0x32e79be5
- (id)currentBackButtonTitle;	// 0x32cf9ba9
// converted property getter: - (id)customLeftItem;	// 0x32e7a019
// converted property getter: - (id)customLeftView;	// 0x32e79dad
// converted property getter: - (id)customRightItem;	// 0x32e7a049
// converted property getter: - (id)customRightView;	// 0x32d52431
// converted property getter: - (id)customTitleView;	// 0x32e7a009
- (void)dealloc;	// 0x32d58815
- (void)encodeWithCoder:(id)coder;	// 0x32e79555
- (id)existingBackButtonView;	// 0x32d24db5
// converted property getter: - (id)font;	// 0x32e79b39
// declared property getter: - (BOOL)hidesBackButton;	// 0x32cb3bc1
// declared property getter: - (id)leftBarButtonItem;	// 0x32d4e669
// declared property getter: - (id)leftBarButtonItems;	// 0x32cb3b49
// declared property getter: - (BOOL)leftItemsSupplementBackButton;	// 0x32cb3bd5
// converted property getter: - (id)navigationBar;	// 0x32cabebd
// declared property getter: - (id)prompt;	// 0x32cee90d
// declared property getter: - (id)rightBarButtonItem;	// 0x32d0cf8d
// declared property getter: - (id)rightBarButtonItems;	// 0x32cb3b85
// declared property setter: - (void)setBackBarButtonItem:(id)item;	// 0x32e7992d
// converted property setter: - (void)setBackButtonTitle:(id)title;	// 0x32cf1cd1
// converted property setter: - (void)setContext:(id)context;	// 0x32e79ba1
// converted property setter: - (void)setCustomLeftItem:(id)item;	// 0x32d0cf79
- (void)setCustomLeftItem:(id)item animated:(BOOL)animated;	// 0x32e7a029
// converted property setter: - (void)setCustomLeftView:(id)view;	// 0x32dffe9d
- (void)setCustomLeftView:(id)view animated:(BOOL)animated;	// 0x32dffeb1
// converted property setter: - (void)setCustomRightItem:(id)item;	// 0x32e7a039
- (void)setCustomRightItem:(id)item animated:(BOOL)animated;	// 0x32e7a059
// converted property setter: - (void)setCustomRightView:(id)view;	// 0x32e79ea1
- (void)setCustomRightView:(id)view animated:(BOOL)animated;	// 0x32e00185
// converted property setter: - (void)setCustomTitleView:(id)view;	// 0x32e79ff9
// converted property setter: - (void)setFont:(id)font;	// 0x32e79af5
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x32d48659
- (void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;	// 0x32d4866d
// declared property setter: - (void)setLeftBarButtonItem:(id)item;	// 0x32cfdf81
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;	// 0x32cab635
// declared property setter: - (void)setLeftBarButtonItems:(id)items;	// 0x32e79eb5
- (void)setLeftBarButtonItems:(id)items animated:(BOOL)animated;	// 0x32e79f5d
// declared property setter: - (void)setLeftItemsSupplementBackButton:(BOOL)button;	// 0x32e79fbd
// converted property setter: - (void)setNavigationBar:(id)bar;	// 0x32cee1cd
- (void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;	// 0x32cab70d
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x32d1f135
// declared property setter: - (void)setRightBarButtonItem:(id)item;	// 0x32cfe41d
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;	// 0x32cb7fd9
// declared property setter: - (void)setRightBarButtonItems:(id)items;	// 0x32e79ec9
- (void)setRightBarButtonItems:(id)items animated:(BOOL)animated;	// 0x32e79efd
// converted property setter: - (void)setTag:(int)tag;	// 0x32e79b81
// declared property setter: - (void)setTitle:(id)title;	// 0x32cf1b41
// declared property setter: - (void)setTitleView:(id)view;	// 0x32cf2231
// converted property setter: - (void)setWidth:(float)width;	// 0x32e79af1
// converted property setter: - (void)set_customLeftView:(id)view;	// 0x32cabc1d
// converted property setter: - (void)set_customLeftViews:(id)views;	// 0x32e79cd5
// converted property setter: - (void)set_customRightView:(id)view;	// 0x32cfe53d
// converted property setter: - (void)set_customRightViews:(id)views;	// 0x32e79ce5
// converted property setter: - (void)set_leftBarButtonItem:(id)item;	// 0x32cab95d
// converted property setter: - (void)set_leftBarButtonItems:(id)items;	// 0x32e79cc5
// converted property setter: - (void)set_rightBarButtonItem:(id)item;	// 0x32cfe435
// converted property setter: - (void)set_rightBarButtonItems:(id)items;	// 0x32e79cb5
// converted property getter: - (int)tag;	// 0x32e79b91
// declared property getter: - (id)title;	// 0x32cb6389
// declared property getter: - (id)titleView;	// 0x32cb63c1
- (void)updateNavigationBarButtonsAnimated:(BOOL)animated;	// 0x32cabde9
// converted property getter: - (float)width;	// 0x32e79aed
@end

