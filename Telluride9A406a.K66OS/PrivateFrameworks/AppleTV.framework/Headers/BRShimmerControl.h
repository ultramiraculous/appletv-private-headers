/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 48 = 0x30
	BRImageControl *_shimmer;	// 52 = 0x34
	float _offset;	// 56 = 0x38
}
@property(assign) float offset;	// G=0x3309f4c5; S=0x3309f471; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x3309f26d
- (id)init;	// 0x3309f45d
- (id)initWithOffset:(float)offset;	// 0x3309f2d1
- (id)_calculateKeyTimes;	// 0x3309f871
- (id)_calculatePositionValues;	// 0x3309f775
- (void)dealloc;	// 0x3309f4d5
- (void)layoutSubcontrols;	// 0x3309f535
// converted property getter: - (float)offset;	// 0x3309f4c5
// converted property setter: - (void)setOffset:(float)offset;	// 0x3309f471
@end

