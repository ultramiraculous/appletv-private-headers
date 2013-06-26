/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>


@interface OADProperties : NSObject {
	OADProperties *mParent;	// 4 = 0x4
	unsigned mIsMerged : 1;	// 8 = 0x8
	unsigned mIsMergedWithParent : 1;	// 8 = 0x8
}
@property(assign, getter=isMerged) BOOL merged;	// G=0x316cc659; S=0x316cc685; converted property
@property(assign, getter=isMergedWithParent) BOOL mergedWithParent;	// G=0x316cc66d; S=0x316cc6a1; converted property
@property(retain) id parent;	// G=0x316b127d; S=0x316b1211; converted property
+ (id)defaultProperties;	// 0x316d4f51
- (id)init;	// 0x316b0fc1
- (id)initWithDefaults;	// 0x316b0f69
- (void)dealloc;	// 0x316c1a85
- (void)flatten;	// 0x318f185d
- (unsigned)hash;	// 0x31778639
- (BOOL)isEqual:(id)equal;	// 0x318f18ad
// converted property getter: - (BOOL)isMerged;	// 0x316cc659
- (BOOL)isMergedPropertyForSelector:(SEL)selector;	// 0x316cc851
// converted property getter: - (BOOL)isMergedWithParent;	// 0x316cc66d
- (id)overrideForSelector:(SEL)selector;	// 0x316cbf79
- (void)p_setParent:(id)parent;	// 0x316b1221
// converted property getter: - (id)parent;	// 0x316b127d
- (void)removeUnnecessaryOverrides;	// 0x316d8d15
// converted property setter: - (void)setMerged:(BOOL)merged;	// 0x316cc685
// converted property setter: - (void)setMergedWithParent:(BOOL)parent;	// 0x316cc6a1
// converted property setter: - (void)setParent:(id)parent;	// 0x316b1211
- (void)setParent:(id)parent myRestrictedClass:(Class)aClass;	// 0x316de925
@end
