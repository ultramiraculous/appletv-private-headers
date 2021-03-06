/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
	UITableViewCell *_cell;	// 108 = 0x6c
	unsigned _style : 2;	// 112 = 0x70
	unsigned _rotated : 1;	// 112 = 0x70
	unsigned _rotating : 1;	// 112 = 0x70
	unsigned _hiding : 1;	// 112 = 0x70
	unsigned _reserved : 27;	// 112 = 0x70
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x32da0865; S=0x32da084d; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x32da07b1; S=0x32da063d; 
+ (id)_deleteImage;	// 0x32da03dd
+ (id)_deleteImageBackground;	// 0x32b322c9
+ (id)_insertImage;	// 0x32da04ad
+ (CGRect)_minusRect;	// 0x32da0391
+ (id)_multiSelectHighlightedImage;	// 0x32da058d
+ (id)_multiSelectNotSelectedImage;	// 0x32da04e5
+ (id)_multiSelectSelectedImage;	// 0x32da051d
+ (CGSize)defaultSize;	// 0x32b3226d
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x32c8d485
- (id)_currentImage;	// 0x32c8d83d
- (id)_minusView;	// 0x32da0295
- (void)_multiselectColorChanged;	// 0x32da0879
- (void)_toggleRotate;	// 0x32da03b5
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x32da07d9
- (void)_updateImageView;	// 0x32c8e575
// declared property getter: - (BOOL)isHiding;	// 0x32da0865
// declared property getter: - (BOOL)isRotated;	// 0x32da07b1
- (BOOL)isRotating;	// 0x32da07c5
- (void)layoutSubviews;	// 0x32c8d66d
- (void)setFrame:(CGRect)frame;	// 0x32c8d625
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x32da084d
- (void)setHighlighted:(BOOL)highlighted;	// 0x32c8e535
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x32da063d
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x32da0651
- (void)setSelected:(BOOL)selected;	// 0x32da05fd
@end

