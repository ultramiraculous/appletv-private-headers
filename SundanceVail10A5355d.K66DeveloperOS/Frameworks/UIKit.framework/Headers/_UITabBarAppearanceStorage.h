/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIColor, _UITabBarItemAppearanceStorage, UIImage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearanceStorage : NSObject {
	NSMutableDictionary *_dividerImages;	// 4 = 0x4
	UIImage *backgroundImage;	// 8 = 0x8
	UIImage *shadowImage;	// 12 = 0xc
	UIImage *selectionIndicatorImage;	// 16 = 0x10
	UIColor *tintColor;	// 20 = 0x14
	UIColor *selectedImageTintColor;	// 24 = 0x18
	_UITabBarItemAppearanceStorage *tabItemAppearanceStorage;	// 28 = 0x1c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x33c4b4c1; S=0x33c4b4d1; @synthesize
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x33c4b541; S=0x33c4b551; @synthesize
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x33c4b501; S=0x33c4b511; @synthesize
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x33c4b4e1; S=0x33c4b4f1; @synthesize
@property(retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;	// G=0x33c4b231; S=0x33c4b1f5; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33c4b521; S=0x33c4b531; @synthesize
- (id)_dividerImageForLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x33c4b35d
- (void)_setDividerImage:(id)image forLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x33c4b291
- (id)_tabItemAppearanceStorage;	// 0x33c4b281
// declared property getter: - (id)backgroundImage;	// 0x33c4b4c1
- (void)dealloc;	// 0x33c4b3f9
// declared property getter: - (id)selectedImageTintColor;	// 0x33c4b541
// declared property getter: - (id)selectionIndicatorImage;	// 0x33c4b501
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x33c4b4d1
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x33c4b551
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x33c4b511
// declared property setter: - (void)setShadowImage:(id)image;	// 0x33c4b4f1
// declared property setter: - (void)setTabItemAppearanceStorage:(id)storage;	// 0x33c4b1f5
// declared property setter: - (void)setTintColor:(id)color;	// 0x33c4b531
// declared property getter: - (id)shadowImage;	// 0x33c4b4e1
// declared property getter: - (id)tabItemAppearanceStorage;	// 0x33c4b231
// declared property getter: - (id)tintColor;	// 0x33c4b521
@end
