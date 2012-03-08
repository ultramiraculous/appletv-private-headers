/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSDate.h> // Unknown library


@interface NSDate (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x342a7511
- (id)dateCeiledToNearestMinutes:(int)nearestMinutes;	// 0x342a78a5
- (id)dateFlooredToNearestMinutes:(int)nearestMinutes;	// 0x342a77a5
- (BOOL)isToday;	// 0x342a7649
- (BOOL)isTomorrow;	// 0x342a7731
- (BOOL)isYesterday;	// 0x342a76bd
@end

@interface NSDate (BRDateDisplay)
- (id)expiryDescription;	// 0x342a7e99
- (id)stringForDisplayingMonthDayYear;	// 0x342a7c19
- (id)stringForGeneralDisplay;	// 0x342a7a61
- (id)stringForMonthDayFormat;	// 0x342a7cc5
- (id)stringForReleaseDateDisplay;	// 0x342a7b75
- (id)stringFromDateForTVShows;	// 0x342a79c5
@end

@interface NSDate (ISO8601)
- (id)stringForISO8601CombinedDateAndTime;	// 0x342a80b5
@end

@interface NSDate (BRDisplayString)
- (id)displayString;	// 0x342a93e5
@end
