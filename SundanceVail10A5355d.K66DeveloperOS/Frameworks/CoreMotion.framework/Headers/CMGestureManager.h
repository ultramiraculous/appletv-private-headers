/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMGestureManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(copy) id gestureHandler;	// G=0x37768131; S=0x3776805d; 
+ (BOOL)isGestureServiceEnabled;	// 0x3776823d
+ (void)setGestureServiceEnabled:(BOOL)enabled;	// 0x37768259
- (id)init;	// 0x37767f19
- (id)initWithPriority:(int)priority;	// 0x37767f2d
- (void)dealloc;	// 0x37767f9d
// declared property getter: - (id)gestureHandler;	// 0x37768131
// declared property setter: - (void)setGestureHandler:(id)handler;	// 0x3776805d
@end

