/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAutoScrollingTextControl, NSString, NSAttributedString, BRWaitSpinnerControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSliderMenuItemView : BRControl {
	NSAttributedString *_attributedText;	// 84 = 0x54
	BRImageControl *_rightAccessory;	// 88 = 0x58
	float _sliderValue;	// 92 = 0x5c
	id _sliderValueChangedBlock;	// 96 = 0x60
	BRImageControl *_leadingImageItem;	// 100 = 0x64
	BRImageControl *_leftAccessory;	// 104 = 0x68
	BRImageControl *_rightArrow;	// 108 = 0x6c
	BRImageControl *_sliderGutter;	// 112 = 0x70
	BRImageControl *_leftArrow;	// 116 = 0x74
	BRAutoScrollingTextControl *_textControl;	// 120 = 0x78
	BRWaitSpinnerControl *_spinner;	// 124 = 0x7c
	BOOL _showSlider;	// 128 = 0x80
	BRImageControl *_sliderBar;	// 132 = 0x84
}
@property(retain, nonatomic) BRImageControl *leadingImageItem;	// G=0x3ce829; S=0x3ce839; @synthesize=_leadingImageItem
@property(retain, nonatomic) BRImageControl *leftAccessory;	// G=0x3ce861; S=0x3ce871; @synthesize=_leftAccessory
@property(retain, nonatomic) BRImageControl *leftArrow;	// G=0x3ce909; S=0x3ce919; @synthesize=_leftArrow
@property(retain, nonatomic) BRImageControl *rightAccessory;	// G=0x3ce7bd; S=0x3ce7cd; @synthesize=_rightAccessory
@property(retain, nonatomic) BRImageControl *rightArrow;	// G=0x3ce899; S=0x3ce8a9; @synthesize=_rightArrow
@property(assign, nonatomic) BOOL showSlider;	// G=0x3ce9b1; S=0x3ce9c1; @synthesize=_showSlider
@property(retain, nonatomic) BRImageControl *sliderBar;	// G=0x3ce9d1; S=0x3ce9e1; @synthesize=_sliderBar
@property(retain, nonatomic) BRImageControl *sliderGutter;	// G=0x3ce8d1; S=0x3ce8e1; @synthesize=_sliderGutter
@property(assign, nonatomic) float sliderValue;	// G=0x3ce7f5; S=0x3ce185; @synthesize=_sliderValue
@property(copy, nonatomic) id sliderValueChangedBlock;	// G=0x3ce805; S=0x3ce819; @synthesize=_sliderValueChangedBlock
@property(retain, nonatomic) BRWaitSpinnerControl *spinner;	// G=0x3ce979; S=0x3ce989; @synthesize=_spinner
@property(retain, nonatomic) NSString *text;	// G=0x3ce329; S=0x3ce209; @dynamic
@property(retain, nonatomic) BRAutoScrollingTextControl *textControl;	// G=0x3ce941; S=0x3ce951; @synthesize=_textControl
- (id)initWithFrame:(CGRect)frame;	// 0x3cd039
- (void).cxx_destruct;	// 0x3cea09
- (id)_destinationForAccessoryType:(int)accessoryType;	// 0x3cec35
- (id)_identiferForAccessoryType:(int)accessoryType;	// 0x3cec99
- (id)_imageProxyForAccessoryType:(int)accessoryType;	// 0x3ceaf1
- (void)addAccessoryOfType:(int)type;	// 0x3ce599
- (BOOL)brEventAction:(id)action;	// 0x3cd659
- (void)controlWasFocused;	// 0x3ce349
- (void)controlWasUnfocused;	// 0x3ce471
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3ce6f9
- (void)layoutSubcontrols;	// 0x3cd895
// declared property getter: - (id)leadingImageItem;	// 0x3ce829
// declared property getter: - (id)leftAccessory;	// 0x3ce861
// declared property getter: - (id)leftArrow;	// 0x3ce909
// declared property getter: - (id)rightAccessory;	// 0x3ce7bd
// declared property getter: - (id)rightArrow;	// 0x3ce899
// declared property setter: - (void)setLeadingImageItem:(id)item;	// 0x3ce839
// declared property setter: - (void)setLeftAccessory:(id)accessory;	// 0x3ce871
// declared property setter: - (void)setLeftArrow:(id)arrow;	// 0x3ce919
// declared property setter: - (void)setRightAccessory:(id)accessory;	// 0x3ce7cd
// declared property setter: - (void)setRightArrow:(id)arrow;	// 0x3ce8a9
// declared property setter: - (void)setShowSlider:(BOOL)slider;	// 0x3ce9c1
// declared property setter: - (void)setSliderBar:(id)bar;	// 0x3ce9e1
// declared property setter: - (void)setSliderGutter:(id)gutter;	// 0x3ce8e1
// declared property setter: - (void)setSliderValue:(float)value;	// 0x3ce185
// declared property setter: - (void)setSliderValueChangedBlock:(id)block;	// 0x3ce819
// declared property setter: - (void)setSpinner:(id)spinner;	// 0x3ce989
// declared property setter: - (void)setText:(id)text;	// 0x3ce209
// declared property setter: - (void)setTextControl:(id)control;	// 0x3ce951
// declared property getter: - (BOOL)showSlider;	// 0x3ce9b1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3cd871
// declared property getter: - (id)sliderBar;	// 0x3ce9d1
// declared property getter: - (id)sliderGutter;	// 0x3ce8d1
// declared property getter: - (float)sliderValue;	// 0x3ce7f5
// declared property getter: - (id)sliderValueChangedBlock;	// 0x3ce805
// declared property getter: - (id)spinner;	// 0x3ce979
// declared property getter: - (id)text;	// 0x3ce329
// declared property getter: - (id)textControl;	// 0x3ce941
@end
