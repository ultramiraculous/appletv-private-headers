/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library

@class NSArray;

@interface EKPredicate : NSPredicate {
	NSArray *_calendars;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x31838c31; 
- (id)initWithCalendars:(id)calendars;	// 0x317ed811
- (id)initWithCoder:(id)coder;	// 0x31838bc1
// declared property getter: - (id)calendars;	// 0x31838c31
- (void)dealloc;	// 0x317f2f8d
- (void)encodeWithCoder:(id)coder;	// 0x317ee321
@end

