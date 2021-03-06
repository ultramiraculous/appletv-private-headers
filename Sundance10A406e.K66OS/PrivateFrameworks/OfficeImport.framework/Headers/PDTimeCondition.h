/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimationTargetElement;

@interface PDTimeCondition : NSObject {
	BOOL mHasDelay;	// 4 = 0x4
	int mDelay;	// 8 = 0x8
	int mTriggerEvent;	// 12 = 0xc
	PDAnimationTargetElement *mTgtElement;	// 16 = 0x10
}
@property(assign) int delay;	// G=0x350dbf35; S=0x34f9a921; converted property
@property(retain) id tgtElement;	// G=0x350dbf55; S=0x35024705; converted property
@property(assign) int triggerEvent;	// G=0x350dbf45; S=0x34fecbbd; converted property
- (id)init;	// 0x34f9a79d
- (void)dealloc;	// 0x34f9c0d9
// converted property getter: - (int)delay;	// 0x350dbf35
- (BOOL)hasDelay;	// 0x350dbf25
// converted property setter: - (void)setDelay:(int)delay;	// 0x34f9a921
// converted property setter: - (void)setTgtElement:(id)element;	// 0x35024705
// converted property setter: - (void)setTriggerEvent:(int)event;	// 0x34fecbbd
// converted property getter: - (id)tgtElement;	// 0x350dbf55
// converted property getter: - (int)triggerEvent;	// 0x350dbf45
@end

