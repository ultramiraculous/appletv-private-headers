/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
@private
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x302d764d; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x302d763d; @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// G=0x302d765d; S=0x302d766d; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x302d7621; S=0x302d758d; @synthesize
@property(assign, nonatomic) int phase;	// G=0x302d75cd; S=0x301c9f3d; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x302d75dd; S=0x302d75ed; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x302d75a1; S=0x302d75b9; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x301c9f2d; S=0x302d75fd; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x301c9e45
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x301c9ea1
// declared property getter: - (unsigned char)_pathIdentity;	// 0x302d764d
// declared property getter: - (unsigned char)_pathIndex;	// 0x302d763d
// declared property getter: - (float)_pathMajorRadius;	// 0x302d765d
- (CGPoint)getLocationInWindow;	// 0x302d7571
- (CGPoint)locationInView:(id)view;	// 0x301c9f4d
// declared property getter: - (CGPoint)locationInWindow;	// 0x302d7621
// declared property getter: - (int)phase;	// 0x302d75cd
- (CGPoint)previousLocationInView:(id)view;	// 0x302d750d
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x302d758d
// declared property setter: - (void)setPhase:(int)phase;	// 0x301c9f3d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x302d75ed
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x302d75b9
// declared property setter: - (void)setWindow:(id)window;	// 0x302d75fd
// declared property setter: - (void)set_pathMajorRadius:(float)radius;	// 0x302d766d
// declared property getter: - (unsigned)tapCount;	// 0x302d75dd
// declared property getter: - (double)timestamp;	// 0x302d75a1
// declared property getter: - (id)window;	// 0x301c9f2d
@end

