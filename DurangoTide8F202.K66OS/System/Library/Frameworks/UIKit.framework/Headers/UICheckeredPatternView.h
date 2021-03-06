/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

@interface UICheckeredPatternView : UIView {
	UIColor *m_patternColor;	// 44 = 0x2c
	UIColor *m_checkerColor;	// 48 = 0x30
}
@property(retain) UIColor *checkerColor;	// G=0x30612d79; S=0x30698465; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30612b99
- (BOOL)_canDrawContent;	// 0x30612c1d
// converted property getter: - (id)checkerColor;	// 0x30612d79
- (void)dealloc;	// 0x30747001
// converted property setter: - (void)setCheckerColor:(id)color;	// 0x30698465
- (void)updatePatternColor;	// 0x30612c3d
@end

