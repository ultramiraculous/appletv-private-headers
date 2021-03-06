/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVLikesBadgeView : BRControl {
	BRTextControl *_textControl;	// 84 = 0x54
	BRImageControl *_imageControl;	// 88 = 0x58
}
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0x3f61b5; S=0x3f61c5; @synthesize=_imageControl
@property(retain, nonatomic) BRTextControl *textControl;	// G=0x3f617d; S=0x3f618d; @synthesize=_textControl
+ (id)likesBadgeWithNumberOfLikes:(unsigned)likes numberOfDislikes:(unsigned)dislikes;	// 0x3f5989
+ (id)likesBadgeWithNumberOfLikes:(unsigned)likes numberOfDislikes:(unsigned)dislikes textAttributes:(id)attributes imageAlpha:(float)alpha;	// 0x3f5a25
- (id)initWithNumberOfLikes:(unsigned)likes numberOfDislikes:(unsigned)dislikes textAttributes:(id)attributes imageAlpha:(float)alpha;	// 0x3f5a8d
- (void).cxx_destruct;	// 0x3f61ed
// declared property getter: - (id)imageControl;	// 0x3f61b5
- (void)layoutSubcontrols;	// 0x3f5f01
// declared property setter: - (void)setImageControl:(id)control;	// 0x3f61c5
// declared property setter: - (void)setTextControl:(id)control;	// 0x3f618d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3f5ded
// declared property getter: - (id)textControl;	// 0x3f617d
@end

