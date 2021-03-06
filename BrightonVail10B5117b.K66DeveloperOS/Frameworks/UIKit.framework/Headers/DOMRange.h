/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebSelectionBlock.h"
#import <DOMRange.h> // Unknown library


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x32f803e9
- (id)asDomRange;	// 0x32f803f9
- (CGRect)boundingRect;	// 0x32f7fec1
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x32f80035
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x32f80509
- (BOOL)containsBlock:(id)block;	// 0x32f802c5
- (BOOL)containsRange:(id)range;	// 0x32f803fd
- (id)enclosingDocument;	// 0x32f80511
- (BOOL)isSameBlock:(id)block;	// 0x32f80225
- (id)largerParent;	// 0x32f801fd
- (id)parentBlock;	// 0x32f801b9
- (id)rangeOfContents;	// 0x32f8050d
- (BOOL)rendersAsBlock;	// 0x32f803bd
- (BOOL)selectable;	// 0x32f803c1
- (BOOL)strictlyContainsBlock:(id)block;	// 0x32f80341
- (void)unionWithRange:(id)range;	// 0x32f7fd81
- (id)webFrame;	// 0x32f7fe99
@end

