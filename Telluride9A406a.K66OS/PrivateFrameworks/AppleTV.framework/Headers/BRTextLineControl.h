/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTypesetLine;

__attribute__((visibility("hidden")))
@interface BRTextLineControl : BRControl {
@private
	BRTypesetLine *_line;	// 48 = 0x30
}
- (void)dealloc;	// 0x3309ed6d
- (void)drawInContext:(CGContextRef)context;	// 0x3309ee0d
- (void)setLine:(id)line;	// 0x3309edb9
@end

