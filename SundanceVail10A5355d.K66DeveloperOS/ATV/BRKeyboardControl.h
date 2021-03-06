/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRSpacerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardControl : BRControl {
	BRControl *_mainKeysContainer;	// 80 = 0x50
	BRSpacerControl *_verticalSpacer;	// 84 = 0x54
	BRControl *_actionKeysContainer;	// 88 = 0x58
}
@property(retain) BRControl *actionKeysContainer;	// G=0x2f8609; S=0x2f8619; converted property
@property(retain) id focusedKeyControl;	// G=0x2f8711; S=0x2f8771; converted property
@property(readonly, retain) BRControl *mainKeysContainer;	// G=0x2f85f9; converted property
+ (id)keyboardControlWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x2f816d
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x2f81bd
// converted property getter: - (id)actionKeysContainer;	// 0x2f8609
- (void)dealloc;	// 0x2f82a9
- (id)defaultKeyControl;	// 0x2f867d
- (BOOL)focusIsAtRightEdge;	// 0x2f8ca1
// converted property getter: - (id)focusedKeyControl;	// 0x2f8711
- (CGPoint)focusedPoint;	// 0x2f88f1
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x2f8bb5
- (void)layoutSubcontrols;	// 0x2f8321
// converted property getter: - (id)mainKeysContainer;	// 0x2f85f9
// converted property setter: - (void)setActionKeysContainer:(id)container;	// 0x2f8619
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x2f887d
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x2f8771
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x2f8a2d
- (void)setVerticalSpacing:(float)spacing;	// 0x2f86d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f8509
@end

