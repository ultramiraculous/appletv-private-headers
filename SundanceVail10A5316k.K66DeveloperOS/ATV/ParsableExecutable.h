/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ParsableExecutable : XXUnknownSuperclass {
	id target_;	// 4 = 0x4
	NSString *ivarName_;	// 8 = 0x8
	Class argumentClass_;	// 12 = 0xc
}
@property(assign) Class argumentClass;	// G=0x4445d5; S=0x4445e5; @synthesize=argumentClass_
@property(copy) NSString *ivarName;	// G=0x44459d; S=0x4445b1; @synthesize=ivarName_
@property(retain) id target;	// G=0x444565; S=0x444579; @synthesize=target_
- (id)init;	// 0x444429
- (id)initWithTarget:(id)target ivarName:(id)name argumentClass:(Class)aClass;	// 0x44444d
// declared property getter: - (Class)argumentClass;	// 0x4445d5
- (void)dealloc;	// 0x4444e1
// declared property getter: - (id)ivarName;	// 0x44459d
// declared property setter: - (void)setArgumentClass:(Class)aClass;	// 0x4445e5
// declared property setter: - (void)setIvarName:(id)name;	// 0x4445b1
// declared property setter: - (void)setTarget:(id)target;	// 0x444579
// declared property getter: - (id)target;	// 0x444565
@end

