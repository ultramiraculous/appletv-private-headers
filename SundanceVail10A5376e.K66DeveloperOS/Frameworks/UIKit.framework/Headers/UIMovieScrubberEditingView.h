/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImageView;

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
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x304c2c99; S=0x304c2bbd; 
- (id)initWithFrame:(CGRect)frame;	// 0x304c2289
- (float)_bounceValueForFraction:(float)fraction;	// 0x304c30f9
- (void)bounce;	// 0x304c2cb1
- (void)dealloc;	// 0x304c25e1
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x304c27b5
// declared property getter: - (BOOL)isEditing;	// 0x304c2c99
- (CGRect)leftHandleBounds;	// 0x304c29e5
- (CGRect)leftHandleFrame;	// 0x304c2a01
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x304c272d
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x304c2669
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x304c26b1
- (CGRect)rightHandleBounds;	// 0x304c2a99
- (CGRect)rightHandleFrame;	// 0x304c2af5
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x304c2645
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x304c2bbd
@end
