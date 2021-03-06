/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UIHighlightView : UIView {
@private
	UIColor *_color;	// 48 = 0x30
	float _cornerRadius;	// 52 = 0x34
	CGRect _invertedHighlightClipRect;	// 56 = 0x38
	NSArray *_cornerRadii;	// 72 = 0x48
	NSMutableArray *_innerBounds;	// 76 = 0x4c
	NSMutableArray *_innerQuads;	// 80 = 0x50
	BOOL _invertHighlight;	// 84 = 0x54
}
- (id)initWithFrame:(CGRect)frame;	// 0x32dc693d
- (void)cleanUp;	// 0x32dc69ed
- (void)dealloc;	// 0x32e91ced
- (void)drawRect:(CGRect)rect;	// 0x32dcc8fd
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32e92181
- (void)setColor:(id)color;	// 0x32dc6a4d
- (void)setCornerRadii:(id)radii;	// 0x32dcc381
- (void)setCornerRadius:(float)radius;	// 0x32dc6a3d
- (void)setFrame:(CGRect)frame;	// 0x32dc699d
- (void)setFrames:(id)frames boundaryRect:(CGRect)rect;	// 0x32dcc55d
- (void)setInvertHighlight:(BOOL)highlight clipRect:(CGRect)rect;	// 0x32e92155
- (void)setQuads:(id)quads boundaryRect:(CGRect)rect;	// 0x32e91d61
@end

