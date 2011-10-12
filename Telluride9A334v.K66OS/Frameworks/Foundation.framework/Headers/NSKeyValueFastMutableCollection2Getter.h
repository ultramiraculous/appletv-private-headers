/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProxyGetter.h"

@class NSKeyValueMutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {
@private
	NSKeyValueGetter *_baseGetter;	// 40 = 0x28
	NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;	// 44 = 0x2c
}
@property(readonly, retain) NSKeyValueGetter *baseGetter;	// G=0x30672e01; converted property
@property(readonly, retain) NSKeyValueMutatingCollectionMethodSet *mutatingMethods;	// G=0x30672e11; converted property
- (id)initWithContainerClassID:(id)containerClassID key:(id)key baseGetter:(id)getter mutatingMethods:(id)methods proxyClass:(Class)aClass;	// 0x30672d2d
// converted property getter: - (id)baseGetter;	// 0x30672e01
- (void)dealloc;	// 0x30672da1
// converted property getter: - (id)mutatingMethods;	// 0x30672e11
@end

