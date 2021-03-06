/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class NSString, NSSet, UIImage, UIView;

@interface UITabBarItem : UIBarItem {
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_selectedImage;	// 28 = 0x1c
	UIImage *_unselectedImage;	// 32 = 0x20
	UIEdgeInsets _imageInsets;	// 36 = 0x24
	NSString *_badgeValue;	// 52 = 0x34
	UIView *_view;	// 56 = 0x38
	int _tag;	// 60 = 0x3c
	id _appearanceStorage;	// 64 = 0x40
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;	// 68 = 0x44
}
@property(assign, nonatomic) SEL action;	// G=0x31d0b779; S=0x31c14789; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x31e62e6d; S=0x31e62ded; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x31e62b85; S=0x31c68429; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31c15bc9; S=0x31c680cd; converted property
@property(retain) UIImage *image;	// G=0x31c13b15; S=0x31c6859d; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x31c6b895; S=0x31c97a55; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x31c69471; S=0x31e62e81; 
@property(assign) int tag;	// G=0x31c13b69; S=0x31c68151; converted property
@property(assign, nonatomic) id target;	// G=0x31d0b789; S=0x31c14779; 
@property(retain) NSString *title;	// G=0x31c6b845; S=0x31c683fd; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x31e62d6d; S=0x31e62c5d; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x31c694c5; S=0x31e62eed; 
@property(retain, nonatomic) UIView *view;	// G=0x31c14e25; S=0x31c6b5c1; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x31c6b411; S=0x31e62dc5; 
+ (id)_appearanceProxyViewClasses;	// 0x31e63091
- (id)init;	// 0x31c68081
- (id)initWithCoder:(id)coder;	// 0x31e6272d
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x31c68021
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x31c68531
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x31c69579
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x31c6959d
- (id)_internalTemplateImage;	// 0x31c69ae9
- (id)_internalTitle;	// 0x31c69bbd
- (void)_setInternalTemplateImage:(id)image;	// 0x31c685c5
- (void)_setInternalTitle:(id)title;	// 0x31c681e9
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x31e62f59
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x31c6b731
- (void)_updateView;	// 0x31c68261
// declared property getter: - (SEL)action;	// 0x31d0b779
// declared property getter: - (BOOL)animatedBadge;	// 0x31e62e6d
// declared property getter: - (id)badgeValue;	// 0x31e62b85
- (void)dealloc;	// 0x31e62abd
- (void)encodeWithCoder:(id)coder;	// 0x31e62911
- (id)finishedSelectedImage;	// 0x31e62bc1
- (id)finishedUnselectedImage;	// 0x31e62bed
// converted property getter: - (id)image;	// 0x31c13b15
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x31c6b895
// converted property getter: - (BOOL)isEnabled;	// 0x31c15bc9
- (BOOL)isSystemItem;	// 0x31c681d1
- (id)nextResponder;	// 0x31e62f39
// declared property getter: - (id)selectedImage;	// 0x31c69471
// declared property setter: - (void)setAction:(SEL)action;	// 0x31c14789
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x31e62ded
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x31c68429
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31c680cd
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x31c6881d
// converted property setter: - (void)setImage:(id)image;	// 0x31c6859d
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x31c97a55
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x31e62e81
// converted property setter: - (void)setTag:(int)tag;	// 0x31c68151
// declared property setter: - (void)setTarget:(id)target;	// 0x31c14779
// converted property setter: - (void)setTitle:(id)title;	// 0x31c683fd
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x31e62c5d
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x31c9760d
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x31e62eed
// declared property setter: - (void)setView:(id)view;	// 0x31c6b5c1
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x31e62dc5
- (int)systemItem;	// 0x31c69ad5
// converted property getter: - (int)tag;	// 0x31c13b69
// declared property getter: - (id)target;	// 0x31d0b789
// converted property getter: - (id)title;	// 0x31c6b845
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x31e62d6d
- (id)titleTextAttributesForState:(unsigned)state;	// 0x31e62c15
// declared property getter: - (id)unselectedImage;	// 0x31c694c5
// declared property getter: - (id)view;	// 0x31c14e25
// declared property getter: - (BOOL)viewIsCustom;	// 0x31c6b411
@end

