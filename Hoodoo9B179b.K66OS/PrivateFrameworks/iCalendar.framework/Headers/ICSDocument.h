/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library

@class ICSCalendar;

@interface ICSDocument : NSObject {
	ICSCalendar *_calendar;	// 4 = 0x4
}
@property(readonly, retain) ICSCalendar *calendar;	// G=0x31361fb1; converted property
- (id)initWithCalendar:(id)calendar;	// 0x31361f11
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31361d6d
- (id)initWithData:(id)data encoding:(unsigned)encoding options:(unsigned)options error:(id *)error;	// 0x31361dcd
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x31361e59
- (id)initWithICSString:(id)icsstring options:(unsigned)options error:(id *)error;	// 0x31361d35
- (id)ICSDataWithOptions:(unsigned)options;	// 0x31361fc1
- (id)ICSStringWithOptions:(unsigned)options;	// 0x31362045
// converted property getter: - (id)calendar;	// 0x31361fb1
- (void)dealloc;	// 0x31361f65
- (BOOL)validate:(id *)validate;	// 0x313620a5
@end

