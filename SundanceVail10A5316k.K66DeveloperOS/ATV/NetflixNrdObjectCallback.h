/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixNrdObjectCallback : XXUnknownSuperclass {
	id target_;	// 4 = 0x4
	SEL selector_;	// 8 = 0x8
}
@property(assign, nonatomic) SEL selector;	// G=0x4a7f61; S=0x4a7f71; @synthesize=selector_
@property(retain, nonatomic) id target;	// G=0x4a7f2d; S=0x4a7f3d; @synthesize=target_
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x4a7d29
- (void)dealloc;	// 0x4a7d8d
- (void)perform;	// 0x4a7ded
- (void)performWithObject:(id)object;	// 0x4a7e49
- (void)performWithObject:(id)object afterDelay:(double)delay;	// 0x4a7ead
// declared property getter: - (SEL)selector;	// 0x4a7f61
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x4a7f71
// declared property setter: - (void)setTarget:(id)target;	// 0x4a7f3d
// declared property getter: - (id)target;	// 0x4a7f2d
@end

