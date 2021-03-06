/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface SCRCTargetSelector : NSObject {
	id _target;	// 4 = 0x4
	SEL _selector;	// 8 = 0x8
}
@property(readonly, assign) SEL selector;	// G=0x325d99ad; converted property
@property(readonly, retain) id target;	// G=0x325da299; converted property
+ (id)targetSelectorWithTarget:(id)target selector:(SEL)selector;	// 0x325db975
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x325d92fd
// converted property getter: - (SEL)selector;	// 0x325d99ad
// converted property getter: - (id)target;	// 0x325da299
@end

