/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateToggleButton : UIButton {
}
@property(copy, nonatomic) NSString *arrowDirection;	// G=0x3066be75; S=0x3066be89; 
- (id)initWithFrame:(CGRect)frame;	// 0x3066bbfd
- (id)arrowColorForState:(unsigned)state;	// 0x3066bf0d
// declared property getter: - (id)arrowDirection;	// 0x3066be75
- (CGRect)labelFrameFromFrame:(CGRect)frame;	// 0x3066bd0d
- (void)layoutSubviews;	// 0x3066bd65
- (void)setArrowColor:(id)color forState:(unsigned)state;	// 0x3066bf1d
// declared property setter: - (void)setArrowDirection:(id)direction;	// 0x3066be89
@end

