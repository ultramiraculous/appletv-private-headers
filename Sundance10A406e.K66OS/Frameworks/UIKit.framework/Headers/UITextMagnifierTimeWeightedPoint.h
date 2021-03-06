/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject {
	int m_index;	// 4 = 0x4
	struct {
		CGPoint point;
		double time;
	} m_points[16];	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGPoint weightedPoint;	// G=0x30b8e291; 
- (void)addPoint:(CGPoint)point;	// 0x30b8e239
- (void)clearHistory;	// 0x30b8e1f1
- (CGSize)displacementInInterval:(double)interval;	// 0x30b8e471
- (CGSize)displacementInInterval:(double)interval priorTo:(double)to;	// 0x30b8e4b9
- (float)distanceCoveredInInterval:(double)interval;	// 0x30b8e441
- (float)distanceCoveredInInterval:(double)interval priorTo:(double)to;	// 0x30b8e5c5
- (BOOL)historyCovers:(double)covers;	// 0x30b8e379
// declared property getter: - (CGPoint)weightedPoint;	// 0x30b8e291
@end

