/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject {
	BOOL animated;	// 4 = 0x4
	double duration;	// 8 = 0x8
	int outDirection;	// 16 = 0x10
	BOOL force;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL animated;	// G=0x32b5cca9; S=0x32ae85e9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x32b5dd81; S=0x32ae85f9; @synthesize
@property(assign, nonatomic) BOOL force;	// G=0x32ca54e5; S=0x32bba8ad; @synthesize
@property(assign, nonatomic) int outDirection;	// G=0x32b5b725; S=0x32ae860d; @synthesize
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;	// 0x32ae8561
+ (id)animationStyleDefault;	// 0x32ae8529
+ (id)animationStyleImmediate;	// 0x32bbb6e1
// declared property getter: - (BOOL)animated;	// 0x32b5cca9
- (id)description;	// 0x32e1a0a9
// declared property getter: - (double)duration;	// 0x32b5dd81
// declared property getter: - (BOOL)force;	// 0x32ca54e5
- (BOOL)isEqual:(id)equal;	// 0x32c43edd
// declared property getter: - (int)outDirection;	// 0x32b5b725
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x32ae85e9
// declared property setter: - (void)setDuration:(double)duration;	// 0x32ae85f9
// declared property setter: - (void)setForce:(BOOL)force;	// 0x32bba8ad
// declared property setter: - (void)setOutDirection:(int)direction;	// 0x32ae860d
@end
