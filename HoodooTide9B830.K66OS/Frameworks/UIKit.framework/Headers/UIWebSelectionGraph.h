/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectionGraph : NSObject {
@private
	NSMutableArray *_selectionNodes;	// 4 = 0x4
}
- (id)init;	// 0x300c2ca9
- (id)addNodeFromSelection:(id)selection;	// 0x302f9eb1
- (void)clearNodes;	// 0x301c24a5
- (void)dealloc;	// 0x301c3575
- (void)exploreFromNode:(id)node;	// 0x302f9f89
- (void)exploreFromNode:(id)node outwards:(BOOL)outwards maxDepth:(int)depth;	// 0x302f9f21
@end

