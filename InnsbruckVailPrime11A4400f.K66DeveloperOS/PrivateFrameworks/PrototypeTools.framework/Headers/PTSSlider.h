/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <UIKit/UIView.h>
#import "PrototypeTools-Structs.h"
#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"

@class UILabel, NSArray, NSNumberFormatter, NSTimer, UISlider, UIButton, _UISettings, NSString;

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {
	BOOL _enabled;	// 98 = 0x62
	BOOL _showsValueLabel;	// 99 = 0x63
	BOOL _autoEnablesForDesignMode;	// 100 = 0x64
	_UISettings *_settings;	// 104 = 0x68
	NSString *_valueKeyPath;	// 108 = 0x6c
	int _alignment;	// 112 = 0x70
	UISlider *_sliderControl;	// 116 = 0x74
	UILabel *_titleLabel;	// 120 = 0x78
	NSNumberFormatter *_valueLabelFormatter;	// 124 = 0x7c
	NSArray *_valueLabelStrings;	// 128 = 0x80
	float _increment;	// 132 = 0x84
	UILabel *_valueLabel;	// 136 = 0x88
	UIButton *_upIncrementButton;	// 140 = 0x8c
	UIButton *_downIncrementButton;	// 144 = 0x90
	NSArray *_subviewConstraints;	// 148 = 0x94
	NSTimer *_buttonRepeatTimer;	// 152 = 0x98
	XXStruct_jbjm5D _valueChangePublishTTL;	// 156 = 0x9c
}
@property(assign, nonatomic) int alignment;	// G=0x325aebe9; S=0x325aebf9; @synthesize=_alignment
@property(assign, nonatomic) BOOL autoEnablesForDesignMode;	// G=0x325aec09; S=0x325aec19; @synthesize=_autoEnablesForDesignMode
@property(retain, nonatomic) NSTimer *buttonRepeatTimer;	// G=0x325aedcd; S=0x325aeddd; @synthesize=_buttonRepeatTimer
@property(retain, nonatomic) UIButton *downIncrementButton;	// G=0x325aed5d; S=0x325aed6d; @synthesize=_downIncrementButton
@property(assign, nonatomic) BOOL enabled;	// G=0x325aeb71; S=0x325ad8ad; @synthesize=_enabled
@property(assign, nonatomic) float increment;	// G=0x325aeccd; S=0x325aecdd; @synthesize=_increment
@property(assign, nonatomic) float maximumValue;	// @dynamic
@property(assign, nonatomic) float minimumValue;	// @dynamic
@property(assign, nonatomic) __weak _UISettings *settings;	// G=0x325aeb91; S=0x325aebb1; @synthesize=_settings
@property(assign, nonatomic) BOOL showsValueLabel;	// G=0x325aeb81; S=0x325ad995; @synthesize=_showsValueLabel
@property(retain, nonatomic) UISlider *sliderControl;	// G=0x325aec29; S=0x325aec39; @synthesize=_sliderControl
@property(retain, nonatomic) NSArray *subviewConstraints;	// G=0x325aed95; S=0x325aeda5; @synthesize=_subviewConstraints
@property(retain, nonatomic) UILabel *titleLabel;	// G=0x325aec61; S=0x325aec71; @synthesize=_titleLabel
@property(retain, nonatomic) UIButton *upIncrementButton;	// G=0x325aed25; S=0x325aed35; @synthesize=_upIncrementButton
@property(assign, nonatomic) float value;	// S=0x325ae43d; @dynamic
@property(assign, nonatomic) XXStruct_jbjm5D valueChangePublishTTL;	// G=0x325aee05; S=0x325aee1d; @synthesize=_valueChangePublishTTL
@property(copy, nonatomic) NSString *valueKeyPath;	// G=0x325aebc5; S=0x325aebd9; @synthesize=_valueKeyPath
@property(retain, nonatomic) UILabel *valueLabel;	// G=0x325aeced; S=0x325aecfd; @synthesize=_valueLabel
@property(retain, nonatomic) NSNumberFormatter *valueLabelFormatter;	// G=0x325aec99; S=0x325ad875; @synthesize=_valueLabelFormatter
@property(copy, nonatomic) NSArray *valueLabelStrings;	// G=0x325aeca9; S=0x325aecbd; @synthesize=_valueLabelStrings
+ (CGRect)defaultFrame;	// 0x325accf1
+ (id)slider;	// 0x325acd0d
+ (id)sliderForSettings:(id)settings valueKeyPath:(id)path title:(id)title minimumValue:(float)value maximumValue:(float)value5;	// 0x325acd81
- (id)initWithFrame:(CGRect)frame;	// 0x325acec1
- (void).cxx_destruct;	// 0x325aee41
// declared property getter: - (int)alignment;	// 0x325aebe9
// declared property getter: - (BOOL)autoEnablesForDesignMode;	// 0x325aec09
// declared property getter: - (id)buttonRepeatTimer;	// 0x325aedcd
- (void)dealloc;	// 0x325ad291
- (void)downIncrement;	// 0x325adc39
- (void)downIncrementAction:(id)action;	// 0x325adce9
// declared property getter: - (id)downIncrementButton;	// 0x325aed5d
// declared property getter: - (BOOL)enabled;	// 0x325aeb71
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x325aea71
// declared property getter: - (float)increment;	// 0x325aeccd
- (CGSize)intrinsicContentSize;	// 0x325ad2f5
- (void)layoutSubviews;	// 0x325ae539
- (id)makeIncrementButtonWithAction:(SEL)action imageName:(id)name;	// 0x325ae005
- (id)makeSliderControl;	// 0x325ade39
- (id)makeTitleLabel;	// 0x325ae16d
- (id)makeValueLabel;	// 0x325ae2ed
- (id)methodSignatureForSelector:(SEL)selector;	// 0x325aeaf9
- (void)publishValueChanged;	// 0x325ad7c1
// declared property setter: - (void)setAlignment:(int)alignment;	// 0x325aebf9
// declared property setter: - (void)setAutoEnablesForDesignMode:(BOOL)designMode;	// 0x325aec19
// declared property setter: - (void)setButtonRepeatTimer:(id)timer;	// 0x325aeddd
// declared property setter: - (void)setDownIncrementButton:(id)button;	// 0x325aed6d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x325ad8ad
// declared property setter: - (void)setIncrement:(float)increment;	// 0x325aecdd
// declared property setter: - (void)setSettings:(id)settings;	// 0x325aebb1
- (void)setSettings:(id)settings valueKeyPath:(id)path;	// 0x325ad32d
// declared property setter: - (void)setShowsValueLabel:(BOOL)label;	// 0x325ad995
// declared property setter: - (void)setSliderControl:(id)control;	// 0x325aec39
// declared property setter: - (void)setSubviewConstraints:(id)constraints;	// 0x325aeda5
// declared property setter: - (void)setTitleLabel:(id)label;	// 0x325aec71
// declared property setter: - (void)setUpIncrementButton:(id)button;	// 0x325aed35
// declared property setter: - (void)setValue:(float)value;	// 0x325ae43d
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x325ae451
// declared property setter: - (void)setValueChangePublishTTL:(XXStruct_jbjm5D)ttl;	// 0x325aee1d
// declared property setter: - (void)setValueKeyPath:(id)path;	// 0x325aebd9
// declared property setter: - (void)setValueLabel:(id)label;	// 0x325aecfd
// declared property setter: - (void)setValueLabelFormatter:(id)formatter;	// 0x325ad875
// declared property setter: - (void)setValueLabelStrings:(id)strings;	// 0x325aecbd
// declared property getter: - (id)settings;	// 0x325aeb91
- (void)settings:(id)settings changedValueForKeyPath:(id)keyPath;	// 0x325ad3ed
// declared property getter: - (BOOL)showsValueLabel;	// 0x325aeb81
// declared property getter: - (id)sliderControl;	// 0x325aec29
- (void)stopIncrementRepeatAction;	// 0x325ad9e9
// declared property getter: - (id)subviewConstraints;	// 0x325aed95
// declared property getter: - (id)titleLabel;	// 0x325aec61
- (void)upIncrement;	// 0x325ada39
- (void)upIncrementAction:(id)action;	// 0x325adae9
// declared property getter: - (id)upIncrementButton;	// 0x325aed25
- (void)updateValueLabel;	// 0x325ad529
// declared property getter: - (XXStruct_jbjm5D)valueChangePublishTTL;	// 0x325aee05
- (void)valueChanged:(id)changed;	// 0x325ad6d9
// declared property getter: - (id)valueKeyPath;	// 0x325aebc5
// declared property getter: - (id)valueLabel;	// 0x325aeced
// declared property getter: - (id)valueLabelFormatter;	// 0x325aec99
// declared property getter: - (id)valueLabelStrings;	// 0x325aeca9
@end
