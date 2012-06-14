/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface InlineCandidateCell : UIView {
@private
	NSString *_candidate;	// 48 = 0x30
	unsigned _index;	// 52 = 0x34
	UIFont *_font;	// 56 = 0x38
	CGSize _stringImageSize;	// 60 = 0x3c
	BOOL _highlighted;	// 68 = 0x44
	id _target;	// 72 = 0x48
	SEL _action;	// 76 = 0x4c
	BOOL _lastItem;	// 80 = 0x50
	BOOL _dontDrawRightEdge;	// 81 = 0x51
}
@property(readonly, assign) unsigned index;	// G=0x35597035; converted property
@property(readonly, assign) CGSize stringImageSize;	// G=0x35597019; converted property
- (id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;	// 0x35596e75
- (void)dealloc;	// 0x35596fcd
- (void)dontDrawRightEdge:(BOOL)edge;	// 0x35597045
- (void)drawRect:(CGRect)rect;	// 0x35597095
// converted property getter: - (unsigned)index;	// 0x35597035
- (void)setHighlighted:(BOOL)highlighted;	// 0x35597065
- (void)setLastItem:(BOOL)item;	// 0x35597055
// converted property getter: - (CGSize)stringImageSize;	// 0x35597019
@end
