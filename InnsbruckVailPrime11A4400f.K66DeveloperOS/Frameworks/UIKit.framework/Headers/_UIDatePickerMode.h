/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class NSArray, UIColor, NSDate, NSString, _UIDatePickerView, UIFont, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject {
	NSDateComponents *_selectedDateComponents;	// 4 = 0x4
	NSDateComponents *_baseDateComponents;	// 8 = 0x8
	unsigned *_elements;	// 12 = 0xc
	int _yearsSinceBaseDate;	// 16 = 0x10
	NSRange _maxDayRange;	// 20 = 0x14
	NSRange _maxMonthRange;	// 28 = 0x1c
	NSString *_localizedFormatString;	// 36 = 0x24
	NSArray *_dateFormatters;	// 40 = 0x28
	UIColor *_todayTextColor;	// 44 = 0x2c
	UIFont *_amPmFont;	// 48 = 0x30
	UIFont *_font;	// 52 = 0x34
	UIFont *_defaultTimeFont;	// 56 = 0x38
	NSString *_amString;	// 60 = 0x3c
	NSString *_pmString;	// 64 = 0x40
	NSDateComponents *_todayDateComponents;	// 68 = 0x44
	_UIDatePickerView *_datePickerView;	// 72 = 0x48
	unsigned _numberOfComponents;	// 76 = 0x4c
	int _minuteInterval;	// 80 = 0x50
	NSDate *_minimumDate;	// 84 = 0x54
	NSDateComponents *_minimumDateComponents;	// 88 = 0x58
	NSDate *_maximumDate;	// 92 = 0x5c
	NSDateComponents *_maximumDateComponents;	// 96 = 0x60
	NSDate *_baseDate;	// 100 = 0x64
	NSDate *_originatingDate;	// 104 = 0x68
	double _todaySinceReferenceDate;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) UIFont *amPmFont;	// G=0x2f8ce4a5; 
