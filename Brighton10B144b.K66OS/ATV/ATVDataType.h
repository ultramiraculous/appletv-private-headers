/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDataType : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	ATVDataType *_parent;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *name;	// G=0xd241d; S=0xd242d; @synthesize=_name
@property(retain, nonatomic) ATVDataType *parent;	// G=0xd243d; S=0xd244d; @synthesize=_parent
+ (void)initialize;	// 0xd22d5
- (id)initWithName:(id)name parent:(id)parent;	// 0xd22d9
- (id)description;	// 0xd23dd
- (unsigned)hash;	// 0xd23c1
- (BOOL)isEqual:(id)equal;	// 0xd2389
- (BOOL)isKindOf:(id)of;	// 0xd2339
// declared property getter: - (id)name;	// 0xd241d
// declared property getter: - (id)parent;	// 0xd243d
// declared property setter: - (void)setName:(id)name;	// 0xd242d
// declared property setter: - (void)setParent:(id)parent;	// 0xd244d
@end
