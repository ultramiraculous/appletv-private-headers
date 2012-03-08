/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebSelectionBlock.h"
#import <DOMRange.h> // Unknown library
#import "UIKit-Structs.h"


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x302dd761
- (id)asDomRange;	// 0x302dd5d1
- (CGRect)boundingRect;	// 0x302de411
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x302dd5d5
- (BOOL)containsBlock:(id)block;	// 0x302dd7ed
- (BOOL)containsRange:(id)range;	// 0x302de001
- (id)enclosingDocument;	// 0x302dd73d
- (BOOL)isSameBlock:(id)block;	// 0x302dd865
- (id)largerParent;	// 0x302dd8f5
- (id)parentBlock;	// 0x302dd919
- (id)rangeOfContents;	// 0x302dd5d9
- (BOOL)rendersAsBlock;	// 0x302dd5c9
- (BOOL)selectable;	// 0x302dd5cd
- (BOOL)strictlyContainsBlock:(id)block;	// 0x302dd775
- (void)unionWithRange:(id)range;	// 0x302dd979
- (id)webFrame;	// 0x302dd955
@end
