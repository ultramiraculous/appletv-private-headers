/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIFont, UIKeyboardCandidate, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCell : UIView {
	UIKeyboardCandidate *_candidate;	// 84 = 0x54
	NSString *_text;	// 88 = 0x58
	NSString *_alternativeText;	// 92 = 0x5c
	int _textAlignment;	// 96 = 0x60
	unsigned _candidateNumber;	// 100 = 0x64
	BOOL _showsCandidateNumber;	// 104 = 0x68
	CGSize _size;	// 108 = 0x6c
	UIFont *_font;	// 116 = 0x74
	float _fontSize;	// 120 = 0x78
	CGSize _textSize;	// 124 = 0x7c
	UIFont *_alternativeTextFont;	// 132 = 0x84
	float _alternativeTextFontSize;	// 136 = 0x88
	CGSize _alternativeTextSize;	// 140 = 0x8c
	CGSize _candidateNumberSize;	// 148 = 0x94
	float _cellPadding;	// 156 = 0x9c
	float _minimumWidth;	// 160 = 0xa0
	BOOL _highlighted;	// 164 = 0xa4
	BOOL _onTopEdge;	// 165 = 0xa5
	BOOL _onLeftEdge;	// 166 = 0xa6
	BOOL _onRightEdge;	// 167 = 0xa7
	CGRect _visibleBounds;	// 168 = 0xa8
	BOOL _usesGroupHeaderAppearance;	// 184 = 0xb8
	float _rowHeight;	// 188 = 0xbc
	id _target;	// 192 = 0xc0
	SEL _action;	// 196 = 0xc4
	int _visualStyle;	// 200 = 0xc8
	BOOL _placeholderCell;	// 204 = 0xcc
	float _rightPadding;	// 208 = 0xd0
}
@property(assign, nonatomic) SEL action;	// G=0x32e9bf75; S=0x32e9bf85; @synthesize=_action
@property(copy, nonatomic) NSString *alternativeText;	// G=0x32e9bced; S=0x32e9bd01; @synthesize=_alternativeText
@property(retain, nonatomic) UIFont *alternativeTextFont;	// G=0x32e9bbb5; S=0x32e9bdb9; @synthesize=_alternativeTextFont
@property(assign, nonatomic) float alternativeTextFontSize;	// G=0x32e9bdc9; S=0x32e9bdd9; @synthesize=_alternativeTextFontSize
@property(assign, nonatomic) CGSize alternativeTextSize;	// G=0x32e9bde9; S=0x32e9be01; @synthesize=_alternativeTextSize
@property(readonly, assign, nonatomic) BOOL canShowCandidateNumber;	// G=0x32e9ba09; 
@property(copy, nonatomic) UIKeyboardCandidate *candidate;	// G=0x32e9bcc5; S=0x32e9b895; @synthesize=_candidate
@property(assign, nonatomic) unsigned candidateNumber;	// G=0x32e9bd31; S=0x32e9b965; @synthesize=_candidateNumber
@property(assign, nonatomic) CGSize candidateNumberSize;	// G=0x32e9be15; S=0x32e9be2d; @synthesize=_candidateNumberSize
@property(assign, nonatomic) float cellPadding;	// G=0x32e9be41; S=0x32e9be51; @synthesize=_cellPadding
@property(retain, nonatomic) UIFont *font;	// G=0x32e9ba5d; S=0x32e9bb4d; @synthesize=_font
@property(assign, nonatomic) float fontSize;	// G=0x32e9bd6d; S=0x32e9bd7d; @synthesize=_fontSize
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x32e9be81; S=0x32e9bc21; @synthesize=_highlighted
@property(assign, nonatomic) float minimumWidth;	// G=0x32e9be61; S=0x32e9be71; @synthesize=_minimumWidth
@property(assign, nonatomic) BOOL onLeftEdge;	// G=0x32e9beb1; S=0x32e9bec1; @synthesize=_onLeftEdge
@property(assign, nonatomic) BOOL onRightEdge;	// G=0x32e9bed1; S=0x32e9bee1; @synthesize=_onRightEdge
@property(assign, nonatomic) BOOL onTopEdge;	// G=0x32e9be91; S=0x32e9bea1; @synthesize=_onTopEdge
@property(assign, nonatomic) BOOL placeholderCell;	// G=0x32e9bfb5; S=0x32e9bfc5; @synthesize=_placeholderCell
@property(assign, nonatomic) float rightPadding;	// G=0x32e9bfd5; S=0x32e9bfe5; @synthesize=_rightPadding
@property(assign, nonatomic) float rowHeight;	// G=0x32e9bf35; S=0x32e9bf45; @synthesize=_rowHeight
@property(assign, nonatomic) BOOL showsCandidateNumber;	// G=0x32e9b9a9; S=0x32e9b9dd; @synthesize=_showsCandidateNumber
@property(assign, nonatomic) CGSize size;	// G=0x32e9bd41; S=0x32e9bd59; @synthesize=_size
@property(assign, nonatomic) id target;	// G=0x32e9bf55; S=0x32e9bf65; @synthesize=_target
@property(copy, nonatomic) NSString *text;	// G=0x32e9bcd9; S=0x32e9b8fd; @synthesize=_text
@property(assign, nonatomic) int textAlignment;	// G=0x32e9bd11; S=0x32e9bd21; @synthesize=_textAlignment
@property(assign, nonatomic) CGSize textSize;	// G=0x32e9bd8d; S=0x32e9bda5; @synthesize=_textSize
@property(assign, nonatomic) BOOL usesGroupHeaderAppearance;	// G=0x32e9bf15; S=0x32e9bf25; @synthesize=_usesGroupHeaderAppearance
@property(assign, nonatomic) CGRect visibleBounds;	// G=0x32e9bef1; S=0x32e9bc4d; @synthesize=_visibleBounds
@property(assign, nonatomic) int visualStyle;	// G=0x32e9bf95; S=0x32e9bfa5; @synthesize=_visualStyle
+ (id)cellWithCandidate:(id)candidate visualStyle:(int)style;	// 0x32e99a39
+ (id)groupHeaderCellWithTitle:(id)title visualStyle:(int)style;	// 0x32e99b21
+ (id)placeholderCellWithVisualStyle:(int)visualStyle;	// 0x32e99aa1
- (id)initWithFrame:(CGRect)frame;	// 0x32e99959
- (id)initWithFrame:(CGRect)frame candidate:(id)candidate text:(id)text alternativeText:(id)text4 groupHeader:(BOOL)header visualStyle:(int)style;	// 0x32e99641
- (CGSize)_sizeForText:(id)text withSize:(float)size font:(id)font;	// 0x32e99b95
// declared property getter: - (SEL)action;	// 0x32e9bf75
- (void)adjustFontForFrame:(CGRect)frame;	// 0x32e9a7ad
// declared property getter: - (id)alternativeText;	// 0x32e9bced
// declared property getter: - (id)alternativeTextFont;	// 0x32e9bbb5
// declared property getter: - (float)alternativeTextFontSize;	// 0x32e9bdc9
// declared property getter: - (CGSize)alternativeTextSize;	// 0x32e9bde9
- (void)calculateCandidateNumberSize;	// 0x32e99d45
- (void)calculateSize;	// 0x32e99e01
- (void)calculateTextSize;	// 0x32e99c39
// declared property getter: - (BOOL)canShowCandidateNumber;	// 0x32e9ba09
// declared property getter: - (id)candidate;	// 0x32e9bcc5
// declared property getter: - (unsigned)candidateNumber;	// 0x32e9bd31
// declared property getter: - (CGSize)candidateNumberSize;	// 0x32e9be15
// declared property getter: - (float)cellPadding;	// 0x32e9be41
- (void)dealloc;	// 0x32e99999
- (void)drawBackgroundAndBorders;	// 0x32e9a139
- (void)drawRect:(CGRect)rect;	// 0x32e9b609
- (void)drawText;	// 0x32e9a8a5
- (void)drawTextWithCandidateNumber;	// 0x32e9af59
// declared property getter: - (id)font;	// 0x32e9ba5d
// declared property getter: - (float)fontSize;	// 0x32e9bd6d
// declared property getter: - (BOOL)isHighlighted;	// 0x32e9be81
// declared property getter: - (float)minimumWidth;	// 0x32e9be61
// declared property getter: - (BOOL)onLeftEdge;	// 0x32e9beb1
// declared property getter: - (BOOL)onRightEdge;	// 0x32e9bed1
// declared property getter: - (BOOL)onTopEdge;	// 0x32e9be91
// declared property getter: - (BOOL)placeholderCell;	// 0x32e9bfb5
// declared property getter: - (float)rightPadding;	// 0x32e9bfd5
// declared property getter: - (float)rowHeight;	// 0x32e9bf35
// declared property setter: - (void)setAction:(SEL)action;	// 0x32e9bf85
// declared property setter: - (void)setAlternativeText:(id)text;	// 0x32e9bd01
// declared property setter: - (void)setAlternativeTextFont:(id)font;	// 0x32e9bdb9
// declared property setter: - (void)setAlternativeTextFontSize:(float)size;	// 0x32e9bdd9
// declared property setter: - (void)setAlternativeTextSize:(CGSize)size;	// 0x32e9be01
// declared property setter: - (void)setCandidate:(id)candidate;	// 0x32e9b895
// declared property setter: - (void)setCandidateNumber:(unsigned)number;	// 0x32e9b965
// declared property setter: - (void)setCandidateNumberSize:(CGSize)size;	// 0x32e9be2d
// declared property setter: - (void)setCellPadding:(float)padding;	// 0x32e9be51
// declared property setter: - (void)setFont:(id)font;	// 0x32e9bb4d
// declared property setter: - (void)setFontSize:(float)size;	// 0x32e9bd7d
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32e9bc21
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x32e9be71
// declared property setter: - (void)setOnLeftEdge:(BOOL)edge;	// 0x32e9bec1
// declared property setter: - (void)setOnRightEdge:(BOOL)edge;	// 0x32e9bee1
// declared property setter: - (void)setOnTopEdge:(BOOL)edge;	// 0x32e9bea1
// declared property setter: - (void)setPlaceholderCell:(BOOL)cell;	// 0x32e9bfc5
// declared property setter: - (void)setRightPadding:(float)padding;	// 0x32e9bfe5
// declared property setter: - (void)setRowHeight:(float)height;	// 0x32e9bf45
// declared property setter: - (void)setShowsCandidateNumber:(BOOL)number;	// 0x32e9b9dd
// declared property setter: - (void)setSize:(CGSize)size;	// 0x32e9bd59
// declared property setter: - (void)setTarget:(id)target;	// 0x32e9bf65
// declared property setter: - (void)setText:(id)text;	// 0x32e9b8fd
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32e9bd21
// declared property setter: - (void)setTextSize:(CGSize)size;	// 0x32e9bda5
// declared property setter: - (void)setUsesGroupHeaderAppearance:(BOOL)appearance;	// 0x32e9bf25
// declared property setter: - (void)setVisibleBounds:(CGRect)bounds;	// 0x32e9bc4d
// declared property setter: - (void)setVisualStyle:(int)style;	// 0x32e9bfa5
// declared property getter: - (BOOL)showsCandidateNumber;	// 0x32e9b9a9
// declared property getter: - (CGSize)size;	// 0x32e9bd41
// declared property getter: - (id)target;	// 0x32e9bf55
// declared property getter: - (id)text;	// 0x32e9bcd9
// declared property getter: - (int)textAlignment;	// 0x32e9bd11
// declared property getter: - (CGSize)textSize;	// 0x32e9bd8d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32e9b65d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32e9b85d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32e9b755
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32e9b695
// declared property getter: - (BOOL)usesGroupHeaderAppearance;	// 0x32e9bf15
// declared property getter: - (CGRect)visibleBounds;	// 0x32e9bef1
// declared property getter: - (int)visualStyle;	// 0x32e9bf95
@end
