/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	UIColor *_selectionColor;	// 40 = 0x28
	float _leftPhase;	// 44 = 0x2c
	float _rightPhase;	// 48 = 0x30
	int _sectionLocation;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x32d4f0d1; S=0x32d4efd1; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x32d4f179; S=0x32d4f0ad; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x32d4fd3d; S=0x32d4f269; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x32d4fd1d; S=0x32d4f2c1; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x32d4fcdd; S=0x32d4f189; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x32d4fd2d; S=0x32d4f2d1; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x32d4fd4d; S=0x32d4f1fd; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x32d4fc3d; S=0x32d4f2e1; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x32d4fc4d; S=0x32d4eed1; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x32f3a685; S=0x32d4f29d; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x32f3a695; S=0x32d4f2f1; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x32dfd869; S=0x32d4f221; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x32d4fc21; S=0x32d4eee1; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x32d4fe2d; S=0x32d4f245; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x32d4f0d1
// declared property getter: - (id)bottomShadowColor;	// 0x32d4f179
- (id)copyWithZone:(NSZone *)zone;	// 0x32d4fe3d
- (void)dealloc;	// 0x32d50271
- (id)description;	// 0x32f3a46d
// declared property getter: - (id)fillColor;	// 0x32d4fd3d
- (unsigned)hash;	// 0x32d4fe4d
- (BOOL)isEqual:(id)equal;	// 0x32d50031
// declared property getter: - (float)leftPhase;	// 0x32d4fd1d
// declared property getter: - (BOOL)opaque;	// 0x32d4fcdd
// declared property getter: - (float)rightPhase;	// 0x32d4fd2d
// declared property getter: - (id)sectionBorderColor;	// 0x32d4fd4d
// declared property getter: - (int)sectionLocation;	// 0x32d4fc3d
// declared property getter: - (BOOL)selected;	// 0x32d4fc4d
// declared property getter: - (id)selectionColor;	// 0x32f3a685
// declared property getter: - (int)selectionStyle;	// 0x32f3a695
// declared property getter: - (id)separatorColor;	// 0x32dfd869
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x32d4efd1
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x32d4f0ad
// declared property setter: - (void)setFillColor:(id)color;	// 0x32d4f269
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x32d4f2c1
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32d4f189
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x32d4f2d1
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x32d4f1fd
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x32d4f2e1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32d4eed1
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x32d4f29d
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x32d4f2f1
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x32d4f221
// declared property setter: - (void)setSize:(CGSize)size;	// 0x32d4eee1
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x32d4f245
// declared property getter: - (CGSize)size;	// 0x32d4fc21
// declared property getter: - (id)topShadowColor;	// 0x32d4fe2d
@end

