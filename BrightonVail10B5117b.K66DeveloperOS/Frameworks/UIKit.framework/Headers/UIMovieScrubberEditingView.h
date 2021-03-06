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
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32f3a351; S=0x32f3a275; 
- (id)initWithFrame:(CGRect)frame;	// 0x32f39941
- (float)_bounceValueForFraction:(float)fraction;	// 0x32f3a7b1
- (void)bounce;	// 0x32f3a369
- (void)dealloc;	// 0x32f39c99
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x32f39e6d
// declared property getter: - (BOOL)isEditing;	// 0x32f3a351
- (CGRect)leftHandleBounds;	// 0x32f3a09d
- (CGRect)leftHandleFrame;	// 0x32f3a0b9
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x32f39de5
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x32f39d21
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x32f39d69
- (CGRect)rightHandleBounds;	// 0x32f3a151
- (CGRect)rightHandleFrame;	// 0x32f3a1ad
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x32f39cfd
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x32f3a275
@end

