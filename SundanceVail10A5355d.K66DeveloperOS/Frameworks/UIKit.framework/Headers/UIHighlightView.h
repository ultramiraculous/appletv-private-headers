/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIColor, NSArray;

__attribute__((visibility("hidden")))
@interface UIHighlightView : UIView {
	UIColor *_color;	// 84 = 0x54
	float _cornerRadius;	// 88 = 0x58
	CGRect _invertedHighlightClipRect;	// 92 = 0x5c
	NSArray *_cornerRadii;	// 108 = 0x6c
	NSMutableArray *_innerBounds;	// 112 = 0x70
	NSMutableArray *_innerQuads;	// 116 = 0x74
	BOOL _invertHighlight;	// 120 = 0x78
}
- (id)initWithFrame:(CGRect)frame;	// 0x33b2de49
- (void)cleanUp;	// 0x33b2def9
- (void)dealloc;	// 0x33c03ac9
- (void)drawRect:(CGRect)rect;	// 0x33b33739
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33c03f81
- (void)setColor:(id)color;	// 0x33b2df59
- (void)setCornerRadii:(id)radii;	// 0x33b3317d
- (void)setCornerRadius:(float)radius;	// 0x33b2df49
- (void)setFrame:(CGRect)frame;	// 0x33b2dea9
- (void)setFrames:(id)frames boundaryRect:(CGRect)rect;	// 0x33b3336d
- (void)setInvertHighlight:(BOOL)highlight clipRect:(CGRect)rect;	// 0x33c03f55
- (void)setQuads:(id)quads boundaryRect:(CGRect)rect;	// 0x33c03b3d
@end
