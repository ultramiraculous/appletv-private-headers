/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSTextBlock;

__attribute__((visibility("hidden")))
@interface NSLayoutManagerTextBlockHelper : NSObject {
	NSTextBlock *_block;	// 4 = 0x4
	CGRect _layoutRect;	// 8 = 0x8
	CGRect _boundsRect;	// 24 = 0x18
}
- (id)initWithTextBlock:(id)textBlock layoutRect:(CGRect)rect boundsRect:(CGRect)rect3;	// 0x375605b1
- (void)dealloc;	// 0x37560641
@end

