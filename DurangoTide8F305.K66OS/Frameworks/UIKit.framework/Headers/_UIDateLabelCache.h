/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _UIDateLabelCache : NSObject {
@private
	double _today;	// 4 = 0x4
	double _noon;	// 12 = 0xc
	double _tomorrow;	// 20 = 0x14
	double _previousWeek;	// 28 = 0x1c
	UIFont *_timeDesignatorFont;	// 36 = 0x24
	NSString *_amString;	// 40 = 0x28
	NSString *_pmString;	// 44 = 0x2c
	CGSize _amSize;	// 48 = 0x30
	CGSize _pmSize;	// 56 = 0x38
	CFDictionaryRef _dateStringCache;	// 64 = 0x40
	CFDateFormatterRef _timeFormatter;	// 68 = 0x44
	CFDateFormatterRef _shortDateFormatter;	// 72 = 0x48
	CFDateFormatterRef _shortTimeFormatter;	// 76 = 0x4c
	CFTimeZoneRef _tz;	// 80 = 0x50
	CFDictionaryRef _dateSizeCache;	// 84 = 0x54
	BOOL _designatorValid;	// 88 = 0x58
	BOOL _use24HourTime;	// 89 = 0x59
	BOOL _timeDesignatorAppearsBeforeTime;	// 90 = 0x5a
}
@property(readonly, assign) CGSize amSize;	// G=0x3212580d; converted property
@property(readonly, retain) NSString *amString;	// G=0x321252dd; converted property
@property(readonly, assign) CGSize pmSize;	// G=0x32125781; converted property
@property(readonly, retain) NSString *pmString;	// G=0x321252ad; converted property
@property(readonly, assign) BOOL timeDesignatorAppearsBeforeTime;	// G=0x32008545; converted property
@property(readonly, retain) UIFont *timeDesignatorFont;	// G=0x32007f51; converted property
@property(readonly, assign) BOOL use24HourTime;	// G=0x32125899; converted property
- (id)init;	// 0x32006d85
- (void)_loadDesignatorStrings;	// 0x32125691
- (void)_localeDidChange;	// 0x3212530d
- (void)_localeWillChange;	// 0x32125365
- (void)_significantTimeChange;	// 0x32125385
- (BOOL)_timeDesignatorAppearsBeforeTime;	// 0x32007a7d
- (void)_updateTodayAndNoon;	// 0x32007351
// converted property getter: - (CGSize)amSize;	// 0x3212580d
// converted property getter: - (id)amString;	// 0x321252dd
- (int)dateKeyForAbsoluteTime:(double)absoluteTime;	// 0x320072a5
- (id)dateStringForAbsoluteTime:(double)absoluteTime dateKey:(int)key;	// 0x3200744d
- (void)dealloc;	// 0x32125585
- (void)invalidateDateCache;	// 0x321253dd
- (void)invalidateDateSizeCache;	// 0x32008125
- (CGSize)mainTimeSizeForDateKey:(int)dateKey;	// 0x32007df9
- (double)noonAbsoluteTime;	// 0x3212522d
// converted property getter: - (CGSize)pmSize;	// 0x32125781
// converted property getter: - (id)pmString;	// 0x321252ad
- (void)setMainTimeSize:(CGSize)size forDateKey:(int)dateKey;	// 0x32007e89
// converted property getter: - (BOOL)timeDesignatorAppearsBeforeTime;	// 0x32008545
// converted property getter: - (id)timeDesignatorFont;	// 0x32007f51
- (id)timeDesignatorForAbsoluteTime:(double)absoluteTime;	// 0x320078f1
- (CGSize)timeDesignatorSizeForAbsoluteTime:(double)absoluteTime forFont:(id)font;	// 0x32007fa1
- (double)todayAbsoluteTime;	// 0x3212526d
// converted property getter: - (BOOL)use24HourTime;	// 0x32125899
@end
