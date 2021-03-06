/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAXDelegateClearer : NSObject {
	id delegatee;	// 4 = 0x4
	id delegate;	// 8 = 0x8
	SEL clearMethod;	// 12 = 0xc
}
@property(assign, nonatomic) SEL clearMethod;	// G=0x360d7fcd; S=0x360d7fdd; @synthesize
@property(assign, nonatomic) id delegate;	// G=0x360d7fad; S=0x360d7fbd; @synthesize
@property(assign, nonatomic) id delegatee;	// G=0x360d7f8d; S=0x360d7f9d; @synthesize
// declared property getter: - (SEL)clearMethod;	// 0x360d7fcd
- (void)dealloc;	// 0x360d7e89
// declared property getter: - (id)delegate;	// 0x360d7fad
// declared property getter: - (id)delegatee;	// 0x360d7f8d
// declared property setter: - (void)setClearMethod:(SEL)method;	// 0x360d7fdd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x360d7fbd
// declared property setter: - (void)setDelegatee:(id)delegatee;	// 0x360d7f9d
@end

