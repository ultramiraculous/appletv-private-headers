/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRTimer : XXUnknownSuperclass {
	BOOL _cancel;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	double _interval;	// 12 = 0xc
}
@property(assign) BOOL cancel;	// G=0x372a65; S=0x372a7d; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x372955
- (id)initWithName:(id)name;	// 0x372959
// declared property getter: - (BOOL)cancel;	// 0x372a65
- (void)dealloc;	// 0x3729c5
- (void)reset;	// 0x372a45
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x372a7d
@end

