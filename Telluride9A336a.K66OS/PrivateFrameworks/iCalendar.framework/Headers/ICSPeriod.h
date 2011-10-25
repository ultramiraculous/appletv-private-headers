/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSCoding> {
	ICSDateValue *_start;	// 4 = 0x4
	ICSDateValue *_end;	// 8 = 0x8
	ICSDuration *_duration;	// 12 = 0xc
}
@property(readonly, retain) ICSDuration *duration;	// G=0x34652d71; converted property
@property(readonly, retain) ICSDateValue *end;	// G=0x34652d61; converted property
@property(readonly, retain) ICSDateValue *start;	// G=0x34652d51; converted property
- (id)initWithCoder:(id)coder;	// 0x34652e19
- (id)initWithStart:(id)start;	// 0x34652c09
- (id)initWithStart:(id)start duration:(id)duration;	// 0x34652c9d
- (id)initWithStart:(id)start end:(id)end;	// 0x34652c5d
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3462e345
- (void)dealloc;	// 0x34652cdd
// converted property getter: - (id)duration;	// 0x34652d71
- (void)encodeWithCoder:(id)coder;	// 0x34652da1
// converted property getter: - (id)end;	// 0x34652d61
- (BOOL)isDurationBased;	// 0x34652d81
// converted property getter: - (id)start;	// 0x34652d51
@end

