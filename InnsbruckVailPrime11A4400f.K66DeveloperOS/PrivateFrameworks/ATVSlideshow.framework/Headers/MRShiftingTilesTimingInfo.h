/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSArray, NSIndexSet, NSMutableArray;

@interface MRShiftingTilesTimingInfo : NSObject {
	BOOL fallLeft;	// 4 = 0x4
	int fallDirection;	// 8 = 0x8
	BOOL isTop;	// 12 = 0xc
	NSArray *layouts;	// 16 = 0x10
	int add;	// 20 = 0x14
	NSIndexSet *remove;	// 24 = 0x18
	int slideIndex;	// 28 = 0x1c
	NSMutableArray *additionalTimingInfo;	// 32 = 0x20
	double duration;	// 36 = 0x24
}
@property(retain, nonatomic) NSArray *additionalTimingInfo;	// G=0x2fd30dad; S=0x2fd30dbd; @synthesize
@property(retain, nonatomic) NSArray *layouts;	// G=0x2fd30d6d; S=0x2fd30d7d; @synthesize
@property(retain, nonatomic) NSIndexSet *remove;	// G=0x2fd30d8d; S=0x2fd30d9d; @synthesize
// declared property getter: - (id)additionalTimingInfo;	// 0x2fd30dad
- (void)dealloc;	// 0x2fd30c39
- (id)description;	// 0x2fd30cc9
// declared property getter: - (id)layouts;	// 0x2fd30d6d
// declared property getter: - (id)remove;	// 0x2fd30d8d
// declared property setter: - (void)setAdditionalTimingInfo:(id)info;	// 0x2fd30dbd
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x2fd30d7d
// declared property setter: - (void)setRemove:(id)remove;	// 0x2fd30d9d
@end
