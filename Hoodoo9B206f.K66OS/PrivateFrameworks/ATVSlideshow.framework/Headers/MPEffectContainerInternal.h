/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPEffectContainerInternal : NSObject {
	double startTime;	// 4 = 0x4
	double duration;	// 12 = 0xc
	CGColorRef backgroundColor;	// 20 = 0x14
	NSString *uuid;	// 24 = 0x18
}
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x309cb411; S=0x309cb38d; @synthesize
@property(assign, nonatomic) double duration;	// G=0x309cb3e5; S=0x309cb3fd; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x309cb3b9; S=0x309cb3d1; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x309cb421; S=0x309cb431; @synthesize
// declared property getter: - (CGColorRef)backgroundColor;	// 0x309cb411
- (void)dealloc;	// 0x309cb325
// declared property getter: - (double)duration;	// 0x309cb3e5
- (void)finalize;	// 0x309cb2e1
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x309cb38d
// declared property setter: - (void)setDuration:(double)duration;	// 0x309cb3fd
// declared property setter: - (void)setStartTime:(double)time;	// 0x309cb3d1
// declared property setter: - (void)setUuid:(id)uuid;	// 0x309cb431
// declared property getter: - (double)startTime;	// 0x309cb3b9
// declared property getter: - (id)uuid;	// 0x309cb421
@end
