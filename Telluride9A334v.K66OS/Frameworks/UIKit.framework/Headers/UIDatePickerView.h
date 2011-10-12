/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSCalendar, NSDateComponents, NSString, NSDate, UILabel, UIDatePicker, NSLocale, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
@private
	int _datePickerMode;	// 84 = 0x54
	NSLocale *_locale;	// 88 = 0x58
	NSTimeZone *_timeZone;	// 92 = 0x5c
	NSCalendar *_calendar;	// 96 = 0x60
	CFDateFormatterRef _localDateFormatter;	// 100 = 0x64
	NSDate *_date;	// 104 = 0x68
	NSDate *_minimumDate;	// 108 = 0x6c
	NSDate *_maximumDate;	// 112 = 0x70
	double _countDownDuration;	// 116 = 0x74
	int _minuteInterval;	// 124 = 0x7c
	NSDateComponents *_referenceComponents;	// 128 = 0x80
	double _todaySinceReferenceDate;	// 132 = 0x84
	NSDateComponents *_todayDateComponents;	// 140 = 0x8c
	NSString *_amString;	// 144 = 0x90
	NSString *_pmString;	// 148 = 0x94
	UILabel *_hourLabel;	// 152 = 0x98
	UILabel *_minuteLabel;	// 156 = 0x9c
	UIDatePicker *_datePickerDelegate;	// 160 = 0xa0
	id _delegateOfDatePicker;	// 164 = 0xa4
	int _numberOfDaysInCurrentMonth;	// 168 = 0xa8
	int _expectedAMPM;	// 172 = 0xac
	NSDateComponents *_minDateComponents;	// 176 = 0xb0
	NSDateComponents *_maxDateComponents;	// 180 = 0xb4
	struct {
		unsigned dateOrder : 2;
		unsigned timeOrder : 2;
		unsigned weekdayOrder : 1;
		unsigned staggerTimeIntervals : 1;
		unsigned loadingDateOrTime : 1;
		unsigned highlightsToday : 1;
		unsigned hasCustomCalendar : 1;
		unsigned reserved : 23;
		unsigned usesBlackChrome : 1;
	} _datePickerFlags;	// 184 = 0xb8
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x301b55d9; S=0x30293ad9; @synthesize=_calendar
@property(assign, nonatomic) double countDownDuration;	// G=0x30294931; S=0x30294751; 
@property(copy, nonatomic) NSDate *date;	// G=0x301bff75; S=0x30293d79; @synthesize=_date
@property(retain) id dateComponents;	// G=0x301b5599; S=0x3029470d; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x30295061; S=0x301b5685; @synthesize=_datePickerMode
@property(assign, nonatomic) id delegateOfDatePicker;	// G=0x302950c1; S=0x302950d1; @synthesize=_delegateOfDatePicker
@property(readonly, assign, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;	// G=0x30293c29; 
@property(retain, nonatomic) NSLocale *locale;	// G=0x30295071; S=0x30293c3d; @synthesize=_locale
@property(copy, nonatomic) NSDate *maximumDate;	// G=0x302950a1; S=0x30293e99; @synthesize=_maximumDate
@property(copy, nonatomic) NSDate *minimumDate;	// G=0x30295091; S=0x30293db5; @synthesize=_minimumDate
@property(assign, nonatomic) int minuteInterval;	// G=0x302950b1; S=0x301b5a11; @synthesize=_minuteInterval
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x30295081; S=0x30293ccd; @synthesize=_timeZone
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x301b79a9; S=0x30295031; 
- (id)initWithFrame:(CGRect)frame;	// 0x301b4541
- (int)_amPmValue;	// 0x301bd06d
- (id)_ampmCellFont;	// 0x301b919d
- (int)_columnForElement:(unsigned)element;	// 0x301b6365
- (id)_createAccessoryViewWithText:(id)text andFont:(id)font;	// 0x30294ccd
- (id)_createLabelWithString:(id)string above:(id)above;	// 0x30294e11
- (id)_dateForWeekMonthDayRow:(int)weekMonthDayRow;	// 0x301bec21
- (id)_datePickerCellFont;	// 0x301b86e1
- (void)_datePickerReset:(id)reset;	// 0x30293a61
- (int)_dayForRow:(int)row;	// 0x301c0d45
- (void)_doneLoadingDateOrTime;	// 0x301c00c1
- (unsigned)_elementForColumn:(int)column;	// 0x301b85d5
- (void)_ensureTodayIsSet;	// 0x301baff1
- (int)_eraForRow:(int)row;	// 0x301c10cd
// declared property getter: - (BOOL)_hasCustomCalendar;	// 0x30293c29
- (int)_hourForRow:(int)row;	// 0x301bcfb9
- (int)_hourForRow:(int)row in24HourTime:(BOOL)a24HourTime;	// 0x301bd005
- (id)_hoursString;	// 0x3029437d
- (id)_hrMinFont;	// 0x30293ff5
- (int)_incrementForElement:(unsigned)element;	// 0x301bd6f5
- (int)_incrementedAmountForValue:(int)value withElement:(unsigned)element;	// 0x301bd561
- (void)_loadDateAnimated:(BOOL)animated;	// 0x301b5f15
- (void)_loadDesignatorStrings;	// 0x301b8485
- (void)_loadDesignatorStringsIfNeeded;	// 0x3029499d
- (CFDateFormatterRef)_localDateFormatter;	// 0x301bb0e5
- (int)_minuteForRow:(int)row;	// 0x301becf5
- (id)_minutesString;	// 0x30294361
- (int)_monthForRow:(int)row;	// 0x301c0b55
- (id)_newFadeLabel:(id)label toNewLabelWithString:(id)string ifAnimated:(BOOL)animated;	// 0x30294181
- (int)_numberOfDaysInDate:(id)date;	// 0x301b55e9
- (int)_numberOfDaysInWeek;	// 0x30294041
- (BOOL)_scrollingAnyColumnExcept:(int)except;	// 0x30294671
- (int)_secondForRow:(int)row;	// 0x3029416d
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x301b64cd
- (int)_selectedHourForColumn:(int)column;	// 0x3029410d
- (int)_selectedMinuteForColumn:(int)column;	// 0x3029413d
- (void)_setDate:(id)date animated:(BOOL)animated forced:(BOOL)forced;	// 0x301b5da1
- (void)_setDateComponent:(id)component withElement:(unsigned)element;	// 0x301be90d
- (void)_setHidesLabels:(BOOL)labels;	// 0x30294f9d
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x30295031
- (void)_setupCell:(id)cell atRow:(int)row inColumn:(int)column withElementFlag:(unsigned)elementFlag;	// 0x301bc335
- (void)_setupWeekMonthDayCell:(id)cell atRow:(int)row inColumn:(int)column;	// 0x301babc9
- (BOOL)_shouldEnableAmPmForValue:(int)value column:(int)column;	// 0x301bd75d
- (BOOL)_shouldEnableDayForRow:(int)row column:(int)column;	// 0x301c0d65
- (BOOL)_shouldEnableHourForValue:(int)value column:(int)column;	// 0x301bd145
- (BOOL)_shouldEnableMinuteForValue:(int)value column:(int)column;	// 0x301bd5d1
- (BOOL)_shouldEnableMonthForRow:(int)row column:(int)column;	// 0x301c0b79
- (BOOL)_shouldEnableWeekMonthDayForRow:(int)row;	// 0x301bb191
- (BOOL)_shouldEnableYearForRow:(int)row;	// 0x301c11a1
- (BOOL)_showingDate;	// 0x30293ab9
- (id)_sizedPickerCellFont;	// 0x301b87a5
- (float)_tableRowHeight;	// 0x30293ab1
- (void)_todayChanged:(id)changed;	// 0x30293a21
- (id)_todayTextColor;	// 0x301c0cdd
- (void)_updateBitsForDate:(id)date andReload:(BOOL)reload animateIfNeeded:(BOOL)needed;	// 0x301b5235
- (BOOL)_updateDateOrTime;	// 0x301be1f9
- (void)_updateEnabledCells:(BOOL)cells;	// 0x301bd9a9
- (void)_updateLabels:(BOOL)labels;	// 0x301be079
- (void)_updateReferenceBits;	// 0x301b5509
- (void)_updateRowInColumn:(int)column toValue:(int)value withRepeatingAmount:(int)repeatingAmount element:(unsigned)element animated:(BOOL)animated;	// 0x301bdd49
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x301b79a9
- (int)_yearForRow:(int)row;	// 0x301c0ff9
// declared property getter: - (id)calendar;	// 0x301b55d9
- (float)contentWidth;	// 0x302949f1
// declared property getter: - (double)countDownDuration;	// 0x30294931
// declared property getter: - (id)date;	// 0x301bff75
// converted property getter: - (id)dateComponents;	// 0x301b5599
// declared property getter: - (int)datePickerMode;	// 0x30295061
- (void)dealloc;	// 0x301c2cdd
// declared property getter: - (id)delegateOfDatePicker;	// 0x302950c1
- (int)hour;	// 0x30293f7d
- (void)layoutSubviews;	// 0x301b65e9
// declared property getter: - (id)locale;	// 0x30295071
// declared property getter: - (id)maximumDate;	// 0x302950a1
// declared property getter: - (id)minimumDate;	// 0x30295091
- (int)minute;	// 0x30293fa5
// declared property getter: - (int)minuteInterval;	// 0x302950b1
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x301b5b71
- (id)pickerImageNamePrefix;	// 0x301b7939
- (void)pickerTableView:(id)view didChangeSelectionBarRowFrom:(int)from to:(int)to;	// 0x301bf6b1
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x301bfe9d
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x301b9cb1
- (float)pickerView:(id)view rowHeightForComponent:(int)component;	// 0x301b9a95
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x301ba745
- (float)pickerView:(id)view widthForComponent:(int)component;	// 0x301b7e29
- (void)pickerViewLoaded:(id)loaded;	// 0x302940f9
- (void)scrollerWillStartDragging:(id)scroller;	// 0x302946e1
- (int)second;	// 0x30293fcd
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x30293ad9
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x30294751
// declared property setter: - (void)setDate:(id)date;	// 0x30293d79
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x301b5d7d
// converted property setter: - (void)setDateComponents:(id)components;	// 0x3029470d
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x301b5685
- (void)setDelegate:(id)delegate;	// 0x301b5639
// declared property setter: - (void)setDelegateOfDatePicker:(id)datePicker;	// 0x302950d1
- (void)setFrame:(CGRect)frame;	// 0x301b4979
- (void)setHighlightsToday:(BOOL)today;	// 0x302946f5
// declared property setter: - (void)setLocale:(id)locale;	// 0x30293c3d
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x30293e99
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x30293db5
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x301b5a11
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x302940a1
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x30293ccd
- (id)shadowColor;	// 0x30294cb1
// declared property getter: - (id)timeZone;	// 0x30295081
@end

