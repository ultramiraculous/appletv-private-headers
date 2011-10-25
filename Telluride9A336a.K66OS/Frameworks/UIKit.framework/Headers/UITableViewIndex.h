/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIColor, UIFont, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl {
@private
	NSArray *_titles;	// 72 = 0x48
	UIFont *_font;	// 76 = 0x4c
	int _selectedSection;	// 80 = 0x50
	BOOL _pastTop;	// 84 = 0x54
	BOOL _pastBottom;	// 85 = 0x55
	CGSize _cachedSize;	// 88 = 0x58
	CGSize _cachedSizeToFit;	// 96 = 0x60
	UIColor *_indexColor;	// 104 = 0x68
	UIColor *_indexBackgroundColor;	// 108 = 0x6c
}
@property(retain, nonatomic) UIFont *font;	// G=0x35152fc5; S=0x35324049; 
@property(retain, nonatomic) UIColor *indexBackgroundColor;	// G=0x35324175; S=0x35152c89; 
@property(retain, nonatomic) UIColor *indexColor;	// G=0x3532413d; S=0x35152c31; 
@property(readonly, assign, nonatomic) BOOL pastBottom;	// G=0x353241ad; @synthesize=_pastBottom
@property(readonly, assign, nonatomic) BOOL pastTop;	// G=0x3521d2dd; @synthesize=_pastTop
@property(readonly, assign, nonatomic) int selectedSection;	// G=0x351dcb61; @synthesize=_selectedSection
@property(readonly, assign, nonatomic) NSString *selectedSectionTitle;	// G=0x351dcb71; 
@property(retain, nonatomic) NSArray *titles;	// G=0x35324039; S=0x35152d15; 
- (id)initWithFrame:(CGRect)frame;	// 0x35152b05
- (id)_createTouchesWithMouseEvent:(GSEventRef)mouseEvent phase:(int)phase;	// 0x353241bd
- (id)_displayTitles;	// 0x35154fa9
- (void)_selectSectionForTouch:(id)touch withEvent:(id)event;	// 0x351dc629
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351dc5f9
- (void)cancelTrackingWithEvent:(id)event;	// 0x353240c9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3521d2c5
- (void)dealloc;	// 0x35323fb1
- (void)drawRect:(CGRect)rect;	// 0x35154869
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351dd3d1
// declared property getter: - (id)font;	// 0x35152fc5
// declared property getter: - (id)indexBackgroundColor;	// 0x35324175
// declared property getter: - (id)indexColor;	// 0x3532413d
- (unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;	// 0x353240a1
- (void)mouseDown:(GSEventRef)down;	// 0x353242f5
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3532437d
- (void)mouseUp:(GSEventRef)up;	// 0x35324405
// declared property getter: - (BOOL)pastBottom;	// 0x353241ad
// declared property getter: - (BOOL)pastTop;	// 0x3521d2dd
// declared property getter: - (int)selectedSection;	// 0x351dcb61
// declared property getter: - (id)selectedSectionTitle;	// 0x351dcb71
// declared property setter: - (void)setFont:(id)font;	// 0x35324049
// declared property setter: - (void)setIndexBackgroundColor:(id)color;	// 0x35152c89
// declared property setter: - (void)setIndexColor:(id)color;	// 0x35152c31
// declared property setter: - (void)setTitles:(id)titles;	// 0x35152d15
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35152da1
// declared property getter: - (id)titles;	// 0x35324039
@end

