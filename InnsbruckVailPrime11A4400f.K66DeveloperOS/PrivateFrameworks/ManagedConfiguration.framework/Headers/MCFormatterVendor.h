/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import </libobjc.A.h>

@class NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : NSObject {
	NSNumberFormatter *_numberFormatter;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
}
@property(readonly, retain) NSNumberFormatter *numberFormatter;	// G=0x31385c99; converted property
+ (id)sharedInstance;	// 0x31385c15
- (id)init;	// 0x31385e11
- (void).cxx_destruct;	// 0x31385f41
- (void)_localeDidChange:(id)_locale;	// 0x31385d8d
- (void)dealloc;	// 0x31385ed5
// converted property getter: - (id)numberFormatter;	// 0x31385c99
@end

