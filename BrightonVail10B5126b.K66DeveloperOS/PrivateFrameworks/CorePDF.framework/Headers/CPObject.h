/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class NSMutableArray, CPPage, CPDocument;

@interface CPObject : NSObject <NSCopying, CPCopying> {
	CPObject *parent;	// 4 = 0x4
	NSMutableArray *children;	// 8 = 0x8
	CPDocument *document;	// 12 = 0xc
	CPPage *page;	// 16 = 0x10
	long zOrder;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *children;	// G=0x33830805; converted property
@property(retain) CPDocument *document;	// G=0x33830e09; S=0x33830d85; converted property
@property(retain) CPPage *page;	// G=0x33831081; S=0x33831071; converted property
@property(retain) CPObject *parent;	// G=0x3382f581; S=0x3382f571; converted property
@property(assign) long zOrder;	// G=0x33830e19; S=0x33830f1d; converted property
- (id)init;	// 0x3382eecd
- (id)initSuper;	// 0x3382ef51
- (void)accept:(id)accept;	// 0x33830d35
- (void)add:(id)add;	// 0x3382f909
- (void)add:(id)add atIndex:(unsigned)index;	// 0x3382faa5
- (void)addChildren:(id)children;	// 0x3382fcdd
- (void)addChildrenOf:(id)of;	// 0x3382fe01
- (id)ancestorOfClass:(Class)aClass;	// 0x33830255
- (id)childAtIndex:(unsigned)index;	// 0x3382f639
// converted property getter: - (id)children;	// 0x33830805
- (id)childrenNotOfClass:(Class)aClass;	// 0x338303fd
- (id)childrenOfClass:(Class)aClass;	// 0x33830341
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x338302a9
- (void)clearCachedInfo;	// 0x33830f2d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x3382f271
- (id)copyWithZone:(NSZone *)zone;	// 0x3382f0dd
- (id)copyWithoutChildren;	// 0x3382f241
- (unsigned)count;	// 0x3382f591
- (unsigned)countOfClass:(Class)aClass;	// 0x3382f5b1
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x33830c5d
- (void)dealloc;	// 0x3382ef7d
- (int)depth;	// 0x338310f9
- (id)descendantsOfClass:(Class)aClass;	// 0x338309c1
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x33830815
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x338309e9
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x3383091d
- (void)disposeDescendants;	// 0x3382f029
// converted property getter: - (id)document;	// 0x33830e09
- (id)firstChild;	// 0x3382f715
- (id)firstDescendantOfClass:(Class)aClass;	// 0x33830b25
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x33830f51
- (id)firstSibling;	// 0x3382f8b9
- (unsigned)indexOf:(id)of;	// 0x33830d39
- (BOOL)isEqual:(id)equal;	// 0x33830d59
- (id)lastChild;	// 0x3382f759
- (id)lastDescendantOfClass:(Class)aClass;	// 0x33830bc9
- (id)lastSibling;	// 0x3382f86d
- (void)map:(SEL)map target:(id)target;	// 0x33830719
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x33830575
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x338304d9
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x33830785
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x338305f9
- (id)newTakeChildren;	// 0x3382f379
- (id)newTakeChildrenAmong:(id)among;	// 0x3382f431
- (id)nextSibling;	// 0x3382f791
// converted property getter: - (id)page;	// 0x33831081
// converted property getter: - (id)parent;	// 0x3382f581
- (void)performSelector:(SEL)selector;	// 0x338304b9
- (id)previousSibling;	// 0x3382f809
- (void)promoteChildren;	// 0x33830195
- (void)recomputeZOrder;	// 0x33830e29
- (void)remove;	// 0x33830045
- (void)remove:(id)remove;	// 0x3382fec5
- (void)removeAll;	// 0x3383015d
- (void)removeFirstChild;	// 0x3382ff99
- (void)removeLastChild;	// 0x3382fff1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3383006d
// converted property setter: - (void)setDocument:(id)document;	// 0x33830d85
// converted property setter: - (void)setPage:(id)page;	// 0x33831071
// converted property setter: - (void)setParent:(id)parent;	// 0x3382f571
// converted property setter: - (void)setZOrder:(long)order;	// 0x33830f1d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x338309d5
- (void)updateZOrder:(long)order;	// 0x33830edd
// converted property getter: - (long)zOrder;	// 0x33830e19
@end

