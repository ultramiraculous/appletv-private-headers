/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UILabeledPushButton : UIThreePartButton {
@private
	UILabel *_textLabel;	// 172 = 0xac
	float _labelFontSize;	// 176 = 0xb0
	float _labelOffset;	// 180 = 0xb4
}
@property(retain) id label;	// G=0x3036a3f9; S=0x3036a155; converted property
@property(assign, nonatomic) float labelFontSize;	// G=0x3036a445; S=0x3036a419; 
@property(assign, nonatomic) float labelOffset;	// G=0x3036a9a1; S=0x3036a9b1; @synthesize=_labelOffset
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x3036a66d
- (void)dealloc;	// 0x3036a109
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x3036a5e1
// converted property getter: - (id)label;	// 0x3036a3f9
// declared property getter: - (float)labelFontSize;	// 0x3036a445
// declared property getter: - (float)labelOffset;	// 0x3036a9a1
- (void)layoutSubviews;	// 0x3036a465
- (void)setHighlighted:(BOOL)highlighted;	// 0x3036a599
// converted property setter: - (void)setLabel:(id)label;	// 0x3036a155
// declared property setter: - (void)setLabelFontSize:(float)size;	// 0x3036a419
// declared property setter: - (void)setLabelOffset:(float)offset;	// 0x3036a9b1
@end

