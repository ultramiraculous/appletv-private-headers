/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : NSObject {
	UIImage *backgroundImage;	// 4 = 0x4
	UIImage *miniBackgroundImage;	// 8 = 0x8
	UIImage *topBackgroundImage;	// 12 = 0xc
	UIImage *miniTopBackgroundImage;	// 16 = 0x10
	UIImage *shadowImage;	// 20 = 0x14
	UIImage *topShadowImage;	// 24 = 0x18
	BOOL hidesShadow;	// 28 = 0x1c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x30399901; S=0x303998f1; @synthesize
@property(assign, nonatomic) BOOL hidesShadow;	// G=0x30399911; S=0x30431ec1; @synthesize
@property(retain, nonatomic) UIImage *miniBackgroundImage;	// G=0x30431e51; S=0x30399931; @synthesize
@property(retain, nonatomic) UIImage *miniTopBackgroundImage;	// G=0x30431e71; S=0x30431e81; @synthesize
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x30399921; S=0x30431e91; @synthesize
@property(retain, nonatomic) UIImage *topBackgroundImage;	// G=0x30431e61; S=0x303998e1; @synthesize
@property(retain, nonatomic) UIImage *topShadowImage;	// G=0x30431ea1; S=0x30431eb1; @synthesize
// declared property getter: - (id)backgroundImage;	// 0x30399901
- (void)dealloc;	// 0x30431d9d
// declared property getter: - (BOOL)hidesShadow;	// 0x30399911
// declared property getter: - (id)miniBackgroundImage;	// 0x30431e51
// declared property getter: - (id)miniTopBackgroundImage;	// 0x30431e71
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x303998f1
// declared property setter: - (void)setHidesShadow:(BOOL)shadow;	// 0x30431ec1
// declared property setter: - (void)setMiniBackgroundImage:(id)image;	// 0x30399931
// declared property setter: - (void)setMiniTopBackgroundImage:(id)image;	// 0x30431e81
// declared property setter: - (void)setShadowImage:(id)image;	// 0x30431e91
// declared property setter: - (void)setTopBackgroundImage:(id)image;	// 0x303998e1
// declared property setter: - (void)setTopShadowImage:(id)image;	// 0x30431eb1
// declared property getter: - (id)shadowImage;	// 0x30399921
// declared property getter: - (id)topBackgroundImage;	// 0x30431e61
// declared property getter: - (id)topShadowImage;	// 0x30431ea1
@end
