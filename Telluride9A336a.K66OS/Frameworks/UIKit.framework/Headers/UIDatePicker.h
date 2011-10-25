/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSCalendar, UIPickerView, NSDate, NSLocale, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x3531e6c1; S=0x3531e6e1; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x3531e7bd; S=0x3531e7dd; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x3524af55; S=0x3531e701; @dynamic
@property(retain) id dateComponents;	// G=0x3531e88d; S=0x3531e8ad; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x3531e601; S=0x35240649; @dynamic
@property(retain, nonatomic) NSLocale *locale;	// G=0x3531e661; S=0x3531e671; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x3531e77d; S=0x3531e79d; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x3531e73d; S=0x3531e75d; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x3531e7fd; S=0x352409f1; @dynamic
@property(assign) double timeInterval;	// G=0x3531e87d; S=0x3531e86d; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x3531e681; S=0x3531e6a1; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x3531e9fd; S=0x3531e9dd; 
- (id)initWithCoder:(id)coder;	// 0x3531e065
- (id)initWithFrame:(CGRect)frame;	// 0x3523f149
- (float)_contentWidth;	// 0x3531e97d
- (void)_insertPickerView;	// 0x3523f461
- (id)_locale;	// 0x3531e621
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3531e31d
- (void)_setHidesLabels:(BOOL)labels;	// 0x3531e9bd
- (void)_setHighlightsToday:(BOOL)today;	// 0x3531e99d
- (void)_setLocale:(id)locale;	// 0x3531e641
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x3531e9dd
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x3531e9fd
- (void)awakeFromNib;	// 0x3531e2b1
// declared property getter: - (id)calendar;	// 0x3531e6c1
// declared property getter: - (double)countDownDuration;	// 0x3531e7bd
// declared property getter: - (id)date;	// 0x3524af55
// converted property getter: - (id)dateComponents;	// 0x3531e88d
// declared property getter: - (int)datePickerMode;	// 0x3531e601
- (void)encodeWithCoder:(id)coder;	// 0x3531e371
- (int)hour;	// 0x3531e90d
// declared property getter: - (id)locale;	// 0x3531e661
// declared property getter: - (id)maximumDate;	// 0x3531e77d
// declared property getter: - (id)minimumDate;	// 0x3531e73d
- (int)minute;	// 0x3531e92d
// declared property getter: - (int)minuteInterval;	// 0x3531e7fd
- (int)second;	// 0x3531e94d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3531e6e1
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x3531e7dd
// declared property setter: - (void)setDate:(id)date;	// 0x3531e701
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x3531e96d
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x35240d41
// converted property setter: - (void)setDateComponents:(id)components;	// 0x3531e8ad
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x35240649
- (void)setDelegate:(id)delegate;	// 0x3531e84d
- (void)setFrame:(CGRect)frame;	// 0x3523f3ed
- (void)setHighlightsToday:(BOOL)today;	// 0x3531e8ed
// declared property setter: - (void)setLocale:(id)locale;	// 0x3531e671
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x3531e79d
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x3531e75d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x352409f1
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x3531e8cd
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x3531e86d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3531e6a1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3531e81d
// converted property getter: - (double)timeInterval;	// 0x3531e87d
// declared property getter: - (id)timeZone;	// 0x3531e681
@end

