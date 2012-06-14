/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSDictionary, NSNumber, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage : NSObject {
@private
	UIImage *backgroundImage;	// 4 = 0x4
	UIImage *miniBackgroundImage;	// 8 = 0x8
	NSDictionary *textAttributes;	// 12 = 0xc
	NSNumber *titleVerticalAdjustment;	// 16 = 0x10
	NSNumber *miniTitleVerticalAdjustment;	// 20 = 0x14
	BOOL reversesShadowOffset;	// 24 = 0x18
	_UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;	// G=0x300ead39; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x301e2869; S=0x301e2879; @synthesize
@property(readonly, assign, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;	// G=0x300ea561; 
@property(retain, nonatomic) UIImage *miniBackgroundImage;	// G=0x301e289d; S=0x301e28ad; @synthesize
@property(retain, nonatomic) NSNumber *miniTitleVerticalAdjustment;	// G=0x301e2919; S=0x301e2929; @synthesize
@property(assign, nonatomic) BOOL reversesShadowOffset;	// G=0x301e294d; S=0x301e295d; @synthesize
@property(copy, nonatomic) NSDictionary *textAttributes;	// G=0x300eaa9d; S=0x301e28d1; @synthesize
@property(retain, nonatomic) NSNumber *titleVerticalAdjustment;	// G=0x300eaaad; S=0x301e28f5; @synthesize
// declared property getter: - (id)_barButtonAppearanceStorage;	// 0x300ead39
// declared property getter: - (id)backgroundImage;	// 0x301e2869
// declared property getter: - (id)barButtonAppearanceStorage;	// 0x300ea561
- (void)dealloc;	// 0x301e27b9
// declared property getter: - (id)miniBackgroundImage;	// 0x301e289d
// declared property getter: - (id)miniTitleVerticalAdjustment;	// 0x301e2919
// declared property getter: - (BOOL)reversesShadowOffset;	// 0x301e294d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x301e2879
// declared property setter: - (void)setMiniBackgroundImage:(id)image;	// 0x301e28ad
// declared property setter: - (void)setMiniTitleVerticalAdjustment:(id)adjustment;	// 0x301e2929
// declared property setter: - (void)setReversesShadowOffset:(BOOL)offset;	// 0x301e295d
// declared property setter: - (void)setTextAttributes:(id)attributes;	// 0x301e28d1
// declared property setter: - (void)setTitleVerticalAdjustment:(id)adjustment;	// 0x301e28f5
// declared property getter: - (id)textAttributes;	// 0x300eaa9d
// declared property getter: - (id)titleVerticalAdjustment;	// 0x300eaaad
@end
