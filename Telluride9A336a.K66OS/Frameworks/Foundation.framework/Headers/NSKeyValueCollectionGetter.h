/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProxyGetter.h"

@class NSKeyValueNonmutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {
@private
	NSKeyValueNonmutatingCollectionMethodSet *_methods;	// 40 = 0x28
}
@property(readonly, retain) NSKeyValueNonmutatingCollectionMethodSet *methods;	// G=0x33683a65; converted property
- (id)initWithContainerClassID:(id)containerClassID key:(id)key methods:(id)methods proxyClass:(Class)aClass;	// 0x33683a09
- (void)dealloc;	// 0x336c1cd5
// converted property getter: - (id)methods;	// 0x33683a65
@end

