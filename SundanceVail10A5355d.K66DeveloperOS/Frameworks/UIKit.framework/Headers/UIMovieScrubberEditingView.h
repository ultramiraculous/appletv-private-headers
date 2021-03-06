/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
	UIImageView *_leftImageView;	// 84 = 0x54
	UIImageView *_middleImageView;	// 88 = 0x58
	UIImageView *_rightImageView;	// 92 = 0x5c
	NSArray *_activeImages;	// 96 = 0x60
	NSArray *_inactiveImages;	// 100 = 0x64
	unsigned _isActive : 1;	// 104 = 0x68
	unsigned _centerHandleEnabled : 1;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x33c76749; S=0x33c7666d; 
- (id)initWithFrame:(CGRect)frame;	// 0x33c75d39
- (float)_bounceValueForFraction:(float)fraction;	// 0x33c76ba9
- (void)bounce;	// 0x33c76761
- (void)dealloc;	// 0x33c76091
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x33c76265
// declared property getter: - (BOOL)isEditing;	// 0x33c76749
- (CGRect)leftHandleBounds;	// 0x33c76495
- (CGRect)leftHandleFrame;	// 0x33c764b1
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x33c761dd
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x33c76119
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x33c76161
- (CGRect)rightHandleBounds;	// 0x33c76549
- (CGRect)rightHandleFrame;	// 0x33c765a5
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x33c760f5
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x33c7666d
@end

