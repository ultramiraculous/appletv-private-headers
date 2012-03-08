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
- (id)init;	// 0x32f63e51
- (id)addNodeFromSelection:(id)selection;	// 0x3319af9d
- (void)clearNodes;	// 0x33063629
- (void)dealloc;	// 0x330646f9
- (void)exploreFromNode:(id)node;	// 0x3319b075
- (void)exploreFromNode:(id)node outwards:(BOOL)outwards maxDepth:(int)depth;	// 0x3319b00d
@end
