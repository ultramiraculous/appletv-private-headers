/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import </libobjc.A.h>

@class NSArray;

@interface AVTimeMarkerObservation : NSObject {
	id _observer;	// 4 = 0x4
	NSArray *_times;	// 8 = 0x8
	id _context;	// 12 = 0xc
	int _currentIndex;	// 16 = 0x10
}
@property(readonly, retain) id context;	// G=0x302bf1bd; converted property
@property(readonly, assign) int currentIndex;	// G=0x302bf1cd; converted property
@property(readonly, retain) id observer;	// G=0x302bf1ad; converted property
- (id)initWithObserver:(id)observer times:(id)times context:(id)context currentIndex:(int)index;	// 0x302beee1
// converted property getter: - (id)context;	// 0x302bf1bd
// converted property getter: - (int)currentIndex;	// 0x302bf1cd
- (void)dealloc;	// 0x302bef7d
- (BOOL)gotoTime:(double)time;	// 0x302befe1
- (double)nextInterestingTime;	// 0x302bf0b1
// converted property getter: - (id)observer;	// 0x302bf1ad
- (double)prevInterestingTime;	// 0x302bf12d
@end

