/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x34d8d0f9
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x34d8d161
@end

@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x34d8ee8d
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x34d8ee09
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x34d8eead
@end

@interface NSDate (NSDate)
- (id)initWithCoder:(id)coder;	// 0x34d94b51
- (Class)classForCoder;	// 0x34d6a5e1
- (void)encodeWithCoder:(id)coder;	// 0x34d6a5fd
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x34de9f19
- (int)_web_compareDay:(id)day;	// 0x34d765f9
- (BOOL)_web_isToday;	// 0x34d765b5
@end

@interface NSDate (NSDatePortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34e83491
@end

