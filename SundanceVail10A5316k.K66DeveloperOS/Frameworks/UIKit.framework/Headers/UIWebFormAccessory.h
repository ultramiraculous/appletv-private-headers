/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInputView.h"

@class UISegmentedControl, UIBarButtonItem, UIToolbar;
@protocol UIWebFormAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface UIWebFormAccessory : UIInputView {
@private
	UIToolbar *_leftToolbar;	// 144 = 0x90
	UIToolbar *_rightToolbar;	// 148 = 0x94
	UISegmentedControl *_tab;	// 152 = 0x98
	UIBarButtonItem *_autofill;	// 156 = 0x9c
	UIBarButtonItem *_clearButton;	// 160 = 0xa0
	UIBarButtonItem *_flexibleSpaceItem;	// 164 = 0xa4
	id<UIWebFormAccessoryDelegate> delegate;	// 168 = 0xa8
}
@property(retain, nonatomic) UIBarButtonItem *_autofill;	// G=0x303a1671; S=0x303a1681; @synthesize
@property(retain, nonatomic) UIBarButtonItem *_clearButton;	// G=0x303a1691; S=0x303a16a1; @synthesize
@property(retain, nonatomic) UISegmentedControl *_tab;	// G=0x303a1651; S=0x303a1661; @synthesize
@property(assign, nonatomic, getter=isAutoFillEnabled) BOOL autoFillEnabled;	// G=0x303a1195; S=0x303a1159; 
@property(assign, nonatomic) id<UIWebFormAccessoryDelegate> delegate;	// G=0x303a16b1; S=0x303a16c1; @synthesize
@property(assign, nonatomic, getter=isNextEnabled) BOOL nextEnabled;	// G=0x303a15e1; S=0x303a15c1; 
@property(assign, nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;	// G=0x303a1629; S=0x303a1609; 
+ (id)toolbarWithItems:(id)items;	// 0x303a08a9
- (id)initWithFrame:(CGRect)frame;	// 0x303a09a5
// declared property getter: - (id)_autofill;	// 0x303a1671
// declared property getter: - (id)_clearButton;	// 0x303a1691
- (void)_orientationDidChange:(id)_orientation;	// 0x303a0e0d
- (void)_refreshAutofillPresentation;	// 0x303a0f99
// declared property getter: - (id)_tab;	// 0x303a1651
- (void)_updateFrame;	// 0x303a0e1d
- (void)autoFill:(id)fill;	// 0x303a0f59
- (void)clear:(id)clear;	// 0x303a0f79
- (void)dealloc;	// 0x303a0d2d
// declared property getter: - (id)delegate;	// 0x303a16b1
- (void)done:(id)done;	// 0x303a0ee9
// declared property getter: - (BOOL)isAutoFillEnabled;	// 0x303a1195
// declared property getter: - (BOOL)isNextEnabled;	// 0x303a15e1
// declared property getter: - (BOOL)isPreviousEnabled;	// 0x303a1629
- (void)layoutSubviews;	// 0x303a0ea9
// declared property setter: - (void)setAutoFillEnabled:(BOOL)enabled;	// 0x303a1159
- (void)setAutoFillVisible:(BOOL)visible;	// 0x303a11c1
- (void)setClearVisible:(BOOL)visible;	// 0x303a13bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303a16c1
// declared property setter: - (void)setNextEnabled:(BOOL)enabled;	// 0x303a15c1
// declared property setter: - (void)setPreviousEnabled:(BOOL)enabled;	// 0x303a1609
// declared property setter: - (void)set_autofill:(id)autofill;	// 0x303a1681
// declared property setter: - (void)set_clearButton:(id)button;	// 0x303a16a1
// declared property setter: - (void)set_tab:(id)tab;	// 0x303a1661
- (void)tab:(id)tab;	// 0x303a0f09
@end
