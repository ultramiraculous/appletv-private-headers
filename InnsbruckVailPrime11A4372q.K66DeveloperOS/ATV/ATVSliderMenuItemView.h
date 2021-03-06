/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRImageControl, NSString, BRWaitSpinnerControl, BRAutoScrollingTextControl;

__attribute__((visibility("hidden")))
@interface ATVSliderMenuItemView : BRControl {
	NSAttributedString *_attributedText;	// 84 = 0x54
	BOOL _dimmed;	// 88 = 0x58
	BOOL _showSlider;	// 89 = 0x59
	float _sliderValue;	// 92 = 0x5c
	id _sliderValueChangedBlock;	// 96 = 0x60
	BRAutoScrollingTextControl *_textControl;	// 100 = 0x64
	BRImageControl *_rightAccessory;	// 104 = 0x68
	BRImageControl *_leftAccessory;	// 108 = 0x6c
	BRImageControl *_leadingImageItem;	// 112 = 0x70
	BRImageControl *_leftArrow;	// 116 = 0x74
	BRImageControl *_rightArrow;	// 120 = 0x78
	BRImageControl *_sliderGutter;	// 124 = 0x7c
	BRImageControl *_sliderBar;	// 128 = 0x80
	BRWaitSpinnerControl *_spinner;	// 132 = 0x84
}
@property(assign, nonatomic) BOOL dimmed;	// G=0xdd675; S=0xdd4c1; @dynamic
@property(retain, nonatomic) BRImageControl *leadingImageItem;	// G=0xdd9a9; S=0xdd9b9; @synthesize=_leadingImageItem
@property(retain, nonatomic) BRImageControl *leftAccessory;	// G=0xdd971; S=0xdd981; @synthesize=_leftAccessory
@property(retain, nonatomic) BRImageControl *leftArrow;	// G=0xdd9e1; S=0xdd9f1; @synthesize=_leftArrow
@property(retain, nonatomic) BRImageControl *rightAccessory;	// G=0xdd939; S=0xdd949; @synthesize=_rightAccessory
@property(retain, nonatomic) BRImageControl *rightArrow;	// G=0xdda19; S=0xdda29; @synthesize=_rightArrow
@property(assign, nonatomic) BOOL showSlider;	// G=0xdd8ad; S=0xdd8bd; @synthesize=_showSlider
@property(retain, nonatomic) BRImageControl *sliderBar;	// G=0xdda89; S=0xdda99; @synthesize=_sliderBar
@property(retain, nonatomic) BRImageControl *sliderGutter;	// G=0xdda51; S=0xdda61; @synthesize=_sliderGutter
@property(assign, nonatomic) float sliderValue;	// G=0xdd8cd; S=0xdce0d; @synthesize=_sliderValue
@property(copy, nonatomic) id sliderValueChangedBlock;	// G=0xdd8dd; S=0xdd8f1; @synthesize=_sliderValueChangedBlock
@property(retain, nonatomic) BRWaitSpinnerControl *spinner;	// G=0xddac1; S=0xddad1; @synthesize=_spinner
@property(retain, nonatomic) NSString *text;	// G=0xdcfb1; S=0xdce91; @dynamic
@property(retain, nonatomic) BRAutoScrollingTextControl *textControl;	// G=0xdd901; S=0xdd911; @synthesize=_textControl
- (id)initWithFrame:(CGRect)frame;	// 0xdbc91
- (void).cxx_destruct;	// 0xddaf9
- (id)_destinationForAccessoryType:(int)accessoryType;	// 0xddd21
- (id)_identiferForAccessoryType:(int)accessoryType;	// 0xddd7d
- (id)_imageProxyForAccessoryType:(int)accessoryType;	// 0xddbe1
- (id)_sliderAccessibilityLabel;	// 0xdd689
- (id)accessibilityLabel;	// 0xdd755
- (id)accessibilityTraitsList;	// 0xdd801
- (void)addAccessoryOfType:(int)type;	// 0xdd29d
- (BOOL)brEventAction:(id)action;	// 0xdc2b9
- (void)controlWasFocused;	// 0xdcfd1
- (void)controlWasUnfocused;	// 0xdd0f9
// declared property getter: - (BOOL)dimmed;	// 0xdd675
- (BOOL)hasAccessoryOfType:(int)type;	// 0xdd3fd
- (BOOL)isAccessibilityElement;	// 0xdd685
- (void)layoutSubcontrols;	// 0xdc50d
// declared property getter: - (id)leadingImageItem;	// 0xdd9a9
// declared property getter: - (id)leftAccessory;	// 0xdd971
// declared property getter: - (id)leftArrow;	// 0xdd9e1
// declared property getter: - (id)rightAccessory;	// 0xdd939
// declared property getter: - (id)rightArrow;	// 0xdda19
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xdd4c1
// declared property setter: - (void)setLeadingImageItem:(id)item;	// 0xdd9b9
// declared property setter: - (void)setLeftAccessory:(id)accessory;	// 0xdd981
// declared property setter: - (void)setLeftArrow:(id)arrow;	// 0xdd9f1
// declared property setter: - (void)setRightAccessory:(id)accessory;	// 0xdd949
// declared property setter: - (void)setRightArrow:(id)arrow;	// 0xdda29
// declared property setter: - (void)setShowSlider:(BOOL)slider;	// 0xdd8bd
// declared property setter: - (void)setSliderBar:(id)bar;	// 0xdda99
// declared property setter: - (void)setSliderGutter:(id)gutter;	// 0xdda61
// declared property setter: - (void)setSliderValue:(float)value;	// 0xdce0d
// declared property setter: - (void)setSliderValueChangedBlock:(id)block;	// 0xdd8f1
// declared property setter: - (void)setSpinner:(id)spinner;	// 0xddad1
// declared property setter: - (void)setText:(id)text;	// 0xdce91
// declared property setter: - (void)setTextControl:(id)control;	// 0xdd911
// declared property getter: - (BOOL)showSlider;	// 0xdd8ad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xdc4e9
// declared property getter: - (id)sliderBar;	// 0xdda89
// declared property getter: - (id)sliderGutter;	// 0xdda51
// declared property getter: - (float)sliderValue;	// 0xdd8cd
// declared property getter: - (id)sliderValueChangedBlock;	// 0xdd8dd
// declared property getter: - (id)spinner;	// 0xddac1
// declared property getter: - (id)text;	// 0xdcfb1
// declared property getter: - (id)textControl;	// 0xdd901
@end

