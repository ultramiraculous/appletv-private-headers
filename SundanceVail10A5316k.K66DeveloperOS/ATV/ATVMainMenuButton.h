/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, BRReflectionControl, NSDictionary, BRCursorLayer, NSString, BRImageControl, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButton : BRControl {
	BRImageControl *_imageControl;	// 80 = 0x50
	BRReflectionControl *_reflectionControl;	// 84 = 0x54
	BRMarqueeTextControl *_titleControl;	// 88 = 0x58
	BRImageControl *_shadowControl;	// 92 = 0x5c
	NSDictionary *_attributeDictionary;	// 96 = 0x60
	NSDictionary *_reflectionInfo;	// 100 = 0x64
	float _titleGap;	// 104 = 0x68
	BOOL _alwaysShowsTitle;	// 108 = 0x6c
	BOOL _shadowEnabled;	// 109 = 0x6d
	BOOL _reflectionEnabled;	// 110 = 0x6e
	BRCursorLayer *_cursorLayer;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL alwaysShowsTitle;	// G=0x117bcd; S=0x1176fd; @synthesize=_alwaysShowsTitle
@property(retain, nonatomic) BRCursorLayer *cursorLayer;	// G=0x117bfd; S=0x1178d1; @synthesize=_cursorLayer
@property(assign, nonatomic) BRImage *image;	// G=0x1175f9; S=0x117619; 
@property(assign, nonatomic, getter=isReflectionEnabled) BOOL reflectionEnabled;	// G=0x117bed; S=0x117781; @synthesize=_reflectionEnabled
@property(assign, nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;	// G=0x117bdd; S=0x117729; @synthesize=_shadowEnabled
@property(copy, nonatomic) NSString *title;	// G=0x117639; S=0x117671; 
@property(assign, nonatomic) float titleGap;	// G=0x117bad; S=0x117bbd; @synthesize=_titleGap
- (id)init;	// 0x116d51
- (id)initWithLayout:(id)layout;	// 0x116eb1
- (CGRect)_frameForImageControl;	// 0x1179e1
- (id)accessibilityLabel;	// 0x117b71
- (id)accessibilityTraitsList;	// 0x117b81
// declared property getter: - (BOOL)alwaysShowsTitle;	// 0x117bcd
// declared property getter: - (id)cursorLayer;	// 0x117bfd
- (void)dealloc;	// 0x116fb5
- (CGRect)focusCursorFrame;	// 0x117aa9
// declared property getter: - (id)image;	// 0x1175f9
- (BOOL)isAccessibilityElement;	// 0x117b6d
// declared property getter: - (BOOL)isReflectionEnabled;	// 0x117bed
// declared property getter: - (BOOL)isShadowEnabled;	// 0x117bdd
- (void)layoutSubcontrols;	// 0x117045
- (float)preferredCursorRadius;	// 0x1175f1
// declared property setter: - (void)setAlwaysShowsTitle:(BOOL)title;	// 0x1176fd
// declared property setter: - (void)setCursorLayer:(id)layer;	// 0x1178d1
// declared property setter: - (void)setImage:(id)image;	// 0x117619
// declared property setter: - (void)setReflectionEnabled:(BOOL)enabled;	// 0x117781
// declared property setter: - (void)setShadowEnabled:(BOOL)enabled;	// 0x117729
// declared property setter: - (void)setTitle:(id)title;	// 0x117671
// declared property setter: - (void)setTitleGap:(float)gap;	// 0x117bbd
// declared property getter: - (id)title;	// 0x117639
// declared property getter: - (float)titleGap;	// 0x117bad
@end

