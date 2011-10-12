/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface _CPPowerAssertion : NSObject {
	unsigned _assertion;	// 4 = 0x4
	double _timeout;	// 8 = 0x8
	NSString *_identifier;	// 16 = 0x10
	NSArray *_stack;	// 20 = 0x14
}
@property(assign, nonatomic) double timeout;	// G=0x35b10db5; S=0x35b10dcd; @synthesize=_timeout
- (id)initWithIdentifier:(id)identifier timeout:(double)timeout;	// 0x35b11219
- (void)dealloc;	// 0x35b11119
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x35b10dcd
- (void)timedout;	// 0x35b10f91
// declared property getter: - (double)timeout;	// 0x35b10db5
@end

