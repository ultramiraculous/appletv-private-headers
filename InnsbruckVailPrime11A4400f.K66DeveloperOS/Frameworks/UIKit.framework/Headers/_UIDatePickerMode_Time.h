/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIDatePickerMode.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time : _UIDatePickerMode {
	float _timeHourWidth;	// 116 = 0x74
	float _timeMinuteWidth;	// 120 = 0x78
	float _timeAMPMWidth;	// 124 = 0x7c
	NSString *_hourFormat;	// 128 = 0x80
	NSString *_minuteFormat;	// 132 = 0x84
}
+ (int)datePickerMode;	// 0x2f8ceffd
+ (unsigned)extractableCalendarUnits;	// 0x2f8cf001
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x2f8cf769
- (void)_shouldReset:(id)reset;	// 0x2f8cf0bd
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x2f8cf1a9
- (void)dealloc;	// 0x2f8cf045
- (int)displayedCalendarUnits;	// 0x2f8cf015
- (id)font;	// 0x2f8cf759
- (id)localizedFormatString;	// 0x2f8cf135
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x2f8cf919
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x2f8cf931
- (void)noteCalendarChanged;	// 0x2f8cf3bd
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x2f8cf435
- (void)resetComponentWidths;	// 0x2f8cf38d
- (float)rowHeight;	// 0x2f8cf345
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x2f8cf459
@end
