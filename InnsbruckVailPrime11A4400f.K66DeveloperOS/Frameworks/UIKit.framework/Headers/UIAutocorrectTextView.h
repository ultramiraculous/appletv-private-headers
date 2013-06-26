/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIFont, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView {
	NSString *m_string;	// 96 = 0x60
	int m_type;	// 100 = 0x64
	int m_edgeType;	// 104 = 0x68
	UIFont *m_textFont;	// 108 = 0x6c
	BOOL m_animating;	// 112 = 0x70
	BOOL m_isLongString;	// 113 = 0x71
}
@property(assign, nonatomic) BOOL animating;	// G=0x2f65da21; S=0x2f575939; @synthesize=m_animating
@property(assign, nonatomic) BOOL isLongString;	// G=0x2f65da31; S=0x2f65da41; @synthesize=m_isLongString
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x2f52a8e1
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x2f65d889
// declared property getter: - (BOOL)animating;	// 0x2f65da21
- (void)dealloc;	// 0x2f52d129
- (void)drawRect:(CGRect)rect;	// 0x2f52b805
// declared property getter: - (BOOL)isLongString;	// 0x2f65da31
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x2f65d965
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f65d9dd
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x2f575939
- (void)setEdgeType:(int)type;	// 0x2f575845
// declared property setter: - (void)setIsLongString:(BOOL)string;	// 0x2f65da41
@end
