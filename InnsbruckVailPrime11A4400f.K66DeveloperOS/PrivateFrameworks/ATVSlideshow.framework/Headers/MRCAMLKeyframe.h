/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCopying.h"
#import </libobjc.A.h>
#import "ATVSlideshow-Structs.h"

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {
	MRCAMLBezierData *spline;	// 4 = 0x4
	float value0;	// 8 = 0x8
	float value1;	// 12 = 0xc
	double time;	// 16 = 0x10
}
@property(retain, nonatomic) MRCAMLBezierData *spline;	// G=0x2fd72539; S=0x2fd72549; @synthesize
- (id)copyWithZone:(NSZone *)zone;	// 0x2fd72485
- (void)dealloc;	// 0x2fd72441
// declared property setter: - (void)setSpline:(id)spline;	// 0x2fd72549
// declared property getter: - (id)spline;	// 0x2fd72539
@end

