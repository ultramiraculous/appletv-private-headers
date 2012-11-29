/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"


__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection {
	unsigned eventMask;	// 16 = 0x10
}
@property(readonly, assign) SEL action;	// G=0x303b63f1; 
@property(assign) unsigned eventMask;	// G=0x303b641d; S=0x3049b499; @synthesize
@property(readonly, assign) id target;	// G=0x303b63a5; 
- (id)initWithCoder:(id)coder;	// 0x303b1c11
// declared property getter: - (SEL)action;	// 0x303b63f1
- (void)connect;	// 0x303b62fd
- (void)connectForSimulator;	// 0x3049b339
- (id)description;	// 0x3049b419
- (void)encodeWithCoder:(id)coder;	// 0x3049b2dd
// declared property getter: - (unsigned)eventMask;	// 0x303b641d
// declared property setter: - (void)setEventMask:(unsigned)mask;	// 0x3049b499
// declared property getter: - (id)target;	// 0x303b63a5
@end