@property(readonly, assign, nonatomic) NSString *amString;	// G=0x2f8ce349; 
@property(retain, nonatomic) NSDate *baseDate;	// G=0x2f56a9c5; S=0x2f5634e5; @synthesize=_baseDate
@property(retain, nonatomic) NSDateComponents *baseDateComponents;	// G=0x2f56aa31; S=0x2f56348d; 
@property(readonly, assign, nonatomic) int datePickerMode;	// G=0x2f563749; 
@property(assign, nonatomic) _UIDatePickerView *datePickerView;	// G=0x2f5635e5; S=0x2f563185; @synthesize=_datePickerView
@property(readonly, assign, nonatomic) UIFont *defaultTimeFont;	// G=0x2f8ce411; 
@property(readonly, assign, nonatomic) int displayedCalendarUnits;	// G=0x2f563aed; 
@property(assign, nonatomic) unsigned *elements;	// G=0x2f564481; S=0x2f563505; 
@property(readonly, assign, nonatomic) UIFont *font;	// G=0x2f56651d; 
@property(readonly, assign, nonatomic, getter=is24Hour) BOOL is24Hour;	// G=0x2f566815; @dynamic
@property(readonly, assign, nonatomic, getter=isTimeIntervalMode) BOOL isTimeIntervalMode;	// G=0x2f8ce649; @dynamic
@property(retain, nonatomic) NSString *localizedFormatString;	// G=0x2f8ce64d; S=0x2f56354d; @synthesize=_localizedFormatString
@property(readonly, assign, nonatomic) NSDate *maximumDate;	// G=0x2f8cef45; @synthesize=_maximumDate
@property(readonly, assign, nonatomic) NSDateComponents *maximumDateComponents;	// G=0x2f8cef55; @synthesize=_maximumDateComponents
@property(readonly, assign, nonatomic) NSDate *minimumDate;	// G=0x2f8cef25; @synthesize=_minimumDate
@property(readonly, assign, nonatomic) NSDateComponents *minimumDateComponents;	// G=0x2f8cef35; @synthesize=_minimumDateComponents
@property(assign, nonatomic) int minuteInterval;	// G=0x2f8cef11; S=0x2f56314d; @synthesize=_minuteInterval
@property(assign, nonatomic) unsigned numberOfComponents;	// G=0x2f563e9d; S=0x2f563e89; @synthesize=_numberOfComponents
@property(retain, nonatomic) NSDate *originatingDate;	// G=0x2f56a72d; S=0x2f5647d5; @synthesize=_originatingDate
@property(readonly, assign, nonatomic) NSString *pmString;	// G=0x2f8ce3ad; 
@property(readonly, assign, nonatomic) float rowHeight;	// G=0x2f5686a9; 
@property(retain, nonatomic) NSDateComponents *selectedDateComponents;	// G=0x2f56a349; S=0x2f56bfdd; @synthesize=_selectedDateComponents
@property(readonly, assign, nonatomic) UIFont *sizedFont;	// G=0x2f566561; 
@property(retain, nonatomic) NSDateComponents *todayDateComponents;	// G=0x2f567ae1; S=0x2f563561; 
@property(assign, nonatomic) double todaySinceReferenceDate;	// G=0x2f8ce221; S=0x2f567bd9; @synthesize=_todaySinceReferenceDate
@property(readonly, assign, nonatomic) UIColor *todayTextColor;	// G=0x2f56ca91; 
@property(readonly, assign, nonatomic) float totalComponentWidth;	// G=0x2f8ce7e9; @dynamic
@property(assign, nonatomic) int yearsSinceBaseDate;	// G=0x2f8ce2a1; S=0x2f5634f5; @synthesize=_yearsSinceBaseDate
+ (id)_datePickerModeWithFormatString:(id)formatString datePickerView:(id)view;	// 0x2f8cdf1d
+ (id)_datePickerModeWithMode:(int)mode datePickerView:(id)view;	// 0x2f562eb5
+ (int)datePickerMode;	// 0x2f8cde95
+ (unsigned)extractableCalendarUnits;	// 0x2f8ce5c1
+ (void)initialize;	// 0x2f8cde11
+ (id)newDateFromGregorianYear:(int)gregorianYear month:(int)month day:(int)day timeZone:(id)zone;	// 0x2f5677c5
- (id)init;	// 0x2f562fe9
- (id)_dateByEnsuringValue:(int)value forCalendarUnit:(unsigned)calendarUnit;	// 0x2f5677f9
- (id)_dateForYearRow:(int)yearRow;	// 0x2f56a91d
- (int)_incrementForStaggeredTimeIntervals;	// 0x2f8ce819
- (BOOL)_isComponentScrolling:(int)scrolling;	// 0x2f56af3d
- (BOOL)_monthExists:(int)exists inYear:(int)year;	// 0x2f8ced91
- (int)_numberOfDaysInDateComponents:(id)dateComponents;	// 0x2f8cec65
- (BOOL)_scrollingAnyColumnExcept:(int)except;	// 0x2f56b8d1
- (BOOL)_shouldEnableValueForRow:(int)row column:(int)column;	// 0x2f56a051
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x2f8cee85
- (void)_shouldReset:(id)reset;	// 0x2f8cdf81
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)component usingSelectionBarValue:(BOOL)value;	// 0x2f56a3b5
// declared property getter: - (id)amPmFont;	// 0x2f8ce4a5
// declared property getter: - (id)amString;	// 0x2f8ce349
- (BOOL)areValidDateComponents:(id)components comparingUnits:(int)units;	// 0x2f56ab0d
// declared property getter: - (id)baseDate;	// 0x2f56a9c5
// declared property getter: - (id)baseDateComponents;	// 0x2f56aa31
- (id)calendar;	// 0x2f5635b9
- (unsigned)calendarUnitForComponent:(int)component;	// 0x2f5664dd
- (void)clearBaseDate;	// 0x2f563445
- (int)componentForCalendarUnit:(unsigned)calendarUnit;	// 0x2f566849
- (float)componentWidthForTwoDigitCalendarUnit:(unsigned)twoDigitCalendarUnit font:(id)font maxWidth:(float)width;	// 0x2f8ce055
- (id)dateComponentsByRestrictingSelectedComponents:(id)components withLastManipulatedColumn:(int)lastManipulatedColumn;	// 0x2f56c731
- (id)dateForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x2f569ea1
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x2f8cea55
- (id)dateFormatterForCalendarUnit:(unsigned)calendarUnit;	// 0x2f566d51
// declared property getter: - (int)datePickerMode;	// 0x2f563749
// declared property getter: - (id)datePickerView;	// 0x2f5635e5
- (int)dayForRow:(int)row;	// 0x2f56a79d
- (void)dealloc;	// 0x2f56d151
// declared property getter: - (id)defaultTimeFont;	// 0x2f8ce411
// declared property getter: - (int)displayedCalendarUnits;	// 0x2f563aed
// declared property getter: - (unsigned *)elements;	// 0x2f564481
- (int)eraForYearRow:(int)yearRow;	// 0x2f56b991
// declared property getter: - (id)font;	// 0x2f56651d
- (id)fontForCalendarUnit:(unsigned)calendarUnit;	// 0x2f569c91
- (int)hourForRow:(int)row;	// 0x2f8cea15
// declared property getter: - (BOOL)is24Hour;	// 0x2f566815
// declared property getter: - (BOOL)isTimeIntervalMode;	// 0x2f8ce649
- (void)loadDate:(id)date animated:(BOOL)animated;	// 0x2f5645dd
- (id)locale;	// 0x2f563d79
// declared property getter: - (id)localizedFormatString;	// 0x2f8ce64d
// declared property getter: - (id)maximumDate;	// 0x2f8cef45
// declared property getter: - (id)maximumDateComponents;	// 0x2f8cef55
// declared property getter: - (id)minimumDate;	// 0x2f8cef25
// declared property getter: - (id)minimumDateComponents;	// 0x2f8cef35
- (int)minuteForRow:(int)row;	// 0x2f8ce9c9
// declared property getter: - (int)minuteInterval;	// 0x2f8cef11
- (int)monthForRow:(int)row;	// 0x2f56a02d
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x2f8ce861
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x2f8ce8ed
- (void)noteCalendarChanged;	// 0x2f563271
// declared property getter: - (unsigned)numberOfComponents;	// 0x2f563e9d
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x2f8ce6d9
- (int)numberOfRowsInComponent:(int)component;	// 0x2f568949
// declared property getter: - (id)originatingDate;	// 0x2f56a72d
// declared property getter: - (id)pmString;	// 0x2f8ce3ad
- (NSRange)rangeForCalendarUnit:(unsigned)calendarUnit;	// 0x2f56bc79
- (void)resetComponentWidths;	// 0x2f8ce761
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;	// 0x2f8cec4d
- (int)rowForDate:(id)date dateComponents:(id)components component:(int)component currentRow:(int)row;	// 0x2f56bc19
- (int)rowForValue:(int)value forCalendarUnit:(unsigned)calendarUnit currentRow:(int)row;	// 0x2f8ceb21
// declared property getter: - (float)rowHeight;	// 0x2f5686a9
- (int)secondForRow:(int)row;	// 0x2f8ce97d
// declared property getter: - (id)selectedDateComponents;	// 0x2f56a349
// declared property setter: - (void)setBaseDate:(id)date;	// 0x2f5634e5
// declared property setter: - (void)setBaseDateComponents:(id)components;	// 0x2f56348d
// declared property setter: - (void)setDatePickerView:(id)view;	// 0x2f563185
// declared property setter: - (void)setElements:(unsigned *)elements;	// 0x2f563505
// declared property setter: - (void)setLocalizedFormatString:(id)string;	// 0x2f56354d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x2f56314d
// declared property setter: - (void)setNumberOfComponents:(unsigned)components;	// 0x2f563e89
// declared property setter: - (void)setOriginatingDate:(id)date;	// 0x2f5647d5
// declared property setter: - (void)setSelectedDateComponents:(id)components;	// 0x2f56bfdd
// declared property setter: - (void)setTodayDateComponents:(id)components;	// 0x2f563561
// declared property setter: - (void)setTodaySinceReferenceDate:(double)date;	// 0x2f567bd9
// declared property setter: - (void)setYearsSinceBaseDate:(int)date;	// 0x2f5634f5
// declared property getter: - (id)sizedFont;	// 0x2f566561
- (void)takeExtremesFromMinimumDate:(id)minimumDate maximumDate:(id)date;	// 0x2f563ed9
- (id)timeZone;	// 0x2f5635f9
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x2f569cc9
- (id)titleForRow:(int)row inComponent:(int)component;	// 0x2f569d5d
// declared property getter: - (id)todayDateComponents;	// 0x2f567ae1
// declared property getter: - (double)todaySinceReferenceDate;	// 0x2f8ce221
// declared property getter: - (id)todayTextColor;	// 0x2f56ca91
// declared property getter: - (float)totalComponentWidth;	// 0x2f8ce7e9
- (float)totalComponentWidthWithFont:(id)font;	// 0x2f566891
- (void)updateEnabledStateOfViewForRow:(int)row inComponent:(int)component;	// 0x2f56c525
- (void)updateSelectedDateComponentsWithNewValueInComponent:(int)component;	// 0x2f56a3a1
- (int)validateValue:(int)value forCalendarUnit:(unsigned)calendarUnit;	// 0x2f8cec49
- (int)valueForDate:(id)date dateComponents:(id)components calendarUnit:(unsigned)unit;	// 0x2f8ceae1
- (int)valueForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x2f569ef5
- (id)viewForRow:(int)row inComponent:(int)component reusingView:(id)view;	// 0x2f5697a5
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x2f8ce539
- (float)widthForComponent:(int)component maxWidth:(float)width;	// 0x2f5663d9
- (int)yearForRow:(int)row;	// 0x2f56b93d
// declared property getter: - (int)yearsSinceBaseDate;	// 0x2f8ce2a1
@end
