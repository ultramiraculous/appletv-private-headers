/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
	BRControl *_base;	// 84 = 0x54
	BRImageControl *_shimmer;	// 88 = 0x58
	float _offset;	// 92 = 0x5c
}
@property(assign) float offset;	// G=0x30707d; S=0x30702d; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x306df9
- (id)init;	// 0x307019
- (id)initWithOffset:(float)offset;	// 0x306e5d
- (id)_calculateKeyTimes;	// 0x30741d
- (id)_calculatePositionValues;	// 0x307331
- (void)dealloc;	// 0x30708d
- (void)layoutSubcontrols;	// 0x3070f1
// converted property getter: - (float)offset;	// 0x30707d
// converted property setter: - (void)setOffset:(float)offset;	// 0x30702d
@end

