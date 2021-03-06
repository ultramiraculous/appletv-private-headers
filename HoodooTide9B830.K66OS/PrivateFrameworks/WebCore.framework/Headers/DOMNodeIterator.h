/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x35934d35; 
@property(readonly, retain) id<DOMNodeFilter> filter;	// G=0x35934fa9; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x35934d65; 
@property(readonly, retain) DOMNode *referenceNode;	// G=0x35934eed; 
@property(readonly, retain) DOMNode *root;	// G=0x35935065; 
@property(readonly, assign) unsigned whatToShow;	// G=0x35934d09; 
- (void)dealloc;	// 0x358502c1
- (void)detach;	// 0x35850355
// declared property getter: - (BOOL)expandEntityReferences;	// 0x35934d35
// declared property getter: - (id)filter;	// 0x35934fa9
- (void)finalize;	// 0x35935121
- (id)nextNode;	// 0x3584f5b1
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x35934d65
- (id)previousNode;	// 0x35934d95
// declared property getter: - (id)referenceNode;	// 0x35934eed
// declared property getter: - (id)root;	// 0x35935065
// declared property getter: - (unsigned)whatToShow;	// 0x35934d09
@end

